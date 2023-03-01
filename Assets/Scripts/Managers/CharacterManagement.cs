using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class CharacterManagement : MonoBehaviour
{
    [SerializeField] private AssetManager assetManager;
    [SerializeField] private Transform cameraBody;

    private Transform mainPlayer;
    private Vector3 cameraShift;
    private Vector3 cameraAngle;
    private Dictionary<long,Characters> characters = new Dictionary<long, Characters> ();

    private void Awake()
    {
        cameraShift = cameraBody.position;
        cameraAngle = cameraBody.eulerAngles;
    }

    public void InitPlayerData(long objectID, PlayerDataInitial data)
    {        
        if (!characters.ContainsKey(objectID))
        {                
            GameObject playerObject = Instantiate(
                assetManager.GetGameObjectAsset(data.AppearanceId),
                GameObject.Find("======Characters======").transform);

            Characters charObject = playerObject.GetComponent<Characters>();
            charObject.SetTransform(
                new Vector3(data.PositionX, data.PositionY, data.PositionZ), 
                new Vector3(data.RotationX, data.RotationY, data.RotationZ));
            
            if (characters.Count == 0)
            {
                mainPlayer = playerObject.transform;
                cameraBody.position = mainPlayer.position + cameraShift;
            }

            characters.Add(objectID, charObject);
        }       
        
    }

    public void UpdateMovementData(long objectID, MovementPacketFromServer data)
    {
        if (characters.ContainsKey(objectID))
        {
            characters[objectID].UpdateTransform(
                new Vector3(data.PositionX, data.PositionY, data.PositionZ), 
                new Vector3(data.RotationX, data.RotationY, data.RotationZ));

            if (characters[objectID].transform == mainPlayer)
            {
                cameraBody.DOMove(mainPlayer.position + cameraShift, 0.2f);
            }
        }
    }

    /*
    private void Update()
    {
        if (mainPlayer != null)
        {
            cameraBody.position = mainPlayer.position + cameraShift;
        }
    }
    */
}
