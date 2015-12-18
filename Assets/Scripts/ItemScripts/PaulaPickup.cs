using UnityEngine;
using System.Collections;

public class PaulaPickup : MonoBehaviour {

    [SerializeField]
    private GameObject _paulaHeart;
    // Update is called once per frame
    void Update()
    {
        transform.Rotate(Vector3.up * 100.00f * Time.deltaTime);
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.transform.tag == "Player")
        {
            GameManager.AddSecret(GameManager.Secrets.PaulaHeart);

            _paulaHeart.SetActive(true);
            Destroy(gameObject);
        }
    }
}
