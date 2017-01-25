using UnityEngine;
using System.Collections;

public class StopSignController : MonoBehaviour {
	private GameController gameController;
	// Use this for initialization
	void Start () {
		gameController = GameObject.FindWithTag ("GameController").
			GetComponent <GameController>();
	}

	void OnBecameInvisible() {
		Destroy(gameObject); 
	}

	void OnTriggerEnter2D( Collider2D other )
	{
		if(other.CompareTag("bee")) {
			GetComponent<Animator> ().SetBool("letDissapear", true);
			gameController.isTouchingFloors = false;
			gameController.stopGame();
		}
	}
}
