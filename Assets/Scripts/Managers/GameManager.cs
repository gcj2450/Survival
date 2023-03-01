using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.TextCore.Text;
using UnityEngine.UI;


[DefaultExecutionOrder(-1)]
public class GameManager : MonoBehaviour
{
    [SerializeField] private Joystick joystick;
    [SerializeField] private MovementManager movementManager;
    [SerializeField] private Transform player;    
    [SerializeField] private CharacterManagement characterManagement;
    [SerializeField] private TCPIncomingPacketManager packetManager;

    private Clients connections;
    
    private void Awake()
    {
        //screen
        Screen.SetResolution(Globals.SCREEN_WIDTH, Globals.SCREEN_HEIGHT, true);
        Camera.main.aspect = 2;
        Application.targetFrameRate = 60;

        //network and security init
        Globals.isConnectionEstablished = false;
        connections = Clients.GetInstance();
        Encryption.PrepareSecureConnection();
        //movementManager.SetMovement(joystick, connections);

        //incoming TCP packets processor
        packetManager.SetTCPIncomingPacketManager(characterManagement);
        //connections.GetTCPPacketInput(packetManager);
        //connections.GetUDPPacketInput(packetManager);
    }


    private void OnApplicationQuit()
    {
        if (connections != null)
        {
            connections.StopClients();
        }
    }


}
