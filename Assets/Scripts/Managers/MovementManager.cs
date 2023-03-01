using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;

public class MovementManager : MonoBehaviour
{
    [SerializeField] private Joystick joystick;

    //timer for send data
    private System.Timers.Timer _timer;
    private Clients connections;

    //cancel tick of SEND data
    private CancellationTokenSource cancelTokenSource = new CancellationTokenSource();
    private CancellationToken token;

    private Vector2 sumOfJoystickInput;

    /*
    public void SetMovement(Joystick joystick, Clients connections)
    {
        this.joystick = joystick;
        this.connections = connections;
        setTimerForMovement();
    }
    */

    private void Start()
    {
        connections = Clients.GetInstance();
        setTimerForMovement();
    }

    void Update()
    {
        if (joystick == null || connections == null) { return; }

        if (Mathf.Abs(joystick.Horizontal) > 0 || Mathf.Abs(joystick.Vertical) > 0)
        {
            sumOfJoystickInput += joystick.Direction;
        }
    }

    private void setTimerForMovement()
    {
        //====================timer===================================
        token = cancelTokenSource.Token;

        _timer = new System.Timers.Timer(Globals.TICKi);

        _timer.Elapsed += delegate {
            do_every_tick();
        };

        _timer.AutoReset = true;
        _timer.Enabled = true;
        //============================================================
    }

    public void do_every_tick()
    {
        if (token.IsCancellationRequested)
        {
            print("ticker of main game stopped ");

            _timer.Stop();
            _timer.Dispose();

            return;
        }

        try
        {
            if (sumOfJoystickInput != Vector2.zero)
            {
                byte[] bytes = ProtobufSchemes.SerializeProtoBuf(new MovementPacketFromClient(sumOfJoystickInput.x, sumOfJoystickInput.y, false));
                connections.SendUDP(bytes, true, Globals.PacketCode.MoveFromClient);
                sumOfJoystickInput = Vector2.zero;
            }

        }
        catch (Exception ex)
        {
            print(ex);
        }
    }

    private void OnApplicationQuit()
    {        
        if (_timer.Enabled) cancelTokenSource.Cancel();
    }
}
