using UnityEngine;
using System.Collections;

public class SecretIsland : MonoBehaviour
{
    [SerializeField]
    private GameObject _secretIsland;
    private bool _secretIslandEnabled = false;
    [SerializeField]
    private GameObject _questionMark;
    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.transform.name.Contains("Vine"))
        {
            _secretIsland.SetActive(true);
            _secretIslandEnabled = true;
        }
        if(other.transform.tag == "Player" && _secretIslandEnabled)
        {
            GameManager.AddSecret(GameManager.Secrets.SecretIsland);
            _questionMark.SetActive(true);
        }
    }
}
