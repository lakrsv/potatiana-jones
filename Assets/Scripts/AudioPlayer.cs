using UnityEngine;
using System.Collections;

public class AudioPlayer : MonoBehaviour
{
    private static int counter = -1;
    private static AudioPlayer _thisInstance = null;
    public static AudioSource _thisAudio;

    [SerializeField]
    private AudioClip _shoot, _die, _secretPickup, _seedPickup, _winSound, _break;
    [SerializeField]
    private AudioClip _backgroundMusic1, _backgroundMusic2, _backgroundMusic3;
    public enum SoundType { SecretPickup, Die, Shoot, Win, SeedPickup, Break};
    void Awake()
    {
        if(_thisInstance != null) { Destroy(this.gameObject); return; }
        transform.SetParent(null);

        InvokeRepeating("CheckMusic", 1.0f, 1.0f);

        DontDestroyOnLoad(gameObject);
        _thisAudio = GetComponent<AudioSource>();
        if (_thisInstance == null)
            _thisInstance = this;

        CueMusic();
    }

    void Start()
    {
    }

    private int _currentTime = 0;
    private void CheckMusic()
    {
        if(waitTime != -1)
        {
            _currentTime++;
            
            if(_currentTime > waitTime)
            {
                CueMusic();
                _currentTime = 0;
                waitTime = -1;
            }
        }
    }

    private static int _lastIndex = -1;
    private static float waitTime = -1;
    private static void CueMusic()
    {
        int index = Random.Range(0, 3);
        float waitTimeForNextSong = 0;
        switch (index)
        {
            case 0:
                if(index == _lastIndex)
                {
                    index = 1;
                    _thisAudio.PlayOneShot(_thisInstance._backgroundMusic2);
                    waitTimeForNextSong = _thisInstance._backgroundMusic2.length;
                    break;
                }
                else
                {
                    _thisAudio.PlayOneShot(_thisInstance._backgroundMusic1);
                    waitTimeForNextSong = _thisInstance._backgroundMusic1.length;
                }
                break;
            case 1:
                if (index == _lastIndex)
                {
                    index = 2;
                    _thisAudio.PlayOneShot(_thisInstance._backgroundMusic3);
                    waitTimeForNextSong = _thisInstance._backgroundMusic3.length;
                    break;
                }
                else
                {
                    _thisAudio.PlayOneShot(_thisInstance._backgroundMusic2);
                    waitTimeForNextSong = _thisInstance._backgroundMusic1.length;
                }
                break;
            case 2:
                if(index == _lastIndex)
                {
                    index = 1;
                    _thisAudio.PlayOneShot(_thisInstance._backgroundMusic2);
                    waitTimeForNextSong = _thisInstance._backgroundMusic2.length;
                    break;
                }
                else
                {
                    _thisAudio.PlayOneShot(_thisInstance._backgroundMusic3);
                    waitTimeForNextSong = _thisInstance._backgroundMusic3.length;
                }
                break;
        }

        waitTimeForNextSong += 2;
        waitTime = waitTimeForNextSong;
        _lastIndex = index;
    }


    public static void PlayAudio(SoundType type)
    {
        AudioClip audioToPlay = null;
        switch (type)
        {
            case SoundType.Win:
                audioToPlay = _thisInstance._winSound;
                break;
            case SoundType.Shoot:
                audioToPlay = _thisInstance._shoot;
                break;
            case SoundType.SeedPickup:
                audioToPlay = _thisInstance._seedPickup;
                break;
            case SoundType.SecretPickup:
                audioToPlay = _thisInstance._secretPickup;
                break;
            case SoundType.Die:
                audioToPlay = _thisInstance._die;
                break;
            case SoundType.Break:
                audioToPlay = _thisInstance._break;
                break;
        }
        _thisAudio.PlayOneShot(audioToPlay);
    }
}
