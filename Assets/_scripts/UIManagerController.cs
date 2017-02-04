using UnityEngine;
using UnityEngine.UI;


public class UIManagerController : MonoBehaviour {
	public Animator animBtnStart;
	public Animator pnlScoreBoard;
	public Animator pnlInstructionBoard;

	private bool isQuestionMark_click = false;

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

	public void btnInstruction_Click() {
		if (!this.isQuestionMark_click) {
			
			this.isQuestionMark_click = true;
			this.showInstructionBoard (true);
		} else {
			
			this.isQuestionMark_click = false;
			this.showInstructionBoard (false);
		}
	}

	public void showInstructionBoard(bool value) {
		if (value) {
			pnlInstructionBoard.enabled = true;
			pnlInstructionBoard.SetBool ("isGetIn", true);
		}else {
			pnlInstructionBoard.SetBool("isGetIn", false);
		}
	}

	public void showScoreBoard(bool value)
	{
		if(value) {
			pnlScoreBoard.enabled = true;
			pnlScoreBoard.SetBool("isHidden", false);

			//Start an bannerAd when ending game
		AdManager.Instance.ShowBanner (); 
		AdManager.Instance.initLoadInterstitial ();
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
		AdManager.Instance.showVideoAd ();
	}

	public void btnRating_Click() {
		#if UNITY_ANDROID
		Application.OpenURL("http://play.google.com/store/apps/details?id=minh.mtpro.beebee");
		#elif UNITY_IPHONE
			Application.OpenURL("itms-apps://itunes.apple.com/app/id1180381806");
	    #endif
	}

	public void btnShowFB_Click() {
		Application.OpenURL ("https://www.facebook.com/sillybeefun/");
	}
}
