using UnityEngine;
using System.Collections;

public class ItemBehaviour : MonoBehaviour
{
    public Pickup.PickupType ItemType;

    public GameObject[] RelevantObjects;

    private Animator _thisAnimator;
    public bool CanGrow;

    [SerializeField]
    private float _delay;
    private bool _finished = false;

    void Start()
    {
        _thisAnimator = GetComponent<Animator>();
        if (CanGrow) { _thisAnimator.speed = 1; } else { _thisAnimator.speed = 0; }
    }

    void Update()
    {
        if (_finished) { return; }
        if (_thisAnimator.GetCurrentAnimatorStateInfo(0).IsName("Grow") && _thisAnimator.speed != 0)
        {
            _finished = true;
            switch (ItemType)
            {
                case Pickup.PickupType.Vine:
                    if (_delay != 0)
                    {
                        Invoke("DelayedAction", _delay);
                    }
                    else
                    {
                        gameObject.AddComponent<Vine>();
                    }
                    break;
                case Pickup.PickupType.GrassBlock:
                    if (_delay != 0)
                    {
                        Invoke("DelayedAction", _delay);
                    }
                    else
                    {
                        gameObject.AddComponent<GrassBlock>();
                    }
                    break;
                case Pickup.PickupType.BombPlant:
                    if(_delay != 0)
                    {
                        Invoke("DelayedAction", _delay);
                    }
                    else
                    {
                        var bp = gameObject.AddComponent<BombPlant>();
                        bp.ObjectsToDestroy = RelevantObjects;
                        bp.DoAction();

                    }
                    break;
            }
        }
    }
    void DelayedAction()
    {
        switch (ItemType)
        {
            case Pickup.PickupType.Vine:
                gameObject.AddComponent<Vine>();
                break;
            case Pickup.PickupType.Thorns:
                gameObject.AddComponent<Thorns>();
                break;
            case Pickup.PickupType.GrassBlock:
                gameObject.AddComponent<GrassBlock>();
                break;
            case Pickup.PickupType.BombPlant:
                var bp = gameObject.AddComponent<BombPlant>();
                bp.ObjectsToDestroy = RelevantObjects;
                bp.DoAction();
                break;
        }
    }


}
