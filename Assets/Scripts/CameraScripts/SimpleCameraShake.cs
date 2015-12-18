using UnityEngine;
using System.Collections;

public class SimpleCameraShake : MonoBehaviour
{

    float shakeAmt = 0.0f;

    //Test
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
            ShakeCamera(8, 0.3f);
    }
    public void ShakeCamera(float magnitude, float duration)
    {

        //shakeAmt = coll.relativeVelocity.magnitude * .0025f;
        shakeAmt = magnitude * .0025f;
        InvokeRepeating("CameraShake", 0, .01f);
        Invoke("StopShaking", duration);

    }

    Vector3 cameraPos = new Vector3();
    private void CameraShake()
    {
        if (shakeAmt > 0)
        {
            float quakeAmt = Random.value * shakeAmt * 2 - shakeAmt;
            cameraPos.Set(transform.position.x, transform.position.y, transform.position.z);

            cameraPos.x += quakeAmt; // can also add to x and/or z
            cameraPos.y += quakeAmt;
            cameraPos.z = -10;

            transform.position = cameraPos;
        }
    }

    private void StopShaking()
    {
        CancelInvoke("CameraShake");
    }

}
