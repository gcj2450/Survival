using System;
using System.Collections.Concurrent;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using UnityEngine;
using TcpClient = NetCoreServer.TcpClient;

public class TCPClient : TcpClient
{
    public TCPClient(string address, int port) : base(address, port) { }
    public static ConcurrentQueue<byte[]> ReceivedTCPPacket = new ConcurrentQueue<byte[]>();
    public void DisconnectAndStop()
    {        
        DisconnectAsync();
        while (IsConnected)
            Thread.Yield();
    }

    protected override void OnConnected()
    {
        Console.WriteLine($"Chat TCP client connected a new session with Id {Id}");
    }

    protected override void OnDisconnected()
    {
        Console.WriteLine($"Chat TCP client disconnected a session with Id {Id}");

    }

    protected override void OnReceived(byte[] buffer, long offset, long size)
    {
        //UnityEngine.Debug.Log(Encoding.UTF8.GetString(buffer, (int)offset, (int)size));
        //SendAsync("OK!!!");
        ReadOnlySpan<byte> packet = buffer.AsSpan(0, (int)size);        
        ReceivedTCPPacket.Enqueue(packet.ToArray());
    }

    protected override void OnError(SocketError error)
    {
        Console.WriteLine($"Chat TCP client caught an error with code {error}");
    }
}
