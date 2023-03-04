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
    [SerializeField] private TerrainGenerator terrainGenerator;

    private Clients connections;
    
    private void Awake()
    {
        //screen
        Screen.SetResolution(Globals.SCREEN_WIDTH, Globals.SCREEN_HEIGHT, true);
        Camera.main.aspect = 2;
        Application.targetFrameRate = 60;

        StartCoroutine(startGame());
    }

    private IEnumerator startGame()
    {
        //network and security init
        Globals.isConnectionEstablished = false;
        connections = Clients.GetInstance();

        yield return new WaitForSeconds(0.2f);

        Encryption.PrepareSecureConnection();

        yield return new WaitForSeconds(0.5f);

        //incoming TCP packets processor
        packetManager.SetTCPIncomingPacketManager(characterManagement);

        //set terrain update constants
        terrainGenerator.SetTerrainGenerator(20, 14, Vector3.zero);
        characterManagement.SetTerrainUpdater(terrainGenerator.TerrainUpdater);
    }


    private void OnApplicationQuit()
    {
        if (connections != null)
        {
            connections.StopClients();
        }
    }


}
