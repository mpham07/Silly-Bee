using UnityEngine;
using System.Collections;

public class GameController : MonoBehaviour {
	private CameraController cameraController;
	private GameSpawnStuffController spawnStuffController;
	private GameScoreController scoreController;
	private BeeController beeController;
	private JarController jarController;
	private UIManagerController uiManagerController;

	private bool _isPlaying = false;
	private bool _isTouchingFloors = true;

	public AudioSource[] audioSource;

	void Start () {

		this.cameraController = Camera.main.GetComponent<CameraController> ();

		this.spawnStuffController = GameObject.FindWithTag ("GameController").
							   GetComponent <GameSpawnStuffController>();

		this.scoreController = GameObject.FindWithTag ("GameController").
						  GetComponent <GameScoreController>();
		this.beeController = GameObject.FindWithTag ("bee").
			GetComponent <BeeController>();
		this.jarController = GameObject.FindWithTag ("jar").
			GetComponent <JarController>();
		this.uiManagerController = GameObject.Find ("UIManager").GetComponent<UIManagerController> ();

		audioSource = GetComponents<AudioSource>();
	}

	public bool isPlaying
	{
		get { return this._isPlaying; }
		set { this._isPlaying = value;}
	}

	public bool isTouchingFloors
	{
		get { return this._isTouchingFloors; }
		set { this._isTouchingFloors = value;}
	}
	
	public void newGame() {
		this.cameraController.init ();
		this.spawnStuffController.init ();	
		this.scoreController.init();
		this.beeController.init ();
		this.jarController.init ();

		this.isPlaying = true;
	}

	public void stopGame() {
		if (this.isTouchingFloors) {
			this.scoreController.resetScore ();
		}

		audioSource [2].Play ();
		this.cameraController.stopCameraMoving ();
		this.spawnStuffController.stopSpawnStuff ();
		this.beeController.stopControl ();
		this.isPlaying = false;
		this.uiManagerController.showScoreBoard (true);
	}

	public void resetGame() {
		audioSource[1].Play();
		this.scoreController.resetHalfScore ();
	} 

	public void updateUpGame() {
		audioSource[0].Play();
		this.scoreController.addScore ();
	}  
}
