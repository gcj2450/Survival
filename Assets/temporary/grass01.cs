using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class grass01 : MonoBehaviour
{
    public Transform source;
    private readonly float disperse = 0.5f;
    public int Instances;
    public Mesh mesh;
    public Material[] materials;
    private float timer;

    private List<List<Matrix4x4>> Batches = new List<List<Matrix4x4>>();

    private void Start()
    {
        Screen.SetResolution(Globals.SCREEN_WIDTH, Globals.SCREEN_HEIGHT, true);
        Camera.main.aspect = 2;
        Application.targetFrameRate = 60;

        int addmat = 0;

        Batches.Add(new List<Matrix4x4>());

        for (int i = 0; i < Instances; i++)
        {
            if (addmat < 1000)
            {
                Batches[Batches.Count - 1].Add(Matrix4x4.TRS(
                    new Vector3(source.position.x + Random.Range(-disperse, disperse)/* + Random.Range(-9, 9)*/, source.position.y + 0.5f + Random.Range(-disperse, 0)/3f, source.position.z + Random.Range(-disperse, disperse)/* + Random.Range(-7, 7)*/),
                    Quaternion.Euler(Random.Range(20, 60), Random.Range(-60, 60), 0),
                    Vector3.one
                    ));
                addmat++;
            }
            else
            {
                Batches.Add(new List<Matrix4x4>());
                addmat = 0;
            }
        }

        //test1update.updater += renderBatches;
    }

    private void renderBatches()
    {
        for (int i = 0; i < Batches.Count; i++)
        {
            Graphics.DrawMeshInstanced(mesh, 0, materials[0], Batches[i]);
        }

    }

    
    private void Update()
    {
        renderBatches();

    }
}
