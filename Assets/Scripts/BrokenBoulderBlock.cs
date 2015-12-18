using UnityEngine;
using System.Collections;

public class BrokenBoulderBlock : MonoBehaviour
{
    void OnCollisionEnter2D(Collision2D other)
    {
        if (other.transform.tag == "Boulder")
        {
            AudioPlayer.PlayAudio(AudioPlayer.SoundType.Break);
            Destroy(gameObject);
        }
    }
}
