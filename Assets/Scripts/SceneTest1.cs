using UnityEngine;

public class SceneTest1 : MonoBehaviour
{
    [SerializeField] private Joystick joystick;
    // Start is called before the first frame update
    void Start()
    {
        Clients.StartTCPClient();
        Encryption.PrepareSecureConnection();
        Clients.StartUDPClient();
    }

    // Update is called once per frame
    void Update()
    {
        if (Mathf.Abs(joystick.Horizontal) > 0 || Mathf.Abs(joystick.Vertical) > 0)
        {
            
            Vector2 joy = new Vector2(joystick.Horizontal*2, joystick.Vertical*2);
            Vector2 jn = joy.normalized;

            print(joystick.Horizontal + " = " + joystick.Vertical + " = " + joy + " = " + jn);
            byte[] bytes = ProtobufSchemes.SerializeProtoBuf(new MovementPacket(joystick.Horizontal, joystick.Vertical));                        
            Clients.SendUDP(bytes, true, Globals.PacketCode.Move);
        }            
    }
}
