using UnityEngine;
using System.Collections;

public class Elevator : MonoBehaviour
{
    Rigidbody2D _playerRigid;

    void OnCollisionStay2D(Collision2D other)
    {
        if (other.transform.tag == "Player")
        {
            if (_playerRigid == null) { _playerRigid = other.transform.GetComponent<Rigidbody2D>(); }
            _playerRigid.velocity = Vector2.up * 1;
        }



    }
    void OnCollisionEnter2D(Collision2D other)
    {
        if (other.transform.tag == "Player")
            other.transform.gameObject.GetComponent<PlayerController>().CanClimb = true;
    }

    void OnCollisionExit2D(Collision2D other)
    {
        if (other.transform.tag == "Player")
            other.transform.gameObject.GetComponent<PlayerController>().CanClimb = false;
    }
}
