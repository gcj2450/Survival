using ProtoBuf;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class ProtobufSchemes : MonoBehaviour
{
    public static byte[] SerializeProtoBuf<T>(T data)
    {
        using (var stream = new MemoryStream())
        {
            Serializer.Serialize<T>(stream, data);
            return stream.ToArray();
        }
    }

    public static T DeserializeProtoBuf<T>(byte[] data)
    {
        using (var stream = new MemoryStream(data))
        {
            return Serializer.Deserialize<T>(stream);
        }
    }
}

[ProtoContract]
public struct RSAExchange
{
    [ProtoMember(1)]
    public int TemporaryKeyCode { get; set; }
    [ProtoMember(2)]
    public string PublicKey { get; set; }
    [ProtoMember(3)]
    public int TicketID { get; set; }

    public RSAExchange(int TemporaryKeyCode, string PublicKey, int ticket)
    {
        this.TemporaryKeyCode = TemporaryKeyCode;
        this.PublicKey = PublicKey;
        TicketID = ticket;
    }
}

[ProtoContract]
public struct MovementPacketFromClient
{
    [ProtoMember(1)]
    public float Horizontal { get; set; }
    [ProtoMember(2)]
    public float Vertical { get; set; }
    [ProtoMember(3)]
    public bool isActionButtonOnePressed { get; set; }

    public MovementPacketFromClient(float horizontal, float vertical, bool isOnePressed)
    {
        Horizontal = horizontal;
        Vertical = vertical;
        isActionButtonOnePressed = isOnePressed;
    }
}

[ProtoContract]
public struct MovementPacketFromServer
{
    public MovementPacketFromServer(float positionX, float positionY, float positionZ, float rotationX, float rotationY, float rotationZ)
    {
        PositionX = positionX;
        PositionY = positionY;
        PositionZ = positionZ;
        RotationX = rotationX;
        RotationY = rotationY;
        RotationZ = rotationZ;
    }

    [ProtoMember(1)]
    public float PositionX { get; set; }
    [ProtoMember(2)]
    public float PositionY { get; set; }
    [ProtoMember(3)]
    public float PositionZ { get; set; }
    [ProtoMember(4)]
    public float RotationX { get; set; }
    [ProtoMember(5)]
    public float RotationY { get; set; }
    [ProtoMember(6)]
    public float RotationZ { get; set; }   
    
}