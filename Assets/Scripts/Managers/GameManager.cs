using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using TMPro;
using UnityEngine;
using UnityEngine.UI;


[DefaultExecutionOrder(-1)]
public class GameManager : MonoBehaviour
{
    [SerializeField] private InteractionManager interactionManager;
    [SerializeField] private CharacterManagement characterManagement;
    [SerializeField] private TCPIncomingPacketManager packetManager;
    [SerializeField] private TerrainGenerator terrainGenerator;
    [SerializeField] private CameraManager cameraManager;
    [SerializeField] private TextMeshProUGUI textt;
    [SerializeField] private TextMeshProUGUI pingTextData;
    [SerializeField] private TextMeshProUGUI speedText;


    public static string datat;
    private Clients connections;
    private PingMeter pingMeter;
       
    private void Awake()
    {
        //screen
        Screen.SetResolution(Globals.SCREEN_WIDTH, Globals.SCREEN_HEIGHT, true);
        Camera.main.aspect = 2;
        Application.targetFrameRate = 60;

        if (Globals.Timer.IsRunning) Globals.Timer.Stop();
        Globals.Timer = new Stopwatch();
        Globals.Timer.Start();
      
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
        
        for (int i = 0; i < 50; i++)
        {
            if (characterManagement != null && characterManagement.GetMainPlayerCharacter() != null)
            {
                break;
            }
            yield return new WaitForSeconds(0.1f);
        }

        interactionManager.IsCanMove(true);
        cameraManager.SetCameraManager(characterManagement.GetMainPlayerCharacter());
    }


    private void OnApplicationQuit()
    {
        Globals.Timer.Stop();

        if (connections != null)
        {
            connections.StopClients();
        }
    }

    private void Update()
    {
        speedText.text = datat;
        
    }

}
