using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TCPIncomingPacketManager
{
    public TCPIncomingPacketManager() { }

    public void ProcessPacket(byte[] data)
    {
        Debug.Log(string.Join("=", data));

    }

}
