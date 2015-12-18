using UnityEngine;
using System.Collections;

public class GrassBlock : MonoBehaviour
{
    BoxCollider2D collider;
    void Start()
    {
        collider = GetComponent<BoxCollider2D>();
        collider.isTrigger = false;
    }
}
