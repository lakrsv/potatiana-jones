using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour
{
    private Animator _playerAnimator;
    private Rigidbody2D _playerRigid;
    private CircleCollider2D _playerCollider;

    public bool CanClimb = false;
    private bool _dead = false;
    private bool _lookingUp = false, _moving = false;

    [SerializeField]
    private GameObject _sunglasses, _questionMark, _paulaHeart, _lukasFace, _kalashnikov, _ric, _duckFish;

    private SimpleCameraShake _cameraShake;

    private float _movementSpeed = 5;
    private float _climbStrength = 6;
    // Use this for initialization
    void Start()
    {
        GameManager.InitializePlayer(this);

        _playerAnimator = GetComponent<Animator>();
        _playerRigid = GetComponent<Rigidbody2D>();
        _playerCollider = GetComponent<CircleCollider2D>();

        _leftRayOffset = new Vector3(-_playerCollider.radius, 0, 0);
        _rightRayOffset = new Vector3(_playerCollider.radius, 0, 0);
        _upRayOffset = new Vector3(0, _playerCollider.radius, 0);
        _downRayOffset = new Vector3(0, -_playerCollider.radius, 0);

        _cameraShake = Camera.main.GetComponent<SimpleCameraShake>();

    }

    // Update is called once per frame
    void Update()
    {
        if (_dead)
            return;

        HandleMovement();

        if (Input.GetKeyDown(KeyCode.R))
        {
            GameManager.RestartLevel();
        }
    }

    public void KillPlayer()
    {
        _cameraShake.ShakeCamera(8, 0.3f);

        DisableSecrets();

        _dead = true;
        AudioPlayer.PlayAudio(AudioPlayer.SoundType.Die);
        _playerAnimator.SetBool("GameOver", true);

        _playerRigid.isKinematic = true;
        _playerCollider.enabled = false;

        Invoke("DoGameOver", 2.0f);


    }

    private void DoGameOver()
    {
        GameManager.RestartLevel();
    }
    //4.5
    Vector2 movement = new Vector2();
    Vector2 gravity = Vector2.zero;
    Vector2 passiveGravity = Vector2.zero;
    float yMovement = 0.0f;
    float looktimer = 0.0f;
    float counter = 0.0f;

    private bool _resetUpSpeed = false;
    private void HandleMovement()
    {
        float inputH = Input.GetAxis("Horizontal");
        float inputV = Input.GetAxis("Vertical");
        float inputVRaw = Input.GetAxisRaw("Vertical");

        //Look up
        if (inputV > 0 && !CanClimb && inputH == 0)
        {
            if (looktimer >= 0.5f)
            {
                CameraMovement.SetOffset(0, 4.5f);
            }
            else
            {
                looktimer += Time.deltaTime;
            }
        }
        else
        {
            looktimer = 0;
        }

        //Up
        if (inputV > 0)
        {

            _lookingUp = true;

            if (CanClimb)
            {
                if (_resetUpSpeed) { yMovement = Mathf.Max(-1.0f, yMovement + gravity.y); _resetUpSpeed = false; }

                if (yMovement < 0)
                {
                    yMovement += 1 * Time.deltaTime * _climbStrength;
                    yMovement = Mathf.Min(yMovement, 0);
                }
                else if (inputVRaw > 0)
                {
                    yMovement += 1 * Time.deltaTime * _climbStrength;
                    yMovement = Mathf.Min(yMovement, 1);
                }
                else if (inputVRaw <= 0)
                {
                    yMovement -= 1 * Time.deltaTime * _climbStrength;
                    yMovement = Mathf.Max(0, yMovement);
                }
            }
        }

        //Down
        else if (inputV < 0)
        {
            if (CanClimb)
            {

                if (_resetUpSpeed) { yMovement = Mathf.Max(-1.0f, yMovement + gravity.y); _resetUpSpeed = false; }

                if (yMovement < -1)
                {
                    yMovement += 1 * Time.deltaTime * _climbStrength;
                    yMovement = Mathf.Min(yMovement, -1);
                }
                else if (inputVRaw < 0)
                {
                    yMovement -= 1 * Time.deltaTime * _climbStrength;
                    yMovement = Mathf.Max(yMovement, -1);
                }
                else if (inputVRaw >= 0)
                {
                    yMovement += 1 * Time.deltaTime * _climbStrength;
                    yMovement = Mathf.Min(0, yMovement);
                }
            }

            _lookingUp = false;
        }

        //No Y Movement
        else
        {
            if (CanClimb)
            {
                if (_resetUpSpeed) { yMovement = Mathf.Max(-1.0f, yMovement + gravity.y); _resetUpSpeed = false; }

                Debug.Log(yMovement);

                if (yMovement < 0)
                {
                    yMovement += 1 * Time.deltaTime * _climbStrength;
                    yMovement = Mathf.Min(yMovement, 0);
                }
            }
            _lookingUp = false;
        }

        //Horizontal Movement
        if (inputH != 0)
        {
            _moving = true;
        }
        else
        {
            _moving = false;
        }

        _playerAnimator.SetBool("Running", _moving);
        _playerAnimator.SetBool("LookUp", _lookingUp);

        //Modify movement based on collisions.

        if (inputH < 0)
        {
            if (!CanMove(Direction.Left)) { inputH = 0; }
        }
        else if (inputH > 0)
        {
            if (!CanMove(Direction.Right)) { inputH = 0; }
        }

        if (inputV > 0)
        {
            if (!CanMove(Direction.Up)) { yMovement = 0; }
        }
        else if (inputV < 0)
        {
            if (!CanMove(Direction.Down)) { yMovement = 0; }
        }

        movement.Set(inputH, yMovement);

        //////Post-Compo (Test feature later)
        ////Add gravity to the movement.
        //if (CanMove(Direction.Down) && !CanClimb)
        //{
        //    movement += ApplyGravity(true);
        //}
        //else
        //{
        //    ApplyGravity(false);
        //}

        if (!CanClimb)
        {
            gravity = ApplyGravity(true);
        }
        else
        {
            gravity = ApplyGravity(false);
        }

        //if (CanClimb && inputVRaw <= 0)
        //{
        //    passiveGravity = ApplyPassiveGravity(true);
        //}
        //else
        //{
        //    passiveGravity = ApplyPassiveGravity(false);
        //}

        if (CanMove(Direction.Down)) { movement += gravity; } else { gravity = ApplyGravity(false); yMovement = 0; }

        gameObject.transform.Translate((movement * _movementSpeed) * Time.deltaTime);

    }

    public enum Direction { Left, Right, Up, Down };

    private Vector3 _leftRayOffset, _rightRayOffset, _upRayOffset, _downRayOffset;
    private const float _rayDist = 0.025f;

    private int _collisionLayer = 1 << 10;

    private bool CanMove(Direction direction)
    {

        RaycastHit2D hit;
        switch (direction)
        {
            case Direction.Left:
                hit = Physics2D.Raycast(transform.position + _leftRayOffset, Vector2.left, _rayDist, _collisionLayer);
                if (hit.collider != null)
                {
                    if (!hit.collider.isTrigger)
                        return false;
                }
                break;
            case Direction.Right:
                hit = Physics2D.Raycast(transform.position + _rightRayOffset, Vector2.right, _rayDist, _collisionLayer);

                if (hit.collider != null)
                {
                    if (!hit.collider.isTrigger)
                        return false;
                }
                break;
            case Direction.Up:
                hit = Physics2D.Raycast(transform.position + _upRayOffset, Vector2.up, _rayDist, _collisionLayer);

                if (hit.collider != null)
                {
                    if (!hit.collider.isTrigger)
                        return false;
                }
                break;
            case Direction.Down:
                hit = Physics2D.Raycast(transform.position + _downRayOffset, Vector2.down, _rayDist, _collisionLayer);

                if (hit.collider != null)
                {
                    if (!hit.collider.isTrigger)
                        return false;
                }
                break;
        }

        return true;
    }

    private Vector2 _gravityForce = new Vector2(0, -6.0f);
    private Vector2 _gravityVector = new Vector2();

    private Vector2 _lastGravity = new Vector2();
    private float _timePassed = 0;

    private float _gravityModifier = 1.0f;

    private Vector2 ApplyGravity(bool apply, bool reverse = false)
    {
        if (!reverse)
        {
            if (apply)
            {
                _resetUpSpeed = true;

                if (_timePassed > 0)
                    _gravityVector += (_gravityForce * Time.deltaTime) * _gravityModifier;

                _timePassed += Time.deltaTime;
            }
            else
            {
                _gravityVector = Vector2.zero;
                _timePassed = 0;
            }

            return _gravityVector;
        }
        else
        {
            if (apply)
            {
                if (_lastGravity != Vector2.zero)
                    _lastGravity = Vector2.zero;

                if (_timePassed > 0)
                    _gravityVector -= (_gravityForce * Time.deltaTime) * _gravityModifier;

                _timePassed += Time.deltaTime;
            }
            else
            {
                if (_lastGravity == Vector2.zero)
                    _lastGravity.Set(_gravityVector.x, _gravityVector.y);
                _gravityVector = Vector2.zero;
                _timePassed = 0;
            }

            return _gravityVector;
        }
    }
    private Vector2 _passivegravityForce = new Vector2(0, -1.0f);
    private Vector2 _passivegravityVector = new Vector2();

    private Vector2 _passivelastGravity = new Vector2();
    private float _passivetimePassed = 0;

    private float _passivegravityModifier = 1.0f;

    private Vector2 ApplyPassiveGravity(bool apply, bool reverse = false)
    {
        if (!reverse)
        {
            if (apply)
            {
                _resetUpSpeed = true;
                if (_passivetimePassed > 0)
                    _passivegravityVector += (_passivegravityForce * Time.deltaTime) * _passivegravityModifier;

                _passivetimePassed += Time.deltaTime;
            }
            else
            {
                _passivegravityVector = Vector2.zero;
                _passivetimePassed = 0;
            }

            return _passivegravityVector;
        }
        else
        {
            if (apply)
            {
                if (_passivelastGravity != Vector2.zero)
                    _passivelastGravity = Vector2.zero;

                if (_passivetimePassed > 0)
                    _passivegravityVector -= (_passivegravityForce * Time.deltaTime) * _passivegravityModifier;

                _passivetimePassed += Time.deltaTime;
            }
            else
            {
                if (_passivelastGravity == Vector2.zero)
                    _passivelastGravity.Set(_passivegravityVector.x, _passivegravityVector.y);
                _passivegravityVector = Vector2.zero;
                _passivetimePassed = 0;
            }

            return _passivegravityVector;
        }
    }


    private void DisableSecrets()
    {
        _sunglasses.SetActive(false);
        _questionMark.SetActive(false);
        _paulaHeart.SetActive(false);
        _lukasFace.SetActive(false);
        _kalashnikov.SetActive(false);
        _ric.SetActive(false);
        _duckFish.SetActive(false);
    }
    public void EnableSecret(GameManager.Secrets secret)
    {
        switch (secret)
        {
            case GameManager.Secrets.LukasFace:
                _lukasFace.SetActive(true);
                break;
            case GameManager.Secrets.PaulaHeart:
                _paulaHeart.SetActive(true);
                break;
            case GameManager.Secrets.RicStupid:
                _ric.SetActive(true);
                break;
            case GameManager.Secrets.SecretIsland:
                _questionMark.SetActive(true);
                break;
            case GameManager.Secrets.Sunglasses:
                _sunglasses.SetActive(true);
                break;
            case GameManager.Secrets.VebKalashnikov:
                _kalashnikov.SetActive(true);
                break;
            case GameManager.Secrets.DuckFish:
                _duckFish.SetActive(true);
                break;
        }
    }
}
