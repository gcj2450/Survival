using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RectColliders : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Vector2 start = new Vector2(transform.position.x - transform.localScale.x * 0.5f, transform.position.z - transform.localScale.z * 0.5f);
        Vector2 end = new Vector2(transform.position.x + transform.localScale.x * 0.5f, transform.position.z + transform.localScale.z * 0.5f);

        print(start.x.ToString("f2").Replace(',', '.') + "f=" + start.y.ToString("f2").Replace(',', '.') + "f=" + end.x.ToString("f2").Replace(',', '.') + "f=" + end.y.ToString("f2").Replace(',', '.'));
    }

}
