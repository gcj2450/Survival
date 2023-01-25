using System.Collections.Concurrent;
using UnityEngine;

public class Clients
{
    public bool isTCPClientActive { get; private set; }
    public bool isUDPClientActive { get; private set; }

    public ConcurrentQueue<byte[]> ReceivedTCPPacket;
    public ConcurrentQueue<byte[]> ReceivedUDPPacket;

    private static Clients instance;
    private Clients() 
    {
        StartTCPClient();
        StartUDPClient();
        ReceivedTCPPacket = tcpClient.ReceivedTCPPacket;
        ReceivedUDPPacket = udpClient.ReceivedUDPPacket;
    }
    public static Clients GetInstance()
    {
        if (instance == null)
        {
            instance = new Clients();
        }
        return instance;
    }

    

    private TCPClient tcpClient;
    private UDPClient udpClient;
        
    private bool StartTCPClient()
    {
        try
        {
            tcpClient = new TCPClient(Globals.SERVER_IP, Globals.TCP_PORT);
            tcpClient.ConnectAsync();
            isTCPClientActive = true;
            return true;
        }
        catch (System.Exception ex)
        {
            Debug.Log(ex);
            return false;
        }
        
    }

    private bool StartUDPClient()
    {
        try
        {
            udpClient = new UDPClient(Globals.SERVER_IP, Globals.UDP_PORT);
            udpClient.Connect();
            isUDPClientActive = true;
            return true;
        }
        catch (System.Exception ex)
        {
            Debug.Log(ex);
            return false;
        }
    }

    public void StopClients()
    {
        StopTCPClient();
        StopUDPClient();
        instance = null;
    }

    private void StopTCPClient()
    {
        if (isTCPClientActive)
        {
            tcpClient.DisconnectAndStop();
            isTCPClientActive = false;
        }        
    }

    private void StopUDPClient()
    {
        if (isUDPClientActive)
        {
            udpClient.DisconnectAndStop();
            isUDPClientActive = false;
        }        
    }

    public bool SendTCP(byte[] data, bool isEncrypted, Globals.PacketCode code)
    {
        if (isTCPClientActive && tcpClient != null) 
        {
            if (isEncrypted)
            {
                Encryption.Encode(ref data, Globals.RSASecretCode, Globals.ClientNetworkID, code);
                return tcpClient.SendAsync(data);
            }
            else
            {
                return tcpClient.SendAsync(data);
            }            
        }
        else
        {
            return false;
        }
    }

    public bool SendTCP(string data)
    {
        if (isTCPClientActive && tcpClient != null)
        {
            return tcpClient.SendAsync(data);
        }
        else
        {
            return false;
        }
    }

    public bool SendUDP(byte[] data, bool isEncrypted, Globals.PacketCode code)
    {
        if (isUDPClientActive && udpClient != null)
        {
            if (isEncrypted)
            {
                Encryption.Encode(ref data, Globals.RSASecretCode, Globals.ClientNetworkID, code);
                return udpClient.SendAsync(data);
            }
            else
            {
                return udpClient.SendAsync(data);
            }
        }
        else
        {
            return false;
        }
    }
}
