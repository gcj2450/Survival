using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
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
    
    private const float ROTATION_SPEED = 0.3f;
    private const float WAIT_EXCEED_LIMIT = 2f;

    private Vector3 speedVector = Vector3.zero;
    private Vector3 previousDelta = Vector3.zero;
    private Vector3 correctionForPosition = Vector3.zero;

    private int packetsInPrediction = 0;

    private Vector3 positionToMove = Vector3.zero;
    private Vector3 rotationToMove = Vector3.zero;
    private Vector3 previousPositionToMove = Vector3.zero;
    private Vector3 deltaPositionToMove = Vector3.zero;
    private bool isAutoUpdate = true;
    private float smoothKoeff = 0;

    private Queue<Vector3> positions = new Queue<Vector3>();

    private Dictionary<long, Vector3> packetsFromServer = new Dictionary<long, Vector3>();

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
    }
        
    public void UpdateTransform(Vector3 position, Vector3 rotation, long packetOrder)
    {
        long currentTimeStamp = updateControlTimer.ElapsedMilliseconds;

        if (packetOrder > 0)
        {
            
            packetsFromServer.Add(packetOrder, position);            

            if (packetOrder > movementPacketOrder)
            {
                
                if (testCube != null) testCube.transform.localScale = Vector3.one;                
                movementPacketOrder = packetOrder;
                //print(Vector3.Distance(characterTransform.position, position) + " = " + (position - characterTransform.position).magnitude);

                if ((currentTimeStamp - lastUpdateTimeMark) / Globals.TICKi <= WAIT_EXCEED_LIMIT)
                {
                    

                    //SetNewUpdateData(position, rotation);
                }
                else
                {
                    //StartCoroutine(correctTransform(previousDelta));
                    //SetNewUpdateData(position, rotation, true);
                }

                if (Vector3.Distance(position, characterTransform.position) < 0.05f)
                {
                    correctionForPosition = characterTransform.position - position;
                    packetsInPrediction = 2;
                }

            }

            if (testCube != null) testCube.position = position;
            if (GameManager.datat != null && GameManager.datat.Length>600)
            {
                GameManager.datat = "";
            }
            GameManager.datat += (currentTimeStamp - lastUpdateTimeMark).ToString() + " = " + packetOrder + " = " + (position - characterTransform.position).magnitude.ToString("f3") + "\n";
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
        positions.Enqueue(position);
        rotationToMove = rotation;
        smoothKoeff = (position - characterTransform.position).magnitude / (Globals.TICKf/Time.fixedDeltaTime);

        //print((position - characterTransform.position).magnitude.ToString("f3") + " = " + Vector3.Distance(position, characterTransform.position).ToString("f3"));

        //characterTransform.rotation = Quaternion.Lerp(
        //   Quaternion.Euler(0, characterTransform.rotation.eulerAngles.y, 0),
         //   Quaternion.Euler(rotation), ROTATION_SPEED);
        
        //characterTransform.position = Vector3.SmoothDamp(
        //    characterTransform.position, position, ref speedVector, smoothKoeff);
        
    }

 
    private void FixedUpdate()
    {
        //print(Vector3.Distance(newPositionFromServer, characterTransform.position));
        //if (packetsInPrediction > 2) characterTransform.position += transform.forward * 0.1f;

        /*
        if (refreshTimer > Globals.TICKf*2)
        {
            refreshTimer = 0;
            previousPositionToMove = positionToMove;
            if (positions.Count > 0) positionToMove = positions.Dequeue();
        }
        else
        {
            refreshTimer += Time.deltaTime;
        }
        */

        if (packetsInPrediction > 0)
        {
            characterTransform.position = Vector3.SmoothDamp(
                characterTransform.position, positionToMove + correctionForPosition/2, ref speedVector, Time.fixedDeltaTime);
            packetsInPrediction--;
        }
        else
        {
            characterTransform.position = Vector3.SmoothDamp(
                characterTransform.position, positionToMove, ref speedVector, Time.fixedDeltaTime);
        }

        characterTransform.rotation = Quaternion.Lerp(
           Quaternion.Euler(0, characterTransform.rotation.eulerAngles.y, 0),
           Quaternion.Euler(rotationToMove), ROTATION_SPEED);

        //characterTransform.position = Vector3.SmoothDamp(
        //    characterTransform.position, positionToMove, ref speedVector, Time.fixedDeltaTime);
        //characterTransform.position = Vector3.MoveTowards(characterTransform.position, positionToMove, smoothKoeff);

        if ((characterTransform.position - oldPosition).magnitude > 0.01f)
        {
            characterAnimator.SetNewAnimation(PlayerAnimationStates.run);
        }
        else
        {
            characterAnimator.SetNewAnimation(PlayerAnimationStates.idle);
        }

        oldPosition = characterTransform.position;

    } 
    

    private IEnumerator correctTransform(Vector3 delta)
    {
        
        for (int i = 0; i < 3; i++)
        {

            characterTransform.position += transform.forward * 0.2f / 3;
            yield return new WaitForSeconds(Time.deltaTime);
        }
    }

}
