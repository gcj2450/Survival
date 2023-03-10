using NetCoreServer;
using System;
using System.Threading;
using UnityEngine;

public class SceneTest1 : MonoBehaviour
{
    //timer for send data
    private System.Timers.Timer _timer;
    
    //cancel tick of SEND data
    private CancellationTokenSource cancelTokenSource = new CancellationTokenSource();
    private CancellationToken token;

    private Vector2 sumOfJoystickInput;
    private Vector3 currVel;

    [SerializeField] private Joystick joystick;
    [SerializeField] private GameObject obj;
    private Clients connections;
    bool isOn;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.F))
        {
            //obj.transform.position = Vector3.SmoothDamp(obj.transform.position, new Vector3(5, 0, 0), ref currVel, Time.deltaTime);
            obj.transform.position = Vector3.MoveTowards(obj.transform.position, new Vector3(5, 0, 0), 10 * Time.deltaTime);
        }

        print(Mathf.Sqrt(joystick.Horizontal * joystick.Horizontal + joystick.Vertical * joystick.Vertical));

    }

}
