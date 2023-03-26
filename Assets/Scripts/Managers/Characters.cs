using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;


public class Characters : MonoBehaviour
{
    public Vector3 GetCharacterTransform() => characterTransformPosition;
    public bool IsItMainPlayer;

    [SerializeField] private GameObject characterObject;
    private Vector3 characterTransformPosition;
    [SerializeField] private Transform playerVisualPosition;
    [SerializeField] private Animator _animator;

    //TODEL
    [SerializeField] private GameObject blueforServer;
    private ObjectPooling blueforServer_pool;

    private AnimatorManager characterAnimator;
    private long movementPacketOrder;

    //public Vector3 MainPlayerPosition = Vector3.zero;

    private const float ROTATION_SPEED = 0.5f;
    private const float WAIT_EXCEED_LIMIT = 2f;
    private const int INTERPOLATION_PACKET_LIMIT = 2;

    private Vector3 speedVector = Vector3.zero;
    private Vector3 correctionForPosition = Vector3.zero;
    private Vector3 positionToMove = Vector3.zero;
    private Vector3 rotationToMove = Vector3.zero;
    private Vector3 previousPositionToMove = Vector3.zero;
    private Vector3 deltaPositionToMove = Vector3.zero;
    private Vector3 currentNewPosition = Vector3.zero;

    private Vector3 oldPos = Vector3.zero;

    private int correctionCount = 0;
        
    public Vector3 mydelta = Vector3.zero;
    public Vector3 whatIsPredDelta = Vector3.zero;

    public Dictionary<int, Vector3> planned = new Dictionary<int, Vector3>();
    private List<Vector3> positions = new List<Vector3>();
    private Dictionary<long, Vector3> packetsFromServer = new Dictionary<long, Vector3>();
    
    private List<float> distanceDeltas = new List<float>();
    private float distanceDeltasAverage;
    private readonly float standartDistanceDeltasAverage = 0.3f;

    private long currentPacketID;
    private long oldPacketID;

    private Vector3 oldPosition = Vector3.zero;
    private float refreshTimer;
    private float smoothKoeff = 0;
        
    private long lastUpdateTimeMark, reconUpdateMark;

    [SerializeField] private Transform testCube;

    private void Start()
    {        
        characterAnimator = new AnimatorManager();
        characterAnimator.SetAnimator(_animator);
        //blueforServer_pool = new ObjectPooling(500, blueforServer);
    }

    public void SetTransform(Vector3 position, Vector3 rotation)
    {
        playerVisualPosition.position = position;
        playerVisualPosition.eulerAngles = rotation;
        positionToMove = position;
        rotationToMove = rotation;
        //MainPlayerPosition = position;
        characterTransformPosition = position;
        positions.Add(position);
    }

    public void UpdateTransformForNonMain(Vector3 position, Vector3 rotation)
    {
        characterTransformPosition = position;
        rotationToMove = rotation;
    }


    public void UpdateTransformForMainPlayer(Vector3 position, Vector3 rotation, long packetOrder)
    {
        long currentTimeStamp = Globals.Timer.ElapsedMilliseconds;
        

        if (packetOrder > 0)
        {
            if (testCube != null) testCube.transform.localScale = Vector3.one;

            currentPacketID = packetOrder;
            if (!packetsFromServer.ContainsKey(packetOrder)) packetsFromServer.Add(packetOrder, position);
            rotationToMove = rotation;

            float difference = (position - (characterTransformPosition - whatIsPredDelta)).magnitude;

            if (difference > 0.01f)
            {
                /*
                Vector3 difference = position - (characterTransform.position - whatIsPredDelta);
                if (difference.magnitude > 0.01f)
                {
                    characterTransform.position = position - whatIsPredDelta;
                }*/

             
                characterTransformPosition = position + whatIsPredDelta;
                //playerVisualPosition.position = position + whatIsPredDelta;
                //characterTransformPosition = position;
                positions.Add(characterTransformPosition);

                reconUpdateMark = currentTimeStamp;
                //print("reconsiled");
                //if (smoothKoeff < 0.08f) smoothKoeff += 0.01f; //if (smoothKoeff < 0.1f) smoothKoeff += 0.02f;
                //if (smoothKoeff < 0.08f) smoothKoeff += Time.deltaTime;
                //if (difference > 0.1f) print("correction: diff - " + difference + " and delta - " + whatIsPredDelta.magnitude +" = koeff "+ smoothKoeff);
            }            
            else if (whatIsPredDelta.magnitude > 0)
            {
                //if (smoothKoeff > 0.02f) smoothKoeff -= 0.01f;  //if (smoothKoeff > 0.05f) smoothKoeff -= 0.015f;
                //if (smoothKoeff > 0.02f) smoothKoeff -= Time.deltaTime;
                //print("OK: " + smoothKoeff);
            }

            if (packetOrder > movementPacketOrder)
            {
                                                                         
            }

            if (testCube != null) testCube.position = position;       
            lastUpdateTimeMark = currentTimeStamp;
        }
        else
        {
            SetNewUpdateDataFromPrediction(position, rotation);
        }
    }


    public void SetNewUpdateDataFromPrediction(Vector3 position, Vector3 rotation)
    {
        long currentTimeStamp = Globals.Timer.ElapsedMilliseconds;

        if ((currentTimeStamp - reconUpdateMark) > 20)
        {
            characterTransformPosition = position;
            //if (smoothKoeff > 0.02f) smoothKoeff -= Time.deltaTime;
            //positions.Add(characterTransformPosition);
            //rotationToMove = rotation;
        }
        
    }


    private void Update()
    {
        smoothKoeff = 0.1f;

        /*
        float dist = Vector3.Distance(playerVisualPosition.position, characterTransformPosition);

        if (whatIsPredDelta.magnitude > 0.05f)
        {
            if (smoothKoeff <= 0.1f)
            {
                smoothKoeff += Time.deltaTime;
            }
            else if (smoothKoeff > 0.1f)
                {
                    smoothKoeff -= Time.deltaTime;
                }
        }
        else
        {
            smoothKoeff = Time.deltaTime;
        }*/


        //playerVisualPosition.position = characterTransformPosition;
        //characterTransform.position = Vector3.Lerp(characterTransform.position,
        //              positionToMove, smoothKoeff);
        /*
        if (whatIsPredDelta.magnitude <= 0.01f && smoothKoeff > 0)
        {
            smoothKoeff -= Time.deltaTime;
        }
        else if (whatIsPredDelta.magnitude > 0.01f && smoothKoeff < 0.05)
        {
            smoothKoeff += Time.deltaTime;
        }*/

        //updateArchiveDistanceDeltas(Vector3.Distance(playerVisualPosition.position, characterTransformPosition));


        //if (dist > 0.3f) print("dist: " + dist);

        //currentNewPosition = characterTransformPosition;

        /*
        if (dist >= (0.3f * 1.4f) && whatIsPredDelta.magnitude > 0.05f)
        {

            //if (smoothKoeff > 0.03) smoothKoeff -= Time.deltaTime;

            currentNewPosition = Vector3.Lerp(playerVisualPosition.position, characterTransformPosition, (0.3f * 1.4f / 0.3f));

            
        }
        else if (dist < (0.3f * 0.6f) && whatIsPredDelta.magnitude > 0.05f)
        {
            //if (smoothKoeff < 1.5f) smoothKoeff += Time.deltaTime;
            currentNewPosition = Vector3.Lerp(playerVisualPosition.position, characterTransformPosition, (0.3f * 0.7f / 0.3f));
        }
*/

        //print("koeff: " + smoothKoeff);
        //print("distance: " + Vector3.Distance(playerVisualPosition.position, characterTransformPosition) + " aver: " + distanceDeltasAverage);

            playerVisualPosition.position = Vector3.SmoothDamp(
                playerVisualPosition.position,
                characterTransformPosition,                
                ref speedVector,
                smoothKoeff);

        

        //print(smoothKoeff);
        //smoothKoeff = 0.01f;


        /*
        if (correctionCount>0)
        {
            //characterTransform.position = Vector3.SmoothDamp(
            //        characterTransform.position,
            //        positionToMove + correctionForPosition / (Globals.TICKf/Time.deltaTime),
            //        ref speedVector,
            //        Time.deltaTime);

            characterTransform.position = Vector3.Lerp(characterTransform.position,
                      positionToMove, smoothKoeff);



            correctionCount--;
        }
        else
        {
            //characterTransform.position = Vector3.SmoothDamp(
            //        characterTransform.position,
            //        positionToMove,
            //        ref speedVector,
            //        Time.deltaTime);

            characterTransform.position = Vector3.Lerp(characterTransform.position,
                      positionToMove, smoothKoeff);
        }
*/

        //characterTransform.position = Vector3.Lerp(characterTransform.position,
        //              positionToMove, smoothKoeff);

        /*
        characterTransform.position = Vector3.MoveTowards(characterTransform.position, positionToMove, Vector3.Distance(characterTransform.position, positionToMove) / 2);
        */
        playerVisualPosition.rotation = Quaternion.Lerp(
            Quaternion.Euler(0, playerVisualPosition.rotation.eulerAngles.y, 0),
            Quaternion.Euler(rotationToMove), ROTATION_SPEED);

        
        //characterTransform.position = Vector3.MoveTowards(characterTransform.position, positionToMove, smoothKoeff);
        //print(dist);

        if (refreshTimer > 0.3f)
        {
            refreshTimer = 0;
            GameManager.datat = ((playerVisualPosition.position - oldPosition).magnitude * 100).ToString("f1");
        }
        else
        {
            refreshTimer += Time.deltaTime;
        }

        if ((characterTransformPosition - oldPosition).magnitude > 0.01f)
        {
            
            characterAnimator.SetNewAnimation(PlayerAnimationStates.run);
        }
        else
        {
            characterAnimator.SetNewAnimation(PlayerAnimationStates.idle);            
        }

        oldPosition = characterTransformPosition;
        previousPositionToMove = playerVisualPosition.position;
        oldPacketID = currentPacketID;
    }

    private void updateArchiveDistanceDeltas(float value)
    {
        if (value < 0.1f) return;

        if (distanceDeltas.Count > 5) distanceDeltasAverage = distanceDeltas.Average();
        if (value > (standartDistanceDeltasAverage * 0.8f) && value < (standartDistanceDeltasAverage * 1.2f))
        {
            distanceDeltas.Add(value);
        }            
        
        if (distanceDeltas.Count > 15)
        {
            distanceDeltas.Remove(distanceDeltas[0]);
        }
    }
   
}
