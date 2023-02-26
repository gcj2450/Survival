using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TerrTest : MonoBehaviour
{
    [SerializeField] private Joystick joystick;
    [SerializeField] private Transform playerTransform;
    [SerializeField] private float playerSpeed;
    [SerializeField] private Camera mainCamera;

    [SerializeField] private GameObject example;


    // Start is called before the first frame update
    void Start()
    {
        Screen.SetResolution(1440, 720, true);
        Camera.main.aspect = 2;
        Application.targetFrameRate = 60;

        Mesh _mesh = example.GetComponent<MeshFilter>().mesh;

        for (int i = 0; i < _mesh.vertices.Length; i++)
        {

        }
    }

    // Update is called once per frame
    void Update()
    {
        if (joystick.Direction != Vector2.zero)
        {
            playerTransform.position += new Vector3(joystick.Direction.x, 0, joystick.Direction.y) * Time.deltaTime * playerSpeed;
            mainCamera.transform.position = new Vector3(0, 8, -4.5f) + playerTransform.position;
        }
    }
}
