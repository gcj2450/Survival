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
public struct MovementPacket
{
    [ProtoMember(1)]
    public float Horizontal { get; set; }
    [ProtoMember(2)]
    public float Vertical { get; set; }

    public MovementPacket(float horizontal, float vertical)
    {
        Horizontal = horizontal;
        Vertical = vertical;
    }
}