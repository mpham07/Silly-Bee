using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class FlowerController : MonoBehaviour {

	// Use this for initialization
	private bool moveToJar = false;
	private float moveSpeed = Generals.FSLOW;
	private Vector3 moveDirection;
	private GameController gameController;

	void Start () {
		gameController = GameObject.FindWithTag ("GameController").GetComponent<GameController> ();
	}
		
	void Update () {

		if (moveToJar){

			Vector3 spawnJar = GameObject.Find ("spawnJar").transform.position;

			Vector3 currentPosition = transform.position;
			Vector3 moveToward = new Vector3(spawnJar.x,
				                                 spawnJar.y,
				                                 transform.position.z);
		
				moveDirection = moveToward - currentPosition;
				moveDirection.z = 0; 
				moveDirection.Normalize();

			Vector3 target = moveDirection * moveSpeed + currentPosition;
			transform.position = Vector3.Lerp( currentPosition, target, Time.deltaTime);

			transform.localScale -= new Vector3(0.01f, 0.01f, 0);
		}
	}

	void OnTriggerEnter2D( Collider2D other )
	{
		if(other.CompareTag("bee") && gameController.isPlaying) {
			moveToJar = true;
		}
	}
}
