using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Threading;
using UnityEngine;

public class MovementManager : MonoBehaviour
{
    public bool IsPlayerCanMove = false;
    private bool isUpdateData;
    private Characters mainPlayerCharacter;
    //private Transform mainPlayerTransform;
    private Vector3 playerPositionByPrediction = Vector3.zero;
    private Vector3 playerRotationByPrediction = Vector3.zero;
    
    [SerializeField] private Joystick joystick;

   
    //timer for send data
    private System.Timers.Timer _timer;
    private Clients connections;
    private MovementPacketFromClient movementPacketFromClient;

    //cancel tick of SEND data
    private CancellationTokenSource cancelTokenSource = new CancellationTokenSource();
    private CancellationToken token;

    private Vector2 sumOfJoystickInput;
    private Vector2 sumOfJoystickInputPrediction;
    private float updateTimer;
    private bool isMovementNullPacketSend = true;
    private PingMeter pingMeter;


    //TODEL
    //private Vector3 fromPosition;
    private Vector3 fromPositionAgregate;
    //private Vector3 testPosition;

    private void Start()
    {
        movementPacketFromClient = new MovementPacketFromClient(0, 0, 0, false);
        connections = Clients.GetInstance();
        setTimerForMovement();
    }

    public void SetMainPlayerCharacter(Characters character)
    {
        mainPlayerCharacter = character; mainPlayerCharacter.GetCharacterTransform();
        playerPositionByPrediction = mainPlayerCharacter.GetCharacterTransform();
    }

    public void SetPingMeterData(PingMeter pingMeter)
    {
        this.pingMeter = pingMeter;
    }

    void FixedUpdate()
    {
        if (joystick == null || connections == null || !IsPlayerCanMove) { return; }

        if (Mathf.Abs(joystick.Horizontal) > 0 || Mathf.Abs(joystick.Vertical) > 0)
        {
            if (sumOfJoystickInput == Vector2.zero)
            {
                fromPositionAgregate = Vector3.zero;
            }   

            sumOfJoystickInput += joystick.Direction;

            MovementPrediction(joystick.Horizontal, joystick.Vertical,
                    out playerPositionByPrediction, out playerRotationByPrediction,
                    1);

            //TODEL
            fromPositionAgregate += playerPositionByPrediction;

            mainPlayerCharacter.UpdateTransformForMainPlayer(mainPlayerCharacter.GetCharacterTransform() + playerPositionByPrediction, playerRotationByPrediction, -1);
            
        }
        else
        {
            fromPositionAgregate = Vector3.zero;
        }

        mainPlayerCharacter.whatIsPredDelta = fromPositionAgregate;

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
            if (IsPlayerCanMove && (sumOfJoystickInput != Vector2.zero || !isMovementNullPacketSend))
            {             
                if (sumOfJoystickInput == Vector2.zero)
                {
                    isMovementNullPacketSend = true;

                    isUpdateData = true;
                    sumOfJoystickInputPrediction = sumOfJoystickInput;
                    movementPacketFromClient.Update(999.9f, 0, false);
                    pingMeter?.InTimerData(Globals.Timer.ElapsedMilliseconds, movementPacketFromClient.PacketId);
                    byte[] bytes = ProtobufSchemes.SerializeProtoBuf(movementPacketFromClient);
                    connections.SendUDP(bytes, true, Globals.PacketCode.MoveFromClient);
                    //connections.SendTCP(bytes, true, Globals.PacketCode.MoveFromClient);
                    sumOfJoystickInput = Vector2.zero;
                }
                else
                {
                    isMovementNullPacketSend = false;

                    isUpdateData = true;
                    sumOfJoystickInputPrediction = sumOfJoystickInput;
                    movementPacketFromClient.Update(sumOfJoystickInput.x, sumOfJoystickInput.y, false);
                    pingMeter?.InTimerData(Globals.Timer.ElapsedMilliseconds, movementPacketFromClient.PacketId);
                    byte[] bytes = ProtobufSchemes.SerializeProtoBuf(movementPacketFromClient);
                    connections.SendUDP(bytes, true, Globals.PacketCode.MoveFromClient);
                    //connections.SendTCP(bytes, true, Globals.PacketCode.MoveFromClient);

                    sumOfJoystickInput = Vector2.zero;                    
                }

                
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

    private void MovementPrediction(float Horizontal, float Vertical, 
        out Vector3 newPositionDelta, out Vector3 newRotation, float speed)
    {
        newPositionDelta = Vector3.zero;
        newRotation = Vector3.zero;

        const float Deg2Rad = (float)Math.PI / 180f;

        float speedKoeff = MathF.Sqrt(Horizontal * Horizontal + Vertical * Vertical);
        //speedKoeff = speedKoeff <= 3 ? speedKoeff : 3;

        float brutto_angle = MathF.Atan2(Horizontal, Vertical) * 180 / MathF.PI;

        float new_position_x = MathF.Sin(brutto_angle * Deg2Rad) / 10f * speed * speedKoeff * 0.75f;

        float new_position_z = MathF.Cos(brutto_angle * Deg2Rad) / 10f * speed * speedKoeff * 0.75f;


        newRotation = new Vector3(0, brutto_angle, 0);
        newPositionDelta = new Vector3(new_position_x, 0, new_position_z);
    }
}
