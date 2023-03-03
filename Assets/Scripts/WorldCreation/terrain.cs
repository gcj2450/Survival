using DG.Tweening;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using UnityEngine;

public class terrain : MonoBehaviour
{
    public GameObject obj;
    public GameObject marker;
    public GameObject pre;
    private Transform markerT;
    List<GameObject> markers = new List<GameObject>();
    List<GameObject> pres = new List<GameObject>();

    // Start is called before the first frame update
    Mesh mesh;
    Vector3[] vertices;
    Vector3 lastPos;
    void Start()
    {
        mesh = GetComponent<MeshFilter>().mesh;
        vertices = mesh.vertices;
        markerT = marker.GetComponent<Transform>();

        StartCoroutine(playShow());
        /*
        for (int x = 0; x < 20; x++)
        {
            for (int z = 0; z < 20; z++)
            {
                GameObject ttt = Instantiate(marker, getCoords(new Vector3(x,0,z)), Quaternion.identity);
                ttt.transform.LookAt(ttt.transform.position + getNormal(new Vector3(x, 0, z)));
                ttt.transform.localEulerAngles = new Vector3(
                    ttt.transform.localEulerAngles.x + 90, 
                    ttt.transform.localEulerAngles.y, 
                    ttt.transform.localEulerAngles.z);
            }
        }
        */
        /*
        for (int i = 0; i < vertices.Length; i++)
        {
            if (vertices[i].x<20 && vertices[i].z < 20)
            {
                GameObject ttt = Instantiate(marker, vertices[i], Quaternion.identity);
                ttt.transform.LookAt(ttt.transform.position + mesh.normals[i]);
                ttt.transform.localEulerAngles = new Vector3(
                    ttt.transform.localEulerAngles.x + 90,
                    ttt.transform.localEulerAngles.y,
                    ttt.transform.localEulerAngles.z);
            }
            
        }
        */
    }

    private Vector3 getCoords(Vector3 initPos)
    {
        float radius = 3;

        for (int i = 0; i < pres.Count; i++)
        {
            Destroy(pres[i]);
        }

        pres.Clear();
        SortedDictionary<float, int> results = new SortedDictionary<float, int>();

        for (int i = 0; i < vertices.Length; i++)
        {            
            if ((vertices[i].x - initPos.x) >= -radius && (vertices[i].x - initPos.x) <= radius &&
                (vertices[i].z - initPos.z) >= -radius && (vertices[i].z - initPos.z) <= radius)
            {
                //GameObject ttt = Instantiate(pre, vertices[i], Quaternion.identity);
                //pres.Add(ttt);

                float distance = Vector3.Distance(vertices[i], new Vector3(initPos.x, vertices[i].y, initPos.z));

                if (results.ContainsKey(distance))
                {
                    distance *= 1.01f;
                    results.Add(distance, i);
                }
                else
                {
                    results.Add(distance, i);
                }
                
            }
        }
                
        float minDist = results.Keys.Min();
        if ((minDist < results.Keys.Average() * 0.25f) || results.Count == 1)
        {
            return new Vector3(initPos.x, vertices[results[minDist]].y, initPos.z);
        }
        else //if (minDist < results.Keys.Average() * 0.5f)
        {
            List<float> preresult = results.Keys.Take(2).ToList();

            //GameObject ttt = Instantiate(pre, vertices[results[preresult[0]]], Quaternion.identity);
            //pres.Add(ttt);

            //ttt = Instantiate(pre, vertices[results[preresult[1]]], Quaternion.identity);
            //pres.Add(ttt);

            Vector3 lerpV = Vector3.Lerp(
                //new Vector3(initPos.x, vertices[results[preresult[0]]].y, initPos.z),
                //new Vector3(initPos.x, vertices[results[preresult[1]]].y, initPos.z),
                vertices[results[preresult[0]]],
                vertices[results[preresult[1]]],
                preresult[0] / (preresult[0] + preresult[1])
                );

            return new Vector3(initPos.x, lerpV.y, initPos.z);
        }
    }

    private Vector3 getNormal(Vector3 initPos)
    {
        float radius = 3;

        for (int i = 0; i < pres.Count; i++)
        {
            Destroy(pres[i]);
        }

        pres.Clear();
        SortedDictionary<float, int> results = new SortedDictionary<float, int>();

        for (int i = 0; i < vertices.Length; i++)
        {
            if ((vertices[i].x - initPos.x) >= -radius && (vertices[i].x - initPos.x) <= radius &&
                (vertices[i].z - initPos.z) >= -radius && (vertices[i].z - initPos.z) <= radius)
            {
                //GameObject ttt = Instantiate(pre, vertices[i], Quaternion.identity);
                //pres.Add(ttt);

                float distance = Vector3.Distance(vertices[i], new Vector3(initPos.x, vertices[i].y, initPos.z));

                if (results.ContainsKey(distance))
                {
                    distance *= 1.001f;
                    results.Add(distance, i);
                }
                else
                {
                    results.Add(distance, i);
                }

            }
        }

        float minDist = results.Keys.Min();
        return mesh.normals[results[minDist]];
    }

    private IEnumerator playShow()
    {
        for (int i = 0; i < vertices.Length; i++)
        {
            GameObject ttt = Instantiate(obj, vertices[i], Quaternion.identity);
            yield return new WaitForSeconds(0.5f);
        }
    }

}