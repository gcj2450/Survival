using UnityEngine;
using UnityEngine.UI;

public class test1 : MonoBehaviour
{
    Clients clients = new Clients();

    [SerializeField] private Button sender;
    [SerializeField] private Button udpsend;

    // Start is called before the first frame update
    void Start()
    {
        clients.StartTCPClient();
          
        
        sender.onClick.AddListener(() =>
        {
            clients.SendTCP("WWWHHHHHAAAATTTSS UUUPPP TCP!!!");
        });

        udpsend.onClick.AddListener(() =>
        {            
            //server.SendAsync("WWWHHHHHAAAATTTSS UUUPPP UDP!!!");
        });
    }

    private void OnApplicationQuit()
    {
        clients.StopAllClients();
    }


}
