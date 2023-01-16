using UnityEngine;

public class Clients
{
    public bool isTCPClientActive { get; private set; }
    public bool isUDPClientActive { get; private set; }


    private const string SERVER_IP = "192.168.0.108";
    private const int TCP_PORT = 3000;
    private const int UDP_PORT = 3001;

    private TCPClient tcpClient;
    private UDPClient udpClient;


    public void StartTCPClient()
    {
        try
        {
            tcpClient = new TCPClient(SERVER_IP, TCP_PORT);
            tcpClient.ConnectAsync();
            isTCPClientActive = true;
        }
        catch (System.Exception ex)
        {
            Debug.Log(ex);
        }
        
    }

    public void StartUDPClient()
    {
        try
        {
            udpClient = new UDPClient(SERVER_IP, UDP_PORT);
            udpClient.Connect();
            isUDPClientActive = true;
        }
        catch (System.Exception ex)
        {
            Debug.Log(ex);
        }
    }

    public void StopTCPClient()
    {
        if (isTCPClientActive)
        {
            tcpClient.DisconnectAndStop();
            isTCPClientActive = false;
        }        
    }

    public void StopUDPClient()
    {
        if (isUDPClientActive)
        {
            udpClient.DisconnectAndStop();
            isUDPClientActive = false;
        }        
    }

    public void StopAllClients()
    {
        StopTCPClient();
        StopUDPClient();
    }

    public bool SendTCP(byte[] data)
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
}
