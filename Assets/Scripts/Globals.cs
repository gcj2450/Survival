using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Globals : MonoBehaviour
{
    public static byte[] RSASecretCode;
    public static byte[] ClientNetworkID;

    public enum PacketCode
    {
        None = 0,
        Move = 1, //joystick press data
        Abut = 2  //action buttons pressed
    }
}
