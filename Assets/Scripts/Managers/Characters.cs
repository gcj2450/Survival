using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;


public class Characters : MonoBehaviour
{
    public Vector3 GetCharacterTransform() => characterTransformPosition;
    public bool isItMainPlayer;
    public bool IsItMainPlayer
    {
        get => isItMainPlayer;

        set
        {
            if (value)
            {
                refreshMoveAnimationLimit = 0;
            }
            else
            {
                refreshMoveAnimationLimit = Globals.TICKf * 2;
            }

            isItMainPlayer = value;
        }
    }

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
    private const float WAIT_EXCEED_LIMIT = 1.5f;
    private const int INTERPOLATION_PACKET_LIMIT = 2;

    private Vector3 speedVector = Vector3.zero;
    private float previousPositionMagnitude;

    private Vector3 previousPosition = Vector3.zero;
    private Vector3 previousRotation = Vector3.zero;
    private Vector3 deltaToNonMain = Vector3.zero;

    private Vector3 positionToMove = Vector3.zero;
    private Vector3 rotationToMove = Vector3.zero;
    private int correctionCount = 0;
        
    public Vector3 mydelta = Vector3.zero;
    public Vector3 whatIsPredDelta = Vector3.zero;

    public Dictionary<int, Vector3> planned = new Dictionary<int, Vector3>();
    private List<Vector3> positions = new List<Vector3>();
    private Dictionary<long, Vector3> packetsFromServer = new Dictionary<long, Vector3>();
  
    private long currentPacketID;

    private Vector3 oldPosition = Vector3.zero;
    private float refreshTimer;
    private float smoothKoeff = 0.1f;
        
    private long lastUpdateTimeMark, reconUpdateMark, deltaUpdateMark;

    [SerializeField] private Transform testCube;

    //TO DEL
    private int unique;
    private float timer;
    private float refreshMoveAnimationLimit = 0;
    private bool isStop = true;

    private void Start()
    {        
        characterAnimator = new AnimatorManager();
        characterAnimator.SetAnimator(_animator);
        //blueforServer_pool = new ObjectPooling(1000, blueforServer);
        unique = UnityEngine.Random.Range(1000, 100000);
    }

    public void SetTransform(Vector3 position, Vector3 rotation)
    {
        print(position);
        playerVisualPosition.position = position;
        playerVisualPosition.eulerAngles = rotation;
        positionToMove = position;
        rotationToMove = rotation;
        //MainPlayerPosition = position;
        characterTransformPosition = position;
        oldPosition = position;
        positions.Add(position);        
    }

    public void UpdateTransformForNonMain(Vector3 position, Vector3 rotation)
    {


        long currentTimeStamp = Globals.Timer.ElapsedMilliseconds;
        deltaUpdateMark = currentTimeStamp - lastUpdateTimeMark;
        lastUpdateTimeMark = currentTimeStamp;

        characterTransformPosition = position;
        rotationToMove = rotation;

        deltaToNonMain = position - previousPosition;

        previousPosition = position;
        previousRotation = rotation;


        /*
        if ((position == Vector3.zero && rotation.y == 0) || previousPosition == position)
        {            
            isStop = true;            
            return;
        }
                
        isStop = false;

        //print("non: " + (position - characterTransformPosition).magnitude.ToString("f2"));

        smoothKoeff = 0.1f;

        characterTransformPosition = position;
        rotationToMove = rotation;     

        previousPosition = position;
        */

    }


    public void UpdateTransformForMainPlayer(Vector3 position, Vector3 rotation, long packetOrder)
    {
        long currentTimeStamp = Globals.Timer.ElapsedMilliseconds;
        deltaUpdateMark = currentTimeStamp - lastUpdateTimeMark;

        //if (packetOrder > 0)
        //{

        //GameObject g = blueforServer_pool.GetPrefab();
        //g.SetActive(true);
        //g.transform.position = position;

        characterTransformPosition = position;
        rotationToMove = rotation;

        //print((position - previousPosition).magnitude);

        previousPosition = position;
        previousRotation = rotation;

        //print(packetOrder + " = " + position + " = " + rotation);
        /*
        if (position == Vector3.zero && rotation.y == 0)
        {
            isStop = true;
            return;
        }


        isStop = false;
        if (testCube != null) testCube.transform.localScale = Vector3.one;

        currentPacketID = packetOrder;
        if (!packetsFromServer.ContainsKey(packetOrder)) packetsFromServer.Add(packetOrder, position);
        rotationToMove = rotation;

        float difference = (position - (characterTransformPosition - whatIsPredDelta)).magnitude;

        if (difference > 0.01f)
        {

            smoothKoeff = 0.1f;

            characterTransformPosition = position + whatIsPredDelta;          
            positions.Add(characterTransformPosition);

            reconUpdateMark = currentTimeStamp;

        }            
        */

        if (testCube != null) testCube.position = position;       
            lastUpdateTimeMark = currentTimeStamp;
        //}
        //else
        //{
        //    SetNewUpdateDataFromPrediction(position, rotation);
        //}
    }


    private void SetNewUpdateDataFromPrediction(Vector3 position, Vector3 rotation)
    {
        //long currentTimeStamp = Globals.Timer.ElapsedMilliseconds;

        //if ((currentTimeStamp - reconUpdateMark) > 15)
        //{
            characterTransformPosition = position;
            //if (smoothKoeff > 0.02f) smoothKoeff -= Time.deltaTime;
            //positions.Add(characterTransformPosition);
            //rotationToMove = rotation;
        //}
        
    }


    private void Update()
    {
        
        if (timer > 0.1f)
        {
            timer = 0;

            float positionMagnitude = (characterTransformPosition - oldPosition).magnitude;

            if (positionMagnitude > 0.01f)
            {
                characterAnimator.SetNewAnimation(PlayerAnimationStates.run);
            }
            else
            {
                characterAnimator.SetNewAnimation(PlayerAnimationStates.idle);
            }

            oldPosition = characterTransformPosition;
        }
        else
        {
            timer += Time.deltaTime;
        }
              
        smoothKoeff = 0.2f;

        
        playerVisualPosition.position = Vector3.SmoothDamp(
            playerVisualPosition.position,
            characterTransformPosition,
            ref speedVector,
            smoothKoeff);

      
        //playerVisualPosition.position = characterTransformPosition;

            playerVisualPosition.rotation = Quaternion.Lerp(
                Quaternion.Euler(0, playerVisualPosition.rotation.eulerAngles.y, 0),
                Quaternion.Euler(rotationToMove), ROTATION_SPEED);
                

     
        if (refreshTimer > 0.3f)
        {
            refreshTimer = 0;
            GameManager.datat = ((playerVisualPosition.position - oldPosition).magnitude * 100).ToString("f1");
        }
        else
        {
            refreshTimer += Time.deltaTime;
        }

        //print(unique + ": " + (characterTransformPosition - oldPosition).magnitude);
    }
   
}
