using ProtoBuf;
using System;
using System.IO;
using UnityEngine;
using UnityEngine.UIElements;

public class ProtobufSchemes
{
    public static byte[] SerializeProtoBuf<T>(T data)
    {
        try
        {
            using (var stream = new MemoryStream())
            {
                Serializer.Serialize<T>(stream, data);
                return stream.ToArray();
            }
        }
        catch (Exception ex)
        {
            Debug.Log(ex);
        }

        return Array.Empty<byte>();
    }

    public static T DeserializeProtoBuf<T>(byte[] data)
    {
        try
        {
            using (var stream = new MemoryStream(data))
            {
                return Serializer.Deserialize<T>(stream);
            }
        }
        catch (Exception ex)
        {
            Debug.Log(ex);
        }

        T result = default;
        return result;
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
    public MovementPacketFromServer(uint id, long objectId, float positionX, float positionY, float positionZ, float rotationX, float rotationY, float rotationZ)
    {
        PacketId = id;
        ObjectId = objectId;
        PositionX = positionX;
        PositionY = positionY;
        PositionZ = positionZ;
        RotationX = rotationX;
        RotationY = rotationY;
        RotationZ = rotationZ;
    }

    [ProtoMember(1)]
    public uint PacketId { get; set; }
    [ProtoMember(2)]
    public long ObjectId { get; set; }
    [ProtoMember(3)]
    public float PositionX { get; set; }
    [ProtoMember(4)]
    public float PositionY { get; set; }
    [ProtoMember(5)]
    public float PositionZ { get; set; }
    [ProtoMember(6)]
    public float RotationX { get; set; }
    [ProtoMember(7)]
    public float RotationY { get; set; }
    [ProtoMember(8)]
    public float RotationZ { get; set; }

}

[ProtoContract]
public struct PlayerDataInitial
{
    public PlayerDataInitial(long id)
    {
        ObjectId = id;
        AppearanceId = 0;
        Name = "";
        PositionX = 0;
        PositionY = 0;
        PositionZ = 0;
        RotationX = 0;
        RotationY = 0;
        RotationZ = 0;
    }

    [ProtoMember(1)]
    public long ObjectId { get; set; }
    [ProtoMember(2)]
    public ushort AppearanceId { get; set; }
    [ProtoMember(3)]
    public string Name { get; set; }
    [ProtoMember(4)]
    public float PositionX { get; set; }
    [ProtoMember(5)]
    public float PositionY { get; set; }
    [ProtoMember(6)]
    public float PositionZ { get; set; }
    [ProtoMember(7)]
    public float RotationX { get; set; }
    [ProtoMember(8)]
    public float RotationY { get; set; }
    [ProtoMember(9)]
    public float RotationZ { get; set; }
}