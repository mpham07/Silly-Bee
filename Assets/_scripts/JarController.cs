using UnityEngine;
using System.Collections;

public class JarController : MonoBehaviour {
	private TypeFlower typeFlower;
	private GameController gameController;

	//public Renderer renderer;
	void Start () {
		gameController = GameObject.FindWithTag ("GameController").
						 GetComponent <GameController>();

		AdManager.Instance.ShowBanner (); 
	}

	public void init() {
		this.typeFlower = TypeFlower.NONE;
	}

	void OnTriggerEnter2D( Collider2D other )
	{
		if(other.transform.position.y < transform.position.y && 
		   other.transform.position.x < transform.position.x) {
			TypeFlower newType = getTypeFlower (other);

			if (typeFlower != newType) {
				if (typeFlower != TypeFlower.NONE) {
					gameController.resetGame ();
				}else gameController.updateUpGame ();	

				typeFlower = newType;
			} else gameController.updateUpGame ();
		}
	}
	
	TypeFlower getTypeFlower(Collider2D other) {

		if (other.CompareTag ("flower0")) return TypeFlower.FLOWER0;
		else if (other.CompareTag ("flower1")) return TypeFlower.FLOWER1;
		else if (other.CompareTag ("flower2")) return TypeFlower.FLOWER2;
		else if (other.CompareTag ("flower3")) return TypeFlower.FLOWER3;
		return TypeFlower.NONE;
	}
}
