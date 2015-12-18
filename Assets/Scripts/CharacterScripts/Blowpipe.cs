using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class Blowpipe : MonoBehaviour
{
    Pickup.PickupType SelectedAmmo = Pickup.PickupType.None;
    private Inventory _playerInventory;

    private Transform _dartSpawnPoint;

    private Dictionary<Pickup.PickupType, GameObject> _ammoPrefabs = new Dictionary<Pickup.PickupType, GameObject>();

    [SerializeField]
    private Sprite _vineIcon, _grassBlockIcon, _bombPlantIcon;

    private Image _currentItemDisplayImage;
    private Text _ammoCounterText;

    private Animator _ammoAnimator;

    [SerializeField]
    private GameObject _dartPrefab;
    [SerializeField]
    private GameObject _vinePrefab, _thornPrefab, _grassBlockPrefab, _bombPlantPrefab;

    void Start()
    {
        _ammoCounterText = GameObject.FindGameObjectWithTag("AmmoCounter").GetComponent<Text>();
        _ammoAnimator = _ammoCounterText.gameObject.GetComponent<Animator>();
        _currentItemDisplayImage = GameObject.FindGameObjectWithTag("ItemPreview").GetComponent<Image>();
        SelectedAmmo = Pickup.PickupType.Vine;
        AddPrefabEntries();
        _playerInventory = transform.parent.GetComponent<Inventory>();
        _dartSpawnPoint = gameObject.transform.GetChild(0).transform;
    }

    void Update()
    {
        FollowMouse();
        HandleActions();
    }

    private Color
        _normalAmmoColor = new Color(216.0f / 255.0f, 216.0f / 255.0f, 216.0f / 255.0f, 255.0f / 255.0f),
        _lowAmmoColor = new Color(253.0f / 255.0f, 136.0f / 255.0f, 73.0f / 255.0f, 255.0f / 255.0f),
        _veryLowAmmoColor = new Color(255.0f/255.0f, 97.0f/255.0f, 94.0f/255.0f, 255.0f/255.0f);
    public void UpdateAmmoCount()
    {
        int ammoCount = _playerInventory.GetAmmoCount(SelectedAmmo);

        if(ammoCount >= 3) { _ammoCounterText.color = _normalAmmoColor; }
        else if(ammoCount == 2 || ammoCount == 1) { _ammoCounterText.color = _lowAmmoColor; }
        else if(ammoCount <= 0) { _ammoCounterText.color = _veryLowAmmoColor; }

        _ammoCounterText.text = ammoCount.ToString();
        _ammoAnimator.SetTrigger("ExpendAmmo");
    }
    void FollowMouse()
    {
        Vector3 mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        Vector3 direction = new Vector3(mousePosition.x - transform.position.x, mousePosition.y - transform.position.y, 0);
        transform.right = direction;
    }

    void HandleActions()
    {
        //Fire Ammo
        if (Input.GetMouseButtonDown(0))
        {
            FireBlowPipe();
        }
        if (Input.GetKeyDown(KeyCode.E))
        {
            CycleAmmo(true);
        }
        if (Input.GetKeyDown(KeyCode.Q))
        {
            CycleAmmo(false);
        }
    }

    void FireBlowPipe()
    {
        //No Ammo
        if (!_playerInventory.UseItem(SelectedAmmo))
        {
            UpdateAmmoCount();
            return;
        }
        else
        {
            UpdateAmmoCount();
            GameObject dartObject = (GameObject)Instantiate(_dartPrefab, _dartSpawnPoint.position, this.transform.rotation);

            Dart dart = dartObject.GetComponent<Dart>();
            dart.Seed = _ammoPrefabs[SelectedAmmo];
            dart.SeedType = SelectedAmmo;
            
        }


    }
    public void CycleAmmo(bool forward = true)
    {
        SelectedAmmo = _playerInventory.GetNextAmmoType(forward);

        UpdateAmmoCount();

        switch (SelectedAmmo)
        {
            case Pickup.PickupType.Vine:
                _currentItemDisplayImage.sprite = _vineIcon;
                break;
            case Pickup.PickupType.GrassBlock:
                _currentItemDisplayImage.sprite = _grassBlockIcon;
                break;
            case Pickup.PickupType.BombPlant:
                _currentItemDisplayImage.sprite = _bombPlantIcon;
                break;
            case Pickup.PickupType.None:
                break;

        }
    }

    void AddPrefabEntries()
    {
        _ammoPrefabs.Add(Pickup.PickupType.Vine, _vinePrefab);
        _ammoPrefabs.Add(Pickup.PickupType.GrassBlock, _grassBlockPrefab);
        _ammoPrefabs.Add(Pickup.PickupType.Thorns, _thornPrefab);
        _ammoPrefabs.Add(Pickup.PickupType.BombPlant, _bombPlantPrefab);
    }

}
