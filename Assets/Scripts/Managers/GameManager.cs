using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
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
    [SerializeField] private CameraManager cameraManager;
    [SerializeField] private TextMeshProUGUI textt;

    public static string datat;

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

        yield return new WaitForSeconds(0.3f);

        //set terrain update constants        
        characterManagement.SetTerrainUpdater(terrainGenerator.TerrainUpdater);
        
        

        for (int i = 0; i < 20; i++)
        {
            if (characterManagement != null && characterManagement.GetMainPlayerCharacter() != null)
            {
                break;
            }
            yield return new WaitForSeconds(0.1f);
        }

        movementManager.SetMainPlayerCharacter(characterManagement.GetMainPlayerCharacter());
        movementManager.IsPlayerCanMove = true;
        cameraManager.SetCameraManager(characterManagement.GetMainPlayerCharacter());
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
        textt.text = datat;
    }
}
