using UnityEngine;
using System.Collections;

public class LukasBlocks : MonoBehaviour
{
    [SerializeField]
    private AudioClip _breakSound;
    void OnTriggerEnter2D(Collider2D other)
    {
        if(other.transform.tag == "Player")
        {
            AudioPlayer._thisAudio.PlayOneShot(_breakSound);
            Destroy(gameObject);
        }
    }
}
