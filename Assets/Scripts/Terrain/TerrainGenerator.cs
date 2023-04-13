using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

[RequireComponent(typeof(MeshFilter), typeof(MeshRenderer))]
public class TerrainGenerator : MonoBehaviour
{
    [SerializeField] private AssetManager assetManager;

    private readonly int chunkTerrainWidth = 20;
    private readonly int chunkTerrainHeight = 14;
    private Vector3 startPoint = new Vector3 (float.MaxValue, 0, float.MaxValue);

    private Vector3[] vertices;
    private Mesh mesh;
    private MeshCollider meshCollider;

    private List<Vector3> heights = new List<Vector3>();
    private Dictionary<Vector2, float> heightMaps = new Dictionary<Vector2, float>();

    private void Awake()
    {
        //heights = Loader.LoadHeightDataFromFile("heights.txt");
        heights = Loader.LoadHeightDataFromFile(assetManager.st1);


        if (heights.Count > 0)
        {
            for (int i = 0; i < heights.Count; i++)
            {
                if (!heightMaps.ContainsKey(new Vector2(heights[i].x, heights[i].z)))
                {
                    heightMaps.Add(new Vector2(heights[i].x, heights[i].z), heights[i].y);
                }
            }
        }
    }

    
    private void generateMesh()
    {
        mesh = new Mesh();
        GetComponent<MeshFilter>().mesh = mesh;

        int xSize = chunkTerrainWidth * 3;
        int zSize = chunkTerrainHeight * 3;

        vertices = new Vector3[(xSize + 1) * (zSize + 1)];
        
        Vector2[] uvs = new Vector2[vertices.Length];
        Vector4[] tangents = new Vector4[vertices.Length];
        Vector4 tangent = new Vector4(1f, 0f, 0f, -1f);

        Vector2 bottomLeft = new Vector2(startPoint.x - chunkTerrainWidth * 1.5f, startPoint.z - chunkTerrainHeight * 1.5f);
        Vector2 topRight = new Vector2(startPoint.x + chunkTerrainWidth * 1.5f, startPoint.z + chunkTerrainHeight * 1.5f);

        //print("all:" + vertices.Length + $"z from {(int)bottomLeft.y} to {(int)topRight.y} and x from {(int)bottomLeft.x} to {(int)topRight.x}");

        for (int i = 0, z = (int)bottomLeft.y; z <= (int)topRight.y; z++)
        {
            for (int x = (int)bottomLeft.x; x <= (int)topRight.x; x++, i++)
            {
                float yy = 0;
                if (heightMaps.ContainsKey(new Vector2(x, z)))
                {
                    yy = heightMaps[new Vector2(x, z)];
                }
                vertices[i] = new Vector3(x, yy, z);             
                uvs[i] = new Vector2(x, z);
                tangents[i] = tangent;
            }
        }
        mesh.vertices = vertices;
        mesh.uv = uvs;
        mesh.tangents = tangents;

        int[] triangles = new int[xSize * zSize * 6];
        int ti = 0, vi = 0;
        for (int y = 0; y < zSize; y++, vi++)
        {
            for (int x = 0; x < xSize; x++, ti += 6, vi++)
            {
                triangles[ti] = vi;
                triangles[ti + 1] = triangles[ti + 4] = vi + xSize + 1;
                triangles[ti + 2] = triangles[ti + 3] = vi + 1;
                triangles[ti + 5] = vi + xSize + 2;
            }
        }


        mesh.triangles = triangles;
        mesh.RecalculateNormals();
                
        MeshCollider currentMeshCollider = GetComponent<MeshCollider>();

        if (currentMeshCollider != null)
        {
            GameObject.Destroy(currentMeshCollider);
        }

        gameObject.AddComponent<MeshCollider>();

        
    }

    public void TerrainUpdater(Vector3 newPosition)
    {        
        float deltaX = newPosition.x - startPoint.x;
        float deltaZ = newPosition.z - startPoint.z;

        if (Mathf.Abs(deltaX) > chunkTerrainWidth / 2 
            || Mathf.Abs(deltaZ) > chunkTerrainHeight / 2)
        {
            Vector3 newResult = startPoint;

            if (deltaX > 0 && deltaX> chunkTerrainWidth / 2)
            {
                if (deltaX < chunkTerrainWidth)
                {
                    newResult.x += chunkTerrainWidth;
                }
                else
                {
                    newResult.x = newPosition.x;
                }
                
            }
            else if(deltaX < 0 && deltaX < -chunkTerrainWidth / 2)
            {
                if (deltaX > -chunkTerrainWidth)
                {
                    newResult.x -= chunkTerrainWidth;
                }
                else
                {
                    newResult.x = newPosition.x;
                }
                
            }

            if (deltaZ > 0 && deltaZ > chunkTerrainHeight / 2)
            {
                if (deltaZ < chunkTerrainHeight)
                {
                    newResult.z += chunkTerrainHeight;
                }
                else
                {
                    newResult.z = newPosition.z;
                }
                
            }
            else if (deltaZ < 0 && deltaZ < -chunkTerrainHeight / 2)
            {
                if (deltaZ > chunkTerrainHeight)
                {
                    newResult.z -= chunkTerrainHeight;
                }
                else
                {
                    newResult.z = newPosition.z;
                }
                
            }

            startPoint = new Vector3((int)newResult.x, newResult.y, (int)newResult.z);
            generateMesh();
        }
    }
}
