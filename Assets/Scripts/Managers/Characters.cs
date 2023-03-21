using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
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

    private int correctionCount = 0;
        
    public Vector3 mydelta = Vector3.zero;
    public Vector3 whatIsPredDelta = Vector3.zero;

    public Dictionary<int, Vector3> planned = new Dictionary<int, Vector3>();
    
    private Dictionary<long, Vector3> packetsFromServer = new Dictionary<long, Vector3>();
    private Queue<Vector3> archive = new Queue<Vector3>();
    private List<float> distanceDeltas = new List<float>();
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
    }

    public void SetTransform(Vector3 position, Vector3 rotation)
    {
        playerVisualPosition.position = position;
        playerVisualPosition.eulerAngles = rotation;
        positionToMove = position;
        rotationToMove = rotation;
        //MainPlayerPosition = position;
        characterTransformPosition = position;
    }

    
        
    public void UpdateTransform(Vector3 position, Vector3 rotation, long packetOrder)
    {
        long currentTimeStamp = Globals.Timer.ElapsedMilliseconds;
        

        if (packetOrder > 0)
        {
            if (testCube != null) testCube.transform.localScale = Vector3.one;

            currentPacketID = packetOrder;
            packetsFromServer.Add(packetOrder, position);
            rotationToMove = rotation;

            //print(packetOrder + ": "                 
            //    + Vector3.Distance(position, characterTransform.position).ToString("f3") 
            //    + "   deltPred: " + whatIsPredDelta.magnitude + "  reop: " 
            //    + (position - (characterTransform.position - whatIsPredDelta)).magnitude.ToString("f3"));

            if ((position - (characterTransformPosition - whatIsPredDelta)).magnitude > 0.01f)
            {
                /*
                Vector3 difference = position - (characterTransform.position - whatIsPredDelta);
                if (difference.magnitude > 0.01f)
                {
                    characterTransform.position = position - whatIsPredDelta;
                }*/

                characterTransformPosition = position + whatIsPredDelta;

                reconUpdateMark = currentTimeStamp;
                //print("reconsiled");
                if (smoothKoeff < 0.1f) smoothKoeff += 0.02f; //if (smoothKoeff < 0.1f) smoothKoeff += 0.02f;
            }
            else if (whatIsPredDelta.magnitude > 0)
            {
                if (smoothKoeff > 0.05f) smoothKoeff -= 0.015f;  //if (smoothKoeff > 0.05f) smoothKoeff -= 0.015f;
            }

           
            
            //characterTransform.position = position - whatIsPredDelta;

            //characterTransform.eulerAngles = rotation;

            //float dist = Vector3.Distance(position, characterTransform.position);

            //print(dist);


            if (Vector3.Distance(position, characterTransformPosition) >0.03f)
            {
                //positionToMove = position;
                //characterTransform.DOMove(position, 0.5f);
                //correctionForPosition = position - characterTransform.position;
                //correctionCount = 2;
            }
            


            //characterTransform.DOMove(position, 0.1f);



            if (packetOrder > movementPacketOrder)
            {

                //movementPacketOrder = packetOrder;
                //rotationToMove = rotation;

                //setDistanceDeltas(currentTimeStamp - lastUpdateTimeMark);


                //correctionForPosition = position - characterTransform.position;

                /*
                if (Vector3.Distance(position, characterTransform.position) > 0.05f) 
                    characterTransform.DOMove(position, Time.fixedDeltaTime / 2);
                */


                


                if ((currentTimeStamp - lastUpdateTimeMark) / Globals.TICKi <= WAIT_EXCEED_LIMIT)
                {
                    

                    //setDistanceDeltas(currentTimeStamp - lastUpdateTimeMark);
                    //smoothKoeff = 0.85f;

                    //SetNewUpdateDataFromServer(position, rotation);

                    //finalPoint = position;
                    //correctionForPosition = position;

                    //characterTransform.DOMove(position, Time.fixedDeltaTime*2);

                    //if ((position - positionToMove).magnitude > 0.025f) correctionForPosition = position - characterTransform.position;//SetNewUpdateDataFromServer(position, rotation);
                }
                else
                {

                    //smoothKoeff = 0.8f;
                    //print("OOOOOOOPPPPPPPPPPPPSSSSSSSSSS");

                    //correctionForPosition = characterTransform.position + characterTransform.forward * interpolateDistance() * Globals.TICKi;
                    //SetNewUpdateDataFromServer(correctionForPosition, rotation);
                    //characterTransform.DOMove(correctionForPosition, Time.fixedDeltaTime * 2);
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
            SetNewUpdateDataFromPrediction(position, rotation);
        }
    }


    public void SetNewUpdateDataFromPrediction(Vector3 position, Vector3 rotation)
    {
        long currentTimeStamp = Globals.Timer.ElapsedMilliseconds;

        if ((currentTimeStamp - reconUpdateMark) > 20)
        {
            characterTransformPosition = position;
            //rotationToMove = rotation;
        }
        
    }


    private void Update()
    {
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

        if ((characterTransformPosition - oldPosition).magnitude > 0.01f)
        {
            characterAnimator.SetNewAnimation(PlayerAnimationStates.run);
        }
        else
        {
            characterAnimator.SetNewAnimation(PlayerAnimationStates.idle);
            distanceDeltas.Clear();
        }

        oldPosition = characterTransformPosition;
        previousPositionToMove = playerVisualPosition.position;
        oldPacketID = currentPacketID;
    }
   
}
