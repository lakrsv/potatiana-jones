using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
public class Inventory : MonoBehaviour
{
    public Dictionary<Pickup.PickupType, int> ItemCount = new Dictionary<Pickup.PickupType, int>();
    private List<Pickup.PickupType> _uniqueAmmo = new List<Pickup.PickupType>();
    private List<Pickup.PickupType> _uniqueFirstGet = new List<Pickup.PickupType>();

    private Blowpipe _blowPipe;

    private Text _itemGetText;
    private Animator _itemGetAnimator;

    private bool _firstAddedItem = true;
    public void AddItem(Pickup.PickupType type)
    {
        AudioPlayer.PlayAudio(AudioPlayer.SoundType.SeedPickup);
        if(_blowPipe == null) { _blowPipe = GameObject.Find("BlowPipe").GetComponent<Blowpipe>(); }
        if(_itemGetText == null) { _itemGetText = GameObject.FindGameObjectWithTag("ItemGetText").GetComponent<Text>(); _itemGetAnimator = _itemGetText.gameObject.GetComponent<Animator>(); }

        if (!ItemCount.ContainsKey(type))
        {
            ItemCount.Add(type, 1);
            _uniqueAmmo.Add(type);

            if (!_uniqueFirstGet.Contains(type))
            {
                _uniqueFirstGet.Add(type);
                if (GameManager.CheckIfHadPickup(type)) { return; }
                //Display itemget text.
                _itemGetText.text = string.Format("You got a {0} seed!\n\n{1}", type, Pickup.TypeDescriptions[type]);
                _itemGetAnimator.SetTrigger("GetNewItem");
            }
        }
        else
        {
            ItemCount[type]++;
        }

        if (_firstAddedItem)
        {
            _blowPipe.CycleAmmo(false);
        }

        _blowPipe.UpdateAmmoCount();
    }
    public bool UseItem(Pickup.PickupType type)
    {
        if (ItemCount.ContainsKey(type))
        {
            if (ItemCount[type] > 0)
            {
                ItemCount[type]--;
                if (ItemCount[type] <= 0)
                {
                    _uniqueAmmo.Remove(type);
                    ItemCount.Remove(type);
                }

                AudioPlayer.PlayAudio(AudioPlayer.SoundType.Shoot);

                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }

    private int _currentAmmoIndex = 0;
    public Pickup.PickupType GetNextAmmoType(bool forward = true)
    {

        if (_uniqueAmmo.Count == 0)
            return Pickup.PickupType.None;

        if (_firstAddedItem)
        {
            _firstAddedItem = false;
            return _uniqueAmmo[0];
        }

        if (forward)
        {
            _currentAmmoIndex++;
        }
        else
        {
            _currentAmmoIndex--;
        }

        if(_currentAmmoIndex >= _uniqueAmmo.Count)
        {
            _currentAmmoIndex = 0;
        }
        else if(_currentAmmoIndex < 0)
        {
            _currentAmmoIndex = _uniqueAmmo.Count - 1;
        }

        return _uniqueAmmo[_currentAmmoIndex];
    }

    public int GetAmmoCount(Pickup.PickupType type)
    {
        if (type == Pickup.PickupType.None || !ItemCount.ContainsKey(type))
            return 0;

        return ItemCount[type];
    }
}
