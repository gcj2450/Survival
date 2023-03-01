using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Characters : MonoBehaviour
{
    [SerializeField] private GameObject characterObject;
    [SerializeField] private Transform characterTransform;
    [SerializeField] private Animator characterAnimator;

    private Vector3 speedVector = Vector3.zero;
    private Vector3 newPosition = Vector3.zero;

    public void SetTransform(Vector3 position, Vector3 rotation)
    {        
        characterTransform.position = position;
        characterTransform.eulerAngles = rotation;
        newPosition = position;
    }
        
    public void UpdateTransform(Vector3 position, Vector3 rotation)
    {
        newPosition = position;
        characterTransform.eulerAngles = rotation;
    }

    private void Update()
    {
        characterTransform.position = Vector3.SmoothDamp(characterTransform.position, newPosition, ref speedVector, Time.deltaTime * 5f);
    }

}
