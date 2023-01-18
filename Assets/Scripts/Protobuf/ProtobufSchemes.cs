using ProtoBuf;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProtobufSchemes : MonoBehaviour
{
    
}

[ProtoContract]
public struct RSAExchange
{
    [ProtoMember(1)]
    public int TemporaryKeyCode { get; set; }
    [ProtoMember(2)]
    public string PublicKey { get; set; }

    public RSAExchange(int TemporaryKeyCode, string PublicKey)
    {
        this.TemporaryKeyCode = TemporaryKeyCode;
        this.PublicKey = PublicKey;
    }
}