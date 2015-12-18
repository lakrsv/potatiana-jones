using UnityEngine;
using System.Collections;

public class Sunglasses : MonoBehaviour {

    [SerializeField]
    private GameObject _sunGlasses;
    // Update is called once per frame
    void Update ()
    {
        transform.Rotate(Vector3.up * 100.00f * Time.deltaTime);
	}

    void OnTriggerEnter2D(Collider2D other)
    {
        if(other.transform.tag == "Player")
        {
            GameManager.AddSecret(GameManager.Secrets.Sunglasses);

            _sunGlasses.SetActive(true);
            Destroy(gameObject);
        }
    }
}
