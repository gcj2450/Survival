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
            //print(i + ": " + vertices[i]);
            Instantiate(obj, vertices[i], Quaternion.identity);
        }
    }


    // Update is called once per frame
    void Update()
    {
        
    }
}