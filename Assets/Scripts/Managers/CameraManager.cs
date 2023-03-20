using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.TextCore.Text;

public class CameraManager : MonoBehaviour
{
    [SerializeField] private Transform cameraBody;

    private Characters mainPlayerCharacter;
    //private Transform mainPlayer;

    private Vector3 cameraShift;
    private Vector3 cameraAngle;
    private Vector3 cameraNewPosition;
    private Vector3 cameraSpeed;

    private void Start()
    {
        cameraShift = cameraBody.position;
        cameraAngle = cameraBody.eulerAngles;
    }

    public void SetCameraManager(Characters character)
    {
        mainPlayerCharacter = character;
        
        cameraBody.position = mainPlayerCharacter.GetCharacterTransform() + cameraShift;
    }

    private void Update()
    {
        if (mainPlayerCharacter == null) return;

        cameraBody.position = Vector3.SmoothDamp(
                cameraBody.position, mainPlayerCharacter.GetCharacterTransform() + cameraShift, ref cameraSpeed, 0.2f);      
    }
}
