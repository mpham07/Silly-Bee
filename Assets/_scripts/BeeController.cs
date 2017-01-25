using UnityEngine;
using System.Collections;

public class BeeController : MonoBehaviour {

	private bool isPlaying = false;

	private GameController gameController;
	
	public 	Sprite[] spriteBees;
	private SpriteRenderer sprRenderer;
	public float jetpackForce;

	void Start() {
		this.gameController = GameObject.FindWithTag ("GameController").GetComponent <GameController>();
		this.sprRenderer = (SpriteRenderer)GetComponent<Renderer>();
	}

	public void init() {
		this.isPlaying = true;
		this.sprRenderer.sprite = spriteBees[0];
		this.GetComponent<Rigidbody2D>().gravityScale = 1;
	}



	public void stopControl() {
		this.isPlaying = false;
	}

	// Update is called once per frame
	void Update () {
			if (Input.GetMouseButtonDown(0) && this.isPlaying)
			{
				GetComponent<AudioSource>().Play();
				// Add our tapForce to our bird's velocity if we do click
				GetComponent<Rigidbody2D>().velocity = new Vector2(0f, jetpackForce);
				// Control the rotation of the bird based on its velocity
				transform.rotation = Quaternion.RotateTowards(Quaternion.Euler(0f,0f,0f), Quaternion.Euler(0f,0f,90f), GetComponent<Rigidbody2D>().velocity.y);
			} else if (GetComponent<Rigidbody2D>().velocity.y < -.05) 
				{
					// Do the same here except only if it is falling
					transform.rotation = Quaternion.RotateTowards(Quaternion.Euler(0f,0f,0f), Quaternion.Euler(0f,0f, -90f), -GetComponent<Rigidbody2D>().velocity.y * 4f);
				}
	}
		
	
	void OnTriggerEnter2D(Collider2D other )
	{
		if (other.CompareTag ("floor") || other.CompareTag ("ceiling")) {
			gameController.stopGame();
		}else {
			string tag = other.tag;
			if (!other.CompareTag ("stopSign") && gameController.isPlaying) {
				int i = int.Parse(tag.Substring (tag.Length - 1));
				sprRenderer.sprite = spriteBees[i];
			}
		}
	}
		
}