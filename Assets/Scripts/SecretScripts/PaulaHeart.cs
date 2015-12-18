using UnityEngine;
using System.Collections;

public class PaulaHeart : MonoBehaviour
{
    private Transform _player;
	// Use this for initialization
	void Start ()
    {
        _player = transform.parent;
        transform.SetParent(null);

	}
	
	// Update is called once per frame
	void Update ()
    {
        FollowPlayer();
	}

    Vector3 lerpVector = new Vector3();
    void FollowPlayer()
    {
        lerpVector.Set(_player.position.x, _player.position.y + 2.5f, 0);

        transform.position = Vector3.Slerp(transform.position, lerpVector, 1.0f * Time.deltaTime);
    }
}
