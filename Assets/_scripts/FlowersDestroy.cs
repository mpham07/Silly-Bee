using UnityEngine;
using System.Collections;

public class FlowersDestroy : MonoBehaviour {
	void OnBecameInvisible() {
		Destroy(gameObject); 
	}

	void OnTriggerEnter2D( Collider2D other )
	{
		if(other.CompareTag("jar")) {
			if(other.transform.position.y > transform.position.y && 
			   other.transform.position.x > transform.position.x) {
				Destroy(gameObject); 
			}
		}
	}

}
