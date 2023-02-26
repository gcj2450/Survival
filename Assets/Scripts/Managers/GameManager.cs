using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    [SerializeField] private Joystick joystick;
    [SerializeField] private MovementManager movementManager;
    [SerializeField] private Transform player;
    
    private Clients connections;
    private TCPIncomingPacketManager packetManager;

    private void Awake()
    {
        //screen
        Screen.SetResolution(Globals.SCREEN_WIDTH, Globals.SCREEN_HEIGHT, true);
        Camera.main.aspect = 2;
        Application.targetFrameRate = 60;

        //network and security init
        connections = Clients.GetInstance();
        Encryption.PrepareSecureConnection();
        movementManager.SetMovement(joystick, connections);

        //incoming TCP packets processor
        packetManager = new TCPIncomingPacketManager();
        connections.GetTCPPacketInput(packetManager);
               
    }


    private void OnApplicationQuit()
    {
        if (connections != null)
        {
            connections.StopClients();
        }
    }

    private void Update()
    {
        player.position = movementManager.position;
        player.eulerAngles = movementManager.rotation;
    }
}
