using UnityEngine;
using System.Collections;

public class Zone : MonoBehaviour
{
    public enum ZoneType { None, Dirt, Grass, BrokenStone };

    public ZoneType ThisZoneType;
    [SerializeField]
    private int _repeatTimes;
    [SerializeField]
    private float _heightMod, _specificX;
    [SerializeField]
    private float _rotationMod;

    public GameObject[] RelatedGameObjects;

    public ZoneType GetZoneType()
    {
        return ThisZoneType;
    }

    public float GetSpecificX()
    {
        return _specificX;
    }
    public int RepeatTimes()
    {
        return _repeatTimes;
    }
    public float GetHeight()
    {
        return _heightMod;
    }

    public float GetRotationMod()
    {
        return _rotationMod;
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.transform.tag == "Dart")
        {
            var _dart = other.GetComponent<Dart>();
            _dart.ThisZone = this;
        }
    }

    void OnTriggerStay2D(Collider2D other)
    {
        if (other.transform.tag == "Dart")
        {
            var _dart = other.GetComponent<Dart>();
            _dart.ThisZone = this;
        }
    }

    void OnTriggerExit2D(Collider2D other)
    {
        if (other.transform.tag == "Dart")
        {
            var _dart = other.GetComponent<Dart>();
            _dart.ThisZone = null;
        }
    }
}
