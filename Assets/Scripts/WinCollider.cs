using UnityEngine;
using System.Collections;

public class WinCollider : MonoBehaviour
{
    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.transform.tag == "Player")
            GameManager.NextLevel();
    }
}
