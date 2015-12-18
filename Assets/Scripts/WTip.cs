using UnityEngine;
using System.Collections;

public class WTip : MonoBehaviour
{
    SpriteRenderer _renderer;
    Animation _thisAnimation;
    void Start()
    {
        _renderer = GetComponent<SpriteRenderer>();
        _thisAnimation = GetComponent<Animation>();

        _renderer.enabled = false;
    }
    void OnTriggerEnter2D(Collider2D other)
    {
        if(other.transform.tag == "Player")
        _renderer.enabled = true;
        _thisAnimation.Play();
    }
}
