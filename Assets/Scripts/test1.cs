using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class test1 : MonoBehaviour
{    
    [SerializeField] private Button sender;
    [SerializeField] private Button udpsend;
        
    // Start is called before the first frame update
    void Start()
    {
        Clients.StartTCPClient();
        Encryption.PrepareSecureConnection();

        //StartCoroutine(test());  

        
        sender.onClick.AddListener(() =>
        {
            Clients.SendTCP("WWWHHHHHAAAATTTSS UUUPPP TCP!!!");
        });

        udpsend.onClick.AddListener(() =>
        {            
            //server.SendAsync("WWWHHHHHAAAATTTSS UUUPPP UDP!!!");
        });
    }

    private void OnApplicationQuit()
    {
        Clients.StopAllClients();
    }

    private IEnumerator test()
    {
        yield return new WaitForSeconds(3);
        print(Clients.SendTCP(new byte[] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, true, Globals.PacketCode.None));
    }
}
