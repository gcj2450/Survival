using System.Collections;
using System.Collections.Generic;
using System.Drawing;
using UnityEngine;

[RequireComponent(typeof(MeshFilter), typeof(MeshRenderer))]
public class TerrTest2 : MonoBehaviour
{
    public GameObject Player;
    public Joystick joystick;
    private Vector3 oldPos;
    
    private int _xSize = 50, _zSize = 50;

    private Vector3[] _vertices;
    private Mesh _mesh;

    private Vector3 newPosition;

    List<Vector3> heights = new List<Vector3>();
    Dictionary<Vector2, float> heightMaps = new Dictionary<Vector2, float>();

    private void Start()
    {
        heights = Loader.LoadHeightDataFromFile("heights.txt");
                
        if (heights.Count > 0 )
        {
            for (int i = 0; i < heights.Count; i++)
            {
                if (!heightMaps.ContainsKey(new Vector2(heights[i].x, heights[i].z)))
                {
                    heightMaps.Add(new Vector2(heights[i].x, heights[i].z), heights[i].y);
                }                
            }
        }
        
        //screen
        Screen.SetResolution(Globals.SCREEN_WIDTH, Globals.SCREEN_HEIGHT, true);
        Camera.main.aspect = 2;
        Application.targetFrameRate = 60;
    }

    private void Generate()
    {
        _mesh = new Mesh();
        GetComponent<MeshFilter>().mesh = _mesh;
        _mesh.name = "Grid";

        _vertices = new Vector3[(_xSize + 1) * (_zSize + 1)];
        Vector2[] uvs = new Vector2[_vertices.Length];
        Vector4[] tangents = new Vector4[_vertices.Length];
        Vector4 tangent = new Vector4(1f, 0f, 0f, -1f);
        for (int i = 0, z = 0; z <= _zSize; z++)
        {
            for (int x = 0; x <= _xSize; x++, i++)
            {
                float yy = 0;
                if (heightMaps.ContainsKey(new Vector2(x, z)))
                {
                    yy = heightMaps[new Vector2(x, z)];
                }
                _vertices[i] = new Vector3(x, yy, z);
                //uvs[i] = new Vector2((float)x / _xSize, (float)y / _ySize);
                uvs[i] = new Vector2(x, z);
                tangents[i] = tangent;
            }
        }
        _mesh.vertices = _vertices;
        _mesh.uv = uvs;
        _mesh.tangents = tangents;

        int[] triangles = new int[_xSize * _zSize * 6];
        int ti = 0, vi = 0;
        for (int y = 0; y < _zSize; y++, vi++)
        {
            for (int x = 0; x < _xSize; x++, ti += 6, vi++)
            {
                triangles[ti] = vi;
                triangles[ti + 1] = triangles[ti + 4] = vi + _xSize + 1;
                triangles[ti + 2] = triangles[ti + 3] = vi + 1;
                triangles[ti + 5] = vi + _xSize + 2;
            }
        }


        _mesh.triangles = triangles;
        _mesh.RecalculateNormals();
    }


    private void Update()
    {
        if (Mathf.Abs(joystick.Horizontal) > 0 || Mathf.Abs(joystick.Vertical) > 0)
        {
            Player.transform.position += new Vector3(joystick.Direction.x, 0, joystick.Direction.y) / 10;
        }

        if (Player.transform.position != oldPos)
        {
            newPosition = new Vector3(Player.transform.position.x + (float)-_xSize / 2, 0, Player.transform.position.z + (float)-_zSize / 2);
            Generate();
        }
               

        oldPos = Player.transform.position;
    }
}
