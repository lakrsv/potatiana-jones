using UnityEngine;
using System.Collections;

public class CameraMovement : MonoBehaviour
{
    public GameObject Player;

    private float _smoothFactor = 0.3f;
	// Use this for initialization
	void Start ()
    {
        _offsetX = 0;
        _offsetY = 0;

	    if(Player == null)
        {
            Player = GameObject.FindGameObjectWithTag("Player");
        }
	}
	
	// Update is called once per frame
	void Update ()
    {
        FollowPlayer();
	}

    Vector3 lerpVector = new Vector3();
    Vector3 lerpToVector = new Vector3();
    Vector3 velocity = Vector3.zero;
    private static float _offsetY = 0;
    private static float _offsetX = 0;
    void FollowPlayer()
    {
        lerpToVector.Set(Player.transform.position.x + _offsetX, Player.transform.position.y + _offsetY, Player.transform.position.z);
        //lerpVector = Vector3.Lerp(transform.position, lerpToVector, _smoothFactor * Time.deltaTime);
        lerpVector = Vector3.SmoothDamp(transform.position, lerpToVector, ref velocity, _smoothFactor);
        lerpVector.z = gameObject.transform.position.z;
        transform.position = lerpVector;

        _offsetX = 0;
        _offsetY = 0;
    }

    public static void SetOffset(float x, float y)
    {
        _offsetX = x;
        _offsetY = y;
    }
}
