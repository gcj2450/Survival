using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Characters : MonoBehaviour
{
    public Transform GetCharacterTransform() => characterTransform;
    public bool IsItMainPlayer;

    [SerializeField] private GameObject characterObject;
    [SerializeField] private Transform characterTransform;
    [SerializeField] private Animator _animator;
    private AnimatorManager characterAnimator;

    private Vector3 speedVector = Vector3.zero;
    private Vector3 newPositionFromPrediction = Vector3.zero;
    private Vector3 newPositionFromServer = Vector3.zero;
    private Vector3 correctedPosition = Vector3.zero;
    private Vector3 oldPosition = Vector3.zero;
    private float updateTimer, refreshTimer;
    private int tickForUpdate;

    [SerializeField] private Transform testCube;

    private void Start()
    {
        characterAnimator = new AnimatorManager();
        characterAnimator.SetAnimator(_animator);
    }

    public void SetTransform(Vector3 position, Vector3 rotation)
    {        
        characterTransform.position = position;
        characterTransform.eulerAngles = rotation;
        newPositionFromServer = position;
    }
        
    public void UpdateTransform(Vector3 position, Vector3 rotation)
    {        
        testCube.position = position;
        newPositionFromServer = position;
        characterTransform.rotation = Quaternion.Lerp(
            Quaternion.Euler(0, characterTransform.rotation.eulerAngles.y, 0), 
            Quaternion.Euler(rotation), 0.5f);

        
        if (!IsItMainPlayer)
        {
            characterTransform.position = Vector3.SmoothDamp(
                characterTransform.position, newPositionFromServer, ref speedVector, Time.deltaTime / 4);
        }
        

        updateTimer = 1;
    }

    public void UpdateTransformMainPlayerJoystick(Vector3 position, Vector3 rotation)
    {
        newPositionFromPrediction = position;

        
        characterTransform.position = Vector3.SmoothDamp(
                characterTransform.position, newPositionFromPrediction + 
                (newPositionFromServer - characterTransform.position) / (Globals.TICKf / Time.deltaTime), ref speedVector, Time.deltaTime / 4);
        
    }

    private void Update()
    {
        //print(Vector3.Distance(newPositionFromServer, newPositionFromPrediction));


        if (refreshTimer>Globals.TICKf)
        {
            refreshTimer = 0;
            
        }
        else
        {
            refreshTimer += Time.deltaTime;
        }

        
        if ((characterTransform.position - oldPosition).magnitude > 0.01f)
        {
            characterAnimator.SetNewAnimation(PlayerAnimationStates.run);
        }
        else
        {
            characterAnimator.SetNewAnimation(PlayerAnimationStates.idle);
        }

        //print((characterTransform.position - oldPosition).magnitude);
        oldPosition = characterTransform.position;

    }    

}
