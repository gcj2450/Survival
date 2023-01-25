using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using UdpClient = NetCoreServer.UdpClient;
using UnityEngine;
using System.Collections.Concurrent;

public class UDPClient : UdpClient
{
    public UDPClient(string address, int port) : base(address, port) { }
    public ConcurrentQueue<byte[]> ReceivedUDPPacket = new ConcurrentQueue<byte[]>();

    public void DisconnectAndStop()
    {       
        Disconnect();
        while (IsConnected)
            Thread.Yield();
    }

    protected override void OnConnected()
    {
        UnityEngine.Debug.Log($"Echo UDP client connected a new session with Id {Id}");
                
        ReceiveAsync();
    }

    protected override void OnDisconnected()
    {
        UnityEngine.Debug.Log($"Echo UDP client disconnected a session with Id {Id}");
    }

    protected override void OnReceived(EndPoint endpoint, byte[] buffer, long offset, long size)
    {
        //UnityEngine.Debug.Log("Incoming: " + Encoding.UTF8.GetString(buffer, (int)offset, (int)size));
        ReceivedUDPPacket.Enqueue(buffer.AsSpan(0, (int)size).ToArray());

        ReceiveAsync();
    }

    protected override void OnError(SocketError error)
    {
        UnityEngine.Debug.Log($"Echo UDP client caught an error with code {error}");
    }
}
