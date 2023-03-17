using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.Rendering.HighDefinition;
using UnityEngine.UIElements;

public class Characters : MonoBehaviour
{
    public Transform GetCharacterTransform() => characterTransform;
    public bool IsItMainPlayer;

    [SerializeField] private GameObject characterObject;
    [SerializeField] private Transform characterTransform;
    [SerializeField] private Animator _animator;
    private AnimatorManager characterAnimator;
    private long movementPacketOrder;

    Vector3 older = Vector3.zero;
    
    private const float ROTATION_SPEED = 0.3f;
    private const float WAIT_EXCEED_LIMIT = 2f;
    private const int INTERPOLATION_PACKET_LIMIT = 2;

    private Vector3 finalPoint = Vector3.zero;

    private Vector3 speedVector = Vector3.zero;
    private Vector3 previousDelta = Vector3.zero;
    private Vector3 correctionForPosition = Vector3.zero;

    private int packetsInPrediction = 0;
    private int limitPrediction;

    private Vector3 positionToMove = Vector3.zero;
    private Vector3 rotationToMove = Vector3.zero;
    private Vector3 previousPositionToMove = Vector3.zero;
    private Vector3 deltaPositionToMove = Vector3.zero;
    
    private Dictionary<long, Vector3> packetsFromServer = new Dictionary<long, Vector3>();
    private List<float> distanceDeltas = new List<float>();
    private long currentPacketID;
    private long oldPacketID;

    private Vector3 oldPosition = Vector3.zero;
    private float refreshTimer;

    private Stopwatch updateControlTimer = new Stopwatch();
    private long lastUpdateTimeMark;

    [SerializeField] private Transform testCube;

    private void Start()
    {
        updateControlTimer.Start();
        characterAnimator = new AnimatorManager();
        characterAnimator.SetAnimator(_animator);
    }

    public void SetTransform(Vector3 position, Vector3 rotation)
    {   
        characterTransform.position = position;
        characterTransform.eulerAngles = rotation;
        positionToMove = position;
        rotationToMove = rotation;
    }
        
    public void UpdateTransform(Vector3 position, Vector3 rotation, long packetOrder)
    {
        long currentTimeStamp = updateControlTimer.ElapsedMilliseconds;

        if (packetOrder > 0)
        {
            currentPacketID = packetOrder;
            packetsFromServer.Add(packetOrder, position);      
            

            if (packetOrder > movementPacketOrder)
            {   
                if (testCube != null) testCube.transform.localScale = Vector3.one;                
                movementPacketOrder = packetOrder;
                rotationToMove = rotation;

                setDistanceDeltas(currentTimeStamp - lastUpdateTimeMark);
                finalPoint = position;

                
                if ((currentTimeStamp - lastUpdateTimeMark) / Globals.TICKi <= WAIT_EXCEED_LIMIT)
                {
                    setDistanceDeltas(currentTimeStamp - lastUpdateTimeMark);
                    finalPoint = position;
                    //correctionForPosition = position;
                    SetNewUpdateData(position, rotation);
                }
                else
                {
                    finalPoint = characterTransform.position + characterTransform.forward * interpolateDistance() * Globals.TICKi;
                    correctionForPosition = characterTransform.position + characterTransform.forward * interpolateDistance() * Globals.TICKi;
                    SetNewUpdateData(correctionForPosition, rotation);
                }
                
            }

            if (testCube != null) testCube.position = position;
            /*
            if (GameManager.datat != null && GameManager.datat.Length>600)
            {
                GameManager.datat = "";
            }
            GameManager.datat += (currentTimeStamp - lastUpdateTimeMark).ToString() + " = " + packetOrder + " = " + (position - characterTransform.position).magnitude.ToString("f3") + "\n";
            */
            lastUpdateTimeMark = currentTimeStamp;
        }
        else
        {
            SetNewUpdateData(position, rotation);
        }
    }

    public void SetNewUpdateData(Vector3 position, Vector3 rotation)
    {
        positionToMove = position;
        rotationToMove = rotation;

        characterTransform.position = Vector3.SmoothDamp(
                  characterTransform.position,
                  position,
                  ref speedVector,
                  Time.fixedDeltaTime);

        characterTransform.rotation = Quaternion.Lerp(
           Quaternion.Euler(0, characterTransform.rotation.eulerAngles.y, 0),
           Quaternion.Euler(rotationToMove), ROTATION_SPEED);

        /*
        long timeDelta = updateControlTimer.ElapsedMilliseconds - lastUpdateTimeMark;
        
        if (timeDelta > Globals.TICKi
            && timeDelta < 500
            && refreshTimer <= 0
            )
        {
            refreshTimer = Globals.TICKf;         
            finalPoint = characterTransform.position + characterTransform.forward * interpolateDistance() * Globals.TICKi;
        }  
        */


    }

 
    private void FixedUpdate()
    {   
        /*
        if ((finalPoint - characterTransform.position).magnitude > 0.01f)
        {
            characterTransform.position = Vector3.SmoothDamp(
                  characterTransform.position,
                  finalPoint, 
                  ref speedVector, 
                  Time.fixedDeltaTime / 2);
        }

        if (refreshTimer > 0)
        {
            refreshTimer -= Time.fixedDeltaTime;
        }
     
        characterTransform.rotation = Quaternion.Lerp(
           Quaternion.Euler(0, characterTransform.rotation.eulerAngles.y, 0),
           Quaternion.Euler(rotationToMove), ROTATION_SPEED);
        */
        if ((characterTransform.position - oldPosition).magnitude > 0.01f)
        {
            characterAnimator.SetNewAnimation(PlayerAnimationStates.run);
        }
        else
        {
            characterAnimator.SetNewAnimation(PlayerAnimationStates.idle);
            distanceDeltas.Clear();
        }

        oldPosition = characterTransform.position;
        oldPacketID = currentPacketID;
    }    
    
    private float interpolateDistance()
    {
        if (distanceDeltas.Count > 5)
        {            
            return distanceDeltas.Average();
        }
        else return 0.003f;
    }

    private void setDistanceDeltas(float deltaTime)
    {
        if (packetsFromServer.Count>2)
        {
            float delta = (packetsFromServer[currentPacketID] - packetsFromServer[currentPacketID - 1]).magnitude / deltaTime;
            distanceDeltas.Add(delta);
        }

        if (distanceDeltas.Count>10)
        {
            distanceDeltas.Remove(distanceDeltas[0]);
        }
        
    }

}
