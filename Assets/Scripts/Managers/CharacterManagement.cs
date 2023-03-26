using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using System;

public class CharacterManagement : MonoBehaviour
{
    [SerializeField] private AssetManager assetManager;
    
    private Characters mainPlayerCharacter;
    private Transform mainPlayer;
    
    private Dictionary<long,Characters> characters = new Dictionary<long, Characters> ();

    private Action<Vector3> terrainUpdater;
    private bool isFirstTerrainUpdate;
    public void SetTerrainUpdater(Action<Vector3> updater) => terrainUpdater = updater;
    public Characters GetMainPlayerCharacter() => mainPlayerCharacter;
    private PingMeter pingMeter;

    public void SetPingMeter(PingMeter pingMeter)
    {
        this.pingMeter = pingMeter;
    }


    public void InitPlayerData(long objectID, PlayerDataInitial data)
    {       
        if (!characters.ContainsKey(objectID))
        {                
            GameObject playerObject = Instantiate(
                assetManager.GetGameObjectAsset(data.AppearanceId),
                GameObject.Find("======Characters======").transform);

            Characters characterObject = playerObject.GetComponent<Characters>();
            characterObject.SetTransform(
                new Vector3(data.PositionX, data.PositionY, data.PositionZ), 
                new Vector3(data.RotationX, data.RotationY, data.RotationZ));
            
            if (characters.Count == 0)
            {
                print("main is #" + data.ObjectId);
                mainPlayerCharacter = characterObject;
                mainPlayer = playerObject.transform;
                characterObject.IsItMainPlayer = true;


                if (!isFirstTerrainUpdate)
                {
                    StartCoroutine(firstTerrainUpdate());
                }
            }

            characters.Add(objectID, characterObject);
        }       
        
    }

    public void UpdateMovementData(long objectID, MovementPacketFromServer data)
    {
        if (characters.ContainsKey(objectID))
        {
            //print(data.PositionX + " = " + data.PositionZ);

            if (characters[objectID].transform == mainPlayer)
            {
                pingMeter?.OutTimerData(Globals.Timer.ElapsedMilliseconds, (int)data.PacketOrder);             
                terrainUpdater?.Invoke(mainPlayer.position);

                characters[objectID].UpdateTransformForMainPlayer(
                new Vector3(data.PositionX, data.PositionY, data.PositionZ),
                new Vector3(data.RotationX, data.RotationY, data.RotationZ),
                data.PacketOrder
                );
            }
            else
            {
                characters[objectID].UpdateTransformForNonMain(
                new Vector3(data.PositionX, data.PositionY, data.PositionZ),
                new Vector3(data.RotationX, data.RotationY, data.RotationZ)
                );
            }
        }
        else
        {
            print(data.ObjectId + " = " + data.PacketOrder);

            GameObject playerObject = Instantiate(
                assetManager.GetGameObjectAsset(1),
                GameObject.Find("======Characters======").transform);

            Characters characterObject = playerObject.GetComponent<Characters>();
            characterObject.SetTransform(
                new Vector3(data.PositionX, data.PositionY, data.PositionZ),
                new Vector3(data.RotationX, data.RotationY, data.RotationZ));

            
            characters.Add(objectID, characterObject);
        }
    }

    public void UpdateMovementData(ListOfMovementPacketsFromServer data)
    {        
        foreach (var item in data.ListOfPackets.Keys)
        {
            if (characters.ContainsKey(item))
            {
                //print(data.PositionX + " = " + data.PositionZ);

                if (characters[item].transform == mainPlayer)
                {
                    pingMeter?.OutTimerData(Globals.Timer.ElapsedMilliseconds, (int)data.ListOfPackets[item].PacketOrder);                  
                    terrainUpdater?.Invoke(mainPlayer.position);

                    characters[item].UpdateTransformForMainPlayer(
                        new Vector3(data.ListOfPackets[item].PositionX, data.ListOfPackets[item].PositionY, data.ListOfPackets[item].PositionZ),
                        new Vector3(data.ListOfPackets[item].RotationX, data.ListOfPackets[item].RotationY, data.ListOfPackets[item].RotationZ),
                        data.ListOfPackets[item].PacketOrder
                    );
                }
                else
                {
                    characters[item].UpdateTransformForNonMain(
                        new Vector3(data.ListOfPackets[item].PositionX, data.ListOfPackets[item].PositionY, data.ListOfPackets[item].PositionZ),
                        new Vector3(data.ListOfPackets[item].RotationX, data.ListOfPackets[item].RotationY, data.ListOfPackets[item].RotationZ)
                    );
                }
            }
            else
            {
                print(item + " = " + data.ListOfPackets[item].PacketOrder);

                GameObject playerObject = Instantiate(
                    assetManager.GetGameObjectAsset(1),
                    GameObject.Find("======Characters======").transform);

                Characters characterObject = playerObject.GetComponent<Characters>();
                characterObject.SetTransform(
                    new Vector3(data.ListOfPackets[item].PositionX, data.ListOfPackets[item].PositionY, data.ListOfPackets[item].PositionZ),
                    new Vector3(data.ListOfPackets[item].RotationX, data.ListOfPackets[item].RotationY, data.ListOfPackets[item].RotationZ));


                characters.Add(item, characterObject);
            }
        }

        
    }


    private IEnumerator firstTerrainUpdate()
    {
        for (float i = 0; i < 2; i+=0.1f)
        {
            if (terrainUpdater != null)
            {
                terrainUpdater.Invoke(mainPlayer.position);
                break;
            }
            yield return new WaitForSeconds(0.1f);
        }

        isFirstTerrainUpdate = true;
    }
}
