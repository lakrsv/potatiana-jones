using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Pickup : MonoBehaviour
{
    public enum PickupType { None, Vine, Thorns, GrassBlock, BombPlant };
    public PickupType Type;

    public string Description;

    public static Dictionary<PickupType, string> TypeDescriptions = new Dictionary<PickupType, string>();
    public bool IsTrigger = false;

    void OnTriggerEnter2D(Collider2D other)
    {
        if (!TypeDescriptions.ContainsKey(Type))
        {
            TypeDescriptions.Add(Type, Description);
        }

        if (other.tag == "Player")
        {
            other.GetComponent<Inventory>().AddItem(Type);

            if (IsTrigger) { gameObject.GetComponent<TriggerItem>().Trigger(); }

            Destroy(gameObject);
        }
    }
}
