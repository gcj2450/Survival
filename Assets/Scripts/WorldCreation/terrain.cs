using UnityEngine;

public class terrain : MonoBehaviour
{

    public GameObject obj;
    
    // Start is called before the first frame update
    Mesh mesh;
    Vector3[] vertices;
    void Start()
    {
        mesh = GetComponent<MeshFilter>().mesh;
        vertices = mesh.vertices;

        for (int i = 0; i < vertices.Length; i++)
        {
            //print(vertices[i].x.ToString("f2").Replace(',', '.') + "f=" + vertices[i].y.ToString("f2").Replace(',', '.') + "f=" + vertices[i].z.ToString("f2").Replace(',', '.') + "f");
            Instantiate(obj, vertices[i], Quaternion.identity);
        }
    }

    
}