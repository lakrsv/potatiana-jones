using UnityEngine;
using System.Collections;

public class DuckFish : MonoBehaviour
{

    public AudioClip Quack;
    [SerializeField]
    private GameObject _duckFish;

    void OnTriggerEnter2D(Collider2D other)
    {
        if(other.transform.tag == "Player")
        {
            GameManager.AddSecret(GameManager.Secrets.DuckFish);
            AudioPlayer._thisAudio.PlayOneShot(Quack);
            _duckFish.SetActive(true);
        }
    }
}
