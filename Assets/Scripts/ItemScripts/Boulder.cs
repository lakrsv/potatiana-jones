using UnityEngine;
using System.Collections;

public class Boulder : MonoBehaviour {

    private Rigidbody2D _boulderRigid;
    public bool EnableBoulder = false;
    public float Torque;
	// Use this for initialization
	void Start ()
    {
        _boulderRigid = GetComponent<Rigidbody2D>();
	}
	
	// Update is called once per frame
	void Update ()
    {
        if (EnableBoulder)
        {
            if (Torque > 0)
            {
                _boulderRigid.AddTorque(Torque * Time.deltaTime);
            }
            else
            {
                _boulderRigid.AddTorque(-50 * Time.deltaTime);
            }
        }
	}
}
