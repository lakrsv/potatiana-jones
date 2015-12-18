using UnityEngine;
using System.Collections;

public class Vine : MonoBehaviour
{

    PlayerController controller;

    void OnTriggerEnter2D(Collider2D other)
    {
        if(other.tag == "Player")
        {
            if (controller == null)
                controller = other.GetComponent<PlayerController>();

            controller.CanClimb = true;
        }
    }

    void OnTriggerStay2D(Collider2D other)
    {
        if(other.tag == "Player")
        {
            if(controller == null)
                controller = other.GetComponent<PlayerController>();

            controller.CanClimb = true;
        }
    }

    void OnTriggerExit2D(Collider2D other)
    {
        if(other.tag == "Player")
        {
            if (controller == null)
                controller = other.GetComponent<PlayerController>();

            controller.CanClimb = false;
        }
    }
}
