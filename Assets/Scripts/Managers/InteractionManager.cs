using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InteractionManager : MonoBehaviour
{
    [SerializeField] private Transform pointer;

    public bool IsCanMove(bool result) => isCanMove = result;
    private bool isCanMove;

    private Camera mainCamera;
    private Ray ray;
    private RaycastHit hit;
    private Clients connections;

    // Start is called before the first frame update
    void Start()
    {
        mainCamera = Camera.main;
        connections = Clients.GetInstance();
    }

    // Update is called once per frame
    void Update()
    {
        if (!isCanMove) return;

        if (Input.GetMouseButtonDown(0))
        {
            ray = mainCamera.ScreenPointToRay(Input.mousePosition);

            if (Physics.Raycast(ray, out hit, 30))
            {
                if (hit.collider.gameObject.CompareTag("Ground"))
                {
                    pointer.position = hit.point;
                    byte[] bytes = ProtobufSchemes.SerializeProtoBuf(new PlayerPointFromClient(hit.point));
                    connections.SendTCP(bytes, true, Globals.PacketCode.PointFromClient);
                }
            }
        }

        
    }

    
}
