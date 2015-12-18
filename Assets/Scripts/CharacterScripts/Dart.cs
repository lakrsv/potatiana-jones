using UnityEngine;
using System.Collections;

public class Dart : MonoBehaviour
{
    public GameObject Seed;
    public Pickup.PickupType SeedType;
    public Zone ThisZone;

    private float _dartSpeed = 5;
    private bool collided = false;

    private Rigidbody2D _thisRigid;

    private float _rotationMod = 0.0f;
    private float _specificX = 0.0f;
    private float _height = 0.0f;
    private int _repeatTimes = 0;
    private Zone.ZoneType _zoneType;
    private GameObject[] _relatedGameObjects;
 
    void Update()
    {
        DoVelocity();
    }
    void DoVelocity()
    {
        if(_thisRigid == null) { _thisRigid = GetComponent<Rigidbody2D>(); }
        if (!collided)
            _thisRigid.velocity = transform.TransformDirection(Vector3.right) * _dartSpeed;
    }
    int _repeats = 0;
    float _posX = 0;
    void OnCollisionEnter2D(Collision2D other)
    {
        if (collided) return;
        collided = true;

        GetComponent<SpriteRenderer>().enabled = false;

        if(ThisZone != null && Seed != null)
        {

            _rotationMod = ThisZone.GetRotationMod();
            _specificX = ThisZone.GetSpecificX();
            _height = ThisZone.GetHeight();
            _zoneType = ThisZone.GetZoneType();
            _repeatTimes = ThisZone.RepeatTimes();
            _relatedGameObjects = ThisZone.RelatedGameObjects;

            if(SeedType == Pickup.PickupType.Vine)
            {
                if (_zoneType != Zone.ZoneType.Dirt)
                {
                    Destroy(gameObject);
                    return;
                }
            }
            else if(SeedType == Pickup.PickupType.Thorns)
            {

            }
            else if(SeedType == Pickup.PickupType.GrassBlock)
            {
                if (_zoneType != Zone.ZoneType.Grass)
                {
                    Destroy(gameObject);
                    return;
                }
            }
            else if(SeedType == Pickup.PickupType.BombPlant)
            {
                if(_zoneType != Zone.ZoneType.BrokenStone)
                {
                    Destroy(gameObject);
                    return;
                }
            }
            _posX = transform.position.x;
            if(_specificX != 0) { _posX = _specificX; }
            if(_repeatTimes != 0) { _repeats = _repeatTimes; }
            GameObject item = (GameObject)Instantiate(Seed, new Vector3(_posX, _height, 0), Quaternion.Euler(new Vector3(0, 0, _rotationMod)));

            item.GetComponent<ItemBehaviour>().RelevantObjects = _relatedGameObjects;

            if(_repeats != 0) { InvokeRepeating("SpawnNext", 1.25f, 1.25f); }
        }

        if(_repeats == 0)
        Destroy(gameObject);
    }

    int itemCount = 1;
    void SpawnNext()
    {
        if(_repeats == 0) { Destroy(gameObject); CancelInvoke(); return;}
        _repeats--;
        if (_rotationMod == 0)
        {
            if (SeedType == Pickup.PickupType.Vine)
                Instantiate(Seed, new Vector3(_posX, _height + 4 * itemCount, 0), Quaternion.Euler(new Vector3(0, 0, _rotationMod)));
            else if (SeedType == Pickup.PickupType.GrassBlock)
                Instantiate(Seed, new Vector3(_posX - 2 * itemCount, _height, 0), Quaternion.Euler(new Vector3(0, 0, _rotationMod)));
        }
        else if (_rotationMod == -180)
        {
            if(SeedType == Pickup.PickupType.Vine)
            Instantiate(Seed, new Vector3(_posX, _height - 4 * itemCount, 0), Quaternion.Euler(new Vector3(0, 0, _rotationMod)));
            else if(SeedType == Pickup.PickupType.GrassBlock)
                Instantiate(Seed, new Vector3(_posX, _height - 4 * itemCount, 0), Quaternion.Euler(new Vector3(0, 0, _rotationMod)));
        }

        itemCount++;
    }
}
