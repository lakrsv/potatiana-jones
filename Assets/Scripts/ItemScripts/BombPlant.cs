using UnityEngine;
using System.Collections;

public class BombPlant : MonoBehaviour {

    public GameObject[] ObjectsToDestroy;

	public void DoAction()
    {
	    foreach(GameObject go in ObjectsToDestroy)
        {
            Destroy(go);
            AudioPlayer.PlayAudio(AudioPlayer.SoundType.Break);
        }

        Destroy(gameObject);
	}
}
