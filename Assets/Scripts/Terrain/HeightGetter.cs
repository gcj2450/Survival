using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeightGetter : MonoBehaviour
{
    public GameObject obj;

    private void Start()
    {


        for (int x = -50; x < 50; x++)
        {
            for (int z = -50; z < 50; z++)
            {
                RaycastHit hit = default;
                Physics.Raycast(new Vector3(x,15,z), Vector3.down, out hit, 20);

                if (hit.collider != null)
                {
                    //print(hit.collider.ClosestPoint(new Vector3(x, 15, z)));
                    //Instantiate(obj, hit.point , Quaternion.identity);
                    Loader.LoadDataToFile("heights", new HeightConverter(hit.point, hit.point.y), FileSaveType.HeightMaps);
                }
            }
        }
    }
}
