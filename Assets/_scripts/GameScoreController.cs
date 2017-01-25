using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GameScoreController : MonoBehaviour {
	private int iScore = 0;
	public Text txtScore;

	public void init(){
		resetScore ();
	}

	public void addScore() {
		iScore++;
		this.updateGUIScore ();
	}
	
	public void resetScore() {
		iScore = 0;
		this.updateGUIScore ();
	}

	public void resetHalfScore() {
		iScore = iScore/2;
		this.updateGUIScore ();
	}

	public int getTextScore(){
		return this.iScore;
	}
	
	private void updateGUIScore() {
		txtScore.text = iScore.ToString ();
	}
}
