using UnityEngine;
using System.Collections;

public class CameraController : MonoBehaviour {
	private float speed;
	public float speedDefault;

	private bool isStopCam = false;
	private bool isPlaying = false;
	private Vector3 newPosition;

	private float speedReset = 0.0f;

	void Start() {
		this.initSpawn ();
	}

	public void init() {
		this.newPosition = transform.position;

		this.speed = this.speedDefault;

		this.isPlaying = true;
		this.isStopCam = false;
	}

	void Update () {
		if (isPlaying) {
			if (isStopCam) this.setSpeedDownTo (0, 0.05f, ref isStopCam);
			if (speed > 0) {
				this.newPosition.x += Time.smoothDeltaTime * speed;
				this.transform.position = this.newPosition;
			}
		}
	}
		

	public void setSpeedDownTo(float num, float step, ref bool reset){
		if (speed > num) 
			this.speed -= step;
		else {
			this.speed = num;
			reset = false;

			if(num == 0) this.isPlaying = false;
		}
	}

	public void stopCameraMoving(){
		this.isStopCam = true;
	}
	
	private void initSpawn() {
		for (int i=0; i< Generals.totalFlowers; i++) {
			GameObject.Find("spawnFlower" + i.ToString()).
				GetComponent <ScreenReltaivePosition>().init();
		}

		GameObject.Find("spawnJar").
			GetComponent <ScreenReltaivePosition>().init();
		GameObject.Find("spawnBee").
			GetComponent <ScreenReltaivePosition>().init();

		GameObject.Find("spawnFloor").
				GetComponent <ScreenReltaivePosition>().init();
		GameObject.Find("spawnCeiling").
				GetComponent <ScreenReltaivePosition>().init();
	}
}
