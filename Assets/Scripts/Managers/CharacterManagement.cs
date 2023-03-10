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
    
    private void Awake()
    {
        
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
            if (characters[objectID].transform == mainPlayer)
            {
                //cameraBody.DOMove(mainPlayer.position + cameraShift, 0.5f);
                //cameraBody.position = mainPlayer.position + cameraShift;
                //cameraNewPosition = mainPlayer.position + cameraShift;
                terrainUpdater?.Invoke(mainPlayer.position);
                                
                

                characters[objectID].UpdateTransform(
                new Vector3(data.PositionX, data.PositionY, data.PositionZ),
                new Vector3(data.RotationX, data.RotationY, data.RotationZ),
                data.PacketOrder
                );
            }
            else
            {
                characters[objectID].UpdateTransform(
                new Vector3(data.PositionX, data.PositionY, data.PositionZ),
                new Vector3(data.RotationX, data.RotationY, data.RotationZ),
                data.PacketOrder
                );
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
