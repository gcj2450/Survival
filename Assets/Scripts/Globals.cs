using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Globals : MonoBehaviour
{
    public static byte[] RSASecretCode;
    public static byte[] ClientNetworkID;
    public const string SERVER_IP = "192.168.0.108";
    public const int TCP_PORT = 3000;
    public const int UDP_PORT = 3001;
    public const int TICKi = 50;
    public const float TICKf = 0.05f;

    public enum PacketCode
    {
        None = 0,
        Move = 1, //joystick press data
        Abut = 2  //action buttons pressed
    }
}
