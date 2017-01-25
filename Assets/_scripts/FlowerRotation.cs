using UnityEngine;
using System.Collections;

public class FlowerRotation : MonoBehaviour {
	private float rotateTime = 20;
	public int rotateSpeedSlow = 60; //starting speed, rotate to the right if negative
	public int rotateSpeedFast = 190; //when the bee hits it, rotate to the right if negative
	private int rotateSpeed;

	private GameController gameController;
	// Use this for initialization
	void Start () {
		gameController = GameObject.FindWithTag ("GameController").GetComponent<GameController> ();
		rotateSpeed = rotateSpeedSlow;
	}

	float i = 1f;
	void Update () {
		i += 0.03f;
		transform.rotation = 
			Quaternion.Slerp (transform.rotation, 
			                  Quaternion.Euler (0, 0, i * rotateSpeed), 
			                  rotateTime * Time.deltaTime);
	}

	void OnTriggerEnter2D( Collider2D other )
	{ 
		if(other.CompareTag("bee") && gameController.isPlaying)
			rotateSpeed = rotateSpeedFast;
	}
}
