using UnityEngine;
using System.Collections;

public class BackgroundRepeater : MonoBehaviour {
	private Transform cameraTransform;
	private float spriteSize;
	// Use this for initialization
	void Start () {
		//1
		cameraTransform = Camera.main.transform;
		//2
		SpriteRenderer spriteRenderer = GetComponent<Renderer>() as SpriteRenderer;
		spriteSize = spriteRenderer.sprite.bounds.size.x;
	}
	
	// Update is called once per frame
	void Update () {
		doRepeat ();
	}

	private void doRepeat() {
			if( (transform.position.x + spriteSize) < cameraTransform.position.x) {
				Vector3 newPos = transform.position;
				newPos.x += 2.0f * spriteSize; 
				transform.position = newPos;
			}
	}
}
