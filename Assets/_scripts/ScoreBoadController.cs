using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.IO;
using System;

public class ScoreBoadController : MonoBehaviour {

	public Text txtScoreUnderJar;
	public Text txtScoreAboveBestScore;
	public Text txtScoreBest;

	public Button btnPlayAgain;

	private float fScoreUnderJar;
	private float fScoreAboveBestScore;
	private float fScoreTemp;

	public int iSpeed = 15;
	private int iScoreBest = 0;

	private bool isAllowUpdateTextCore = false;
	
	void Start() {
		//PlayerPrefs.SetInt("score", 1);
		this.readScoreFromFile ();
		this.disableBtns ();
	}

	void Update() {
		if(this.isAllowUpdateTextCore) {
			this.updateTextScore(false);
			this.updateTextScore (true);
		}
	}

	//called in pnlScoreBoard AnimationEvent when bee hits stopSign
	public void updateScore() {
		this.fScoreUnderJar = float.Parse (this.txtScoreUnderJar.text);
		this.fScoreTemp = this.fScoreUnderJar;

		this.readScoreFromFile ();
		this.isAllowUpdateTextCore = true;
	}

	//float a = 0.0f;
	private void updateTextScore(bool b) {
		//Increasing
		if (b) {
			if(this.fScoreAboveBestScore <= this.fScoreTemp) {
				this.fScoreAboveBestScore += Time.deltaTime  * this.iSpeed;

			}
			else {
				this.fScoreAboveBestScore = this.fScoreTemp;
				if(this.fScoreTemp > this.iScoreBest) {
					this.writeScoreToFile ();
					this.readScoreFromFile ();
				}
			}
			this.txtScoreAboveBestScore.text = ((int)this.fScoreAboveBestScore).ToString();
		}//Descreasing
		else {
			if(this.fScoreUnderJar >= 0) {
				this.fScoreUnderJar -= Time.deltaTime  * this.iSpeed;
			}
			else {
				this.fScoreUnderJar = 0;
				this.isAllowUpdateTextCore = false;

				this.enableBtns();
			}
			this.txtScoreUnderJar.text = ((int)this.fScoreUnderJar).ToString();
		}
	}

	public void disableBtns() {
		this.btnPlayAgain.interactable = false;
	}

	public void enableBtns() {
		this.btnPlayAgain.interactable = true;
	}

	private void writeScoreToFile() {
		int i = (int)fScoreTemp;
		PlayerPrefs.SetInt("score", i);
	}
	
	private void readScoreFromFile() {
		iScoreBest = PlayerPrefs.GetInt("score");
		this.txtScoreBest.text = this.iScoreBest.ToString();
	}
}
