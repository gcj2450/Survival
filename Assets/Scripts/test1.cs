using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class test1 : MonoBehaviour
{    
    [SerializeField] private Button sender;
    [SerializeField] private Button udpsend;

    private Clients connections;

    // Start is called before the first frame update
    void Start()
    {
        connections = Clients.GetInstance();
        Encryption.PrepareSecureConnection();

        StartCoroutine(test());  

        
        sender.onClick.AddListener(() =>
        {
            connections.SendTCP("WWWHHHHHAAAATTTSS UUUPPP TCP!!!");
        });

        udpsend.onClick.AddListener(() =>
        {            
            //server.SendAsync("WWWHHHHHAAAATTTSS UUUPPP UDP!!!");
        });
    }

    private void OnApplicationQuit()
    {
        connections.StopClients();
    }

    private IEnumerator test()
    {
        yield return new WaitForSeconds(3);
        for (int i = 0; i < 20; i++)
        {
            //Clients.SendTCP(ProtobufSchemes.Serialize_ProtoBuf(new MovementPacket(0.1544f, 0.8788f)), true, Globals.PacketCode.None);
            connections.SendTCP(new byte[] {12,45,78,87,74,78,98,78,12,36,54,74, 12, 45, 78, 87, 74, 78, 98, 78, 12, 36, 54, 74, 12, 45, 78, 87, 74, 78, 98, 78, 12, 36, 54, 74, 12, 45, 78, 87, 74, 78, 98, 78, 12, 36, 54, 74 }, true, Globals.PacketCode.None);
            yield return new WaitForSeconds(Time.deltaTime);
        }
        
    }
}
