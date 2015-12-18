using UnityEngine;
using System.Collections;

public class TriggerItem : MonoBehaviour
{

    [SerializeField]
    private GameObject _triggerItem;

    public enum TriggerItemType { Boulder };

    public TriggerItemType TypeOf;

    void Start()
    {
        GetComponent<Pickup>().IsTrigger = true;
    }
    public void Trigger()
    {
        switch (TypeOf)
        {
            case TriggerItemType.Boulder:
                _triggerItem.GetComponent<Boulder>().EnableBoulder = true;
                break;
        }
    }
}
