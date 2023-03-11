using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;

public class MovementManager : MonoBehaviour
{
    public bool IsPlayerCanMove = false;
    private bool isUpdateData;
    private Characters mainPlayerCharacter;
    private Transform mainPlayerTransform;
    private Vector3 playerPositionByPrediction = Vector3.zero;
    private Vector3 playerRotationByPrediction = Vector3.zero;


    [SerializeField] private Joystick joystick;
   
    //timer for send data
    private System.Timers.Timer _timer;
    private Clients connections;

    //cancel tick of SEND data
    private CancellationTokenSource cancelTokenSource = new CancellationTokenSource();
    private CancellationToken token;

    private Vector2 sumOfJoystickInput;
    private Vector2 sumOfJoystickInputPrediction;
    private float updateTimer;

    private void Start()
    {
        connections = Clients.GetInstance();
        setTimerForMovement();
    }

    public void SetMainPlayerCharacter(Characters character)
    {
        mainPlayerCharacter = character;
        mainPlayerTransform = mainPlayerCharacter.GetCharacterTransform();
        playerPositionByPrediction = mainPlayerTransform.position;
        playerRotationByPrediction = mainPlayerTransform.eulerAngles;
    }

    void FixedUpdate()
    {
        if (joystick == null || connections == null || !IsPlayerCanMove) { return; }

        if (Mathf.Abs(joystick.Horizontal) > 0 || Mathf.Abs(joystick.Vertical) > 0)
        {
            sumOfJoystickInput += joystick.Direction;
            
            MovementPrediction(joystick.Horizontal, joystick.Vertical, mainPlayerTransform.position,
                    mainPlayerTransform.eulerAngles, out playerPositionByPrediction, out playerRotationByPrediction,
                    1);
            mainPlayerCharacter.UpdateTransform(playerPositionByPrediction, playerRotationByPrediction, -1);
            
        }

        /*
        if (isUpdateData)
        {
            isUpdateData = false;

            MovementPrediction(sumOfJoystickInputPrediction.x, sumOfJoystickInputPrediction.y, mainPlayerTransform.position,
                    mainPlayerTransform.eulerAngles, out playerPositionByPrediction, out playerRotationByPrediction,
                    1);
            mainPlayerCharacter.UpdateTransform(playerPositionByPrediction, playerRotationByPrediction, -1);

            sumOfJoystickInputPrediction = Vector3.zero;
        }
        */
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
                isUpdateData = true;
                sumOfJoystickInputPrediction = sumOfJoystickInput;
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

    private void MovementPrediction(float Horizontal, float Vertical, Vector3 currentPosition, Vector3 currentRotation, 
        out Vector3 newPosition, out Vector3 newRotation, float speed)
    {
        newPosition = currentPosition;
        newRotation = currentRotation;

        const float Deg2Rad = (float)Math.PI / 180f;

        float speedKoeff = MathF.Sqrt(Horizontal * Horizontal + Vertical * Vertical);
        speedKoeff = speedKoeff <= 3 ? speedKoeff : 3;

        float brutto_angle = MathF.Atan2(Horizontal, Vertical) * 180 / MathF.PI;

        float new_position_x = currentPosition.x
            + MathF.Sin(brutto_angle * Deg2Rad) / 10f * speed * speedKoeff * 0.75f;

        float new_position_z = currentPosition.z
            + MathF.Cos(brutto_angle * Deg2Rad) / 10f * speed * speedKoeff * 0.75f;


        newRotation = new Vector3(currentRotation.x, brutto_angle, currentRotation.z);
        newPosition = new Vector3(new_position_x, currentPosition.y, new_position_z);
    }
}
