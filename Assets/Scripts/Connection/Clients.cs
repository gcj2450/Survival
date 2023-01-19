using UnityEngine;

public static class Clients
{
    public static bool isTCPClientActive { get; private set; }
    public static bool isUDPClientActive { get; private set; }



    private const string SERVER_IP = "192.168.0.108";
    private const int TCP_PORT = 3000;
    private const int UDP_PORT = 3001;

    private static TCPClient tcpClient;
    private static UDPClient udpClient;
        
    public static bool StartTCPClient()
    {
        try
        {
            tcpClient = new TCPClient(SERVER_IP, TCP_PORT);
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

    public static bool StartUDPClient()
    {
        try
        {
            udpClient = new UDPClient(SERVER_IP, UDP_PORT);
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

    public static void StopTCPClient()
    {
        if (isTCPClientActive)
        {
            tcpClient.DisconnectAndStop();
            isTCPClientActive = false;
        }        
    }

    public static void StopUDPClient()
    {
        if (isUDPClientActive)
        {
            udpClient.DisconnectAndStop();
            isUDPClientActive = false;
        }        
    }

    public static void StopAllClients()
    {
        StopTCPClient();
        StopUDPClient();
    }

    public static bool SendTCP(byte[] data, bool isEncrypted, Globals.PacketCode code)
    {
        if (isTCPClientActive && tcpClient != null) 
        {
            if (isEncrypted)
            {
                Encryption.Encode(ref data, Globals.RSASecretCode, Globals.ClientNetworkID, (byte)code);
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

    public static bool SendTCP(string data)
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

    public static bool SendUDP(byte[] data, bool isEncrypted, Globals.PacketCode code)
    {
        if (isUDPClientActive && udpClient != null)
        {
            if (isEncrypted)
            {
                Encryption.Encode(ref data, Globals.RSASecretCode, Globals.ClientNetworkID, (byte)code);
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
