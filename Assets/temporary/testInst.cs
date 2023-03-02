using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class testInst : MonoBehaviour
{
    public int Instances;
    public Mesh mesh;
    public Material[] materials;

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
            if (addmat<1000)
            {
                Batches[Batches.Count - 1].Add(Matrix4x4.TRS(
                    new Vector3(transform.position.x + Random.Range(-10,10), transform.position.y + Random.Range(-10, 10), transform.position.z + Random.Range(-5, 5)),
                    Random.rotation,
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
