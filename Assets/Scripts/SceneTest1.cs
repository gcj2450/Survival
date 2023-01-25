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

    [SerializeField] private Joystick joystick;
    [SerializeField] private GameObject obj;
    private Clients connections;

    // Start is called before the first frame update
    void Start()
    {
        connections = Clients.GetInstance();
        Encryption.PrepareSecureConnection();
        SetTimer();
    }

    // Update is called once per frame
    void Update()
    {
        if (Mathf.Abs(joystick.Horizontal) > 0 || Mathf.Abs(joystick.Vertical) > 0)
        {
            sumOfJoystickInput += joystick.Direction;
            //byte[] bytes = ProtobufSchemes.SerializeProtoBuf(new MovementPacketFromClient(joystick.Horizontal, joystick.Vertical, false));
            //connections.SendUDP(bytes, true, Globals.PacketCode.MoveFromClient);

            /*
            //float brutto_angle = Mathf.Asin(joystick.Vertical / joystick.Horizontal);
            float brutto_angle = Mathf.Atan2(joystick.Horizontal, joystick.Vertical) * 180 / Mathf.PI;
            float new_position_x = obj.transform.position.x + MathF.Sin(brutto_angle * Mathf.Deg2Rad)/100f;//vert_touch
            float new_position_z = obj.transform.position.z + MathF.Cos(brutto_angle * Mathf.Deg2Rad)/100f;//vert_touch
            print(joystick.Horizontal + " = " + joystick.Vertical + " = " + brutto_angle);

            obj.transform.position = new Vector3(new_position_x, 0, new_position_z);
            obj.transform.eulerAngles = new Vector3(0, brutto_angle, 0);
            */
        }         
        
        if (connections.ReceivedUDPPacket.Count > 0)
        {            
            byte[] packet = Array.Empty<byte>();

            if (connections.ReceivedUDPPacket.TryDequeue(out packet))
            {
                if (packet[0] == (byte)Globals.PacketCode.MoveFromServer)
                {
                    byte[] data = Encryption.TakeSomeToArrayFromNumber(packet, 1);
                    Encryption.Decode(ref data, Globals.RSASecretCode);
                    MovementPacketFromServer mover = ProtobufSchemes.DeserializeProtoBuf<MovementPacketFromServer>(data);
                    obj.transform.position = new Vector3(mover.PositionX, mover.PositionY, mover.PositionZ);
                    obj.transform.eulerAngles = new Vector3(0, mover.RotationY, 0);
                }
            }
        }
    }

    private void OnApplicationQuit()
    {
        connections.StopClients();
        cancelTokenSource.Cancel();
    }

    private void SetTimer()
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

    private void PredictionMachine(float Horizontal, float Vertical, Vector3 old_pos, Vector3 old_rot, out Vector3 position_delta, out Vector3 rotation_delta, float speed)
    {

        float delta = 0.1f;

        float lenght = Mathf.Sqrt(Horizontal * Horizontal + Vertical * Vertical);

        const float degree_to_radian = 0.0174532924f;

        float result = 0;
        Vector3 new_vec = new Vector3(Horizontal, Vertical, 0).normalized;
        float brutto_angle = 0;

        if (new_vec.y == 0) new_vec.y = 0.001f;

        brutto_angle = Mathf.Rad2Deg * (Mathf.Atan(new_vec.x / new_vec.y));



        if (new_vec.x >= 0 && new_vec.y >= 0)
        {
            result = brutto_angle;
        }
        else if (new_vec.x >= 0 && new_vec.y < 0)
        {
            result = brutto_angle + 180;
        }
        else if (new_vec.x < 0 && new_vec.y < 0)
        {
            result = brutto_angle + 180;
        }
        else if (new_vec.x < 0 && new_vec.y >= 0)
        {
            result = brutto_angle + 360;
        }

        float new_rotation_y = result;

        float _speed = 1f;

        float delta_for_position = Globals.TICKf * 2.5f * lenght * 0.75f * _speed;

        float new_position_x = old_pos.x + Mathf.Sin(new_rotation_y * degree_to_radian) * delta_for_position;//vert_touch
        float new_position_z = old_pos.z + Mathf.Cos(new_rotation_y * degree_to_radian) * delta_for_position;//vert_touch

        position_delta = new Vector3(new_position_x, 0, new_position_z);
        rotation_delta = new Vector3(0, new_rotation_y, 0);

        /*
        if (isWrongBorders(new_position_x, new_position_z))
        {
            position_delta = old_pos;
            rotation_delta = old_rot;
        }
        else
        {
            position_delta = new Vector3(new_position_x, 0, new_position_z);
            rotation_delta = new Vector3(0, new_rotation_y, 0);
        }
        */
    }
}
