using UnityEngine;
using System.Collections;

public class KillCollider : MonoBehaviour
{
    void OnTriggerEnter2D(Collider2D other)
    {
        if(other.transform.tag == "Player")
        {
            other.gameObject.GetComponent<PlayerController>().KillPlayer();
        }
    }

    void OnCollisionEnter2D(Collision2D other)
    {
        if(other.transform.tag == "Player")
        {
            other.gameObject.GetComponent<PlayerController>().KillPlayer();
        }
    }
}
