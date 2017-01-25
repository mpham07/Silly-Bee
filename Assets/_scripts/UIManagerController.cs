using UnityEngine;
using System.Collections;

public class UIManagerController : MonoBehaviour {
	public Animator animBtnStart;
	public Animator pnlScoreBoard;
	//public Animator bee;
	private GameController gameController;

	//Make targetFrameRate = 200 for mobile - avoid lag
	void Awake() {
		Application.targetFrameRate = 200;
	}

	void Start() {
		this.gameController = GameObject.FindWithTag ("GameController")
			.GetComponent<GameController> ();
	}

	public void showScoreBoard(bool value)
	{
		if(value) {
			pnlScoreBoard.enabled = true;
			pnlScoreBoard.SetBool("isHidden", false);

			//Start an bannerAd when ending game
		 AdManager.Instance.ShowBanner (); 
		}else {
			pnlScoreBoard.SetBool("isHidden", true);
		}
	}

	public void setHiddenBtnStart(bool b) {
		this.animBtnStart.SetBool ("isHidden",b);
	}

	public void startGame() {
		AdManager.Instance.removeBannerAd (); //Remove the bannerAd when starting game

		GetComponent<AudioSource>().Play ();
		if(!this.animBtnStart.GetBool("isHidden")) this.setHiddenBtnStart (true);
		if (!this.pnlScoreBoard.GetBool ("isHidden")) this.showScoreBoard(false);
		this.gameController.newGame();
	}

	public void btnStartGameAgain_Click() {
		Application.LoadLevel (Application.loadedLevel);
	}
}
