using UnityEngine;
using System.Collections;

public class GameSpawnStuffController : MonoBehaviour {

	public float minSpawnTime;
	public float maxSpawnTime; 
	public int iTimeToSpawnStopSign;

	public GameObject[] flowerPrefabs;
	public GameObject stopSignPrefab;

	private GameObject flowerPrefab;
	
	int flowerNumOld = -1;
	int flowerColorOld = -1;
	int countFlower = 0;

	public void init() {
		Invoke("vodSpawnFlower",minSpawnTime);
	}

	public void stopSpawnStuff() {
		CancelInvoke ();
	}

	private void vodSpawnFlower()
	{
		Invoke ("vodSpawnFlower", Random.Range (minSpawnTime, maxSpawnTime));
		int spawnFlowerNum = randNoSame (0, flowerPrefabs.Length, ref this.flowerNumOld);
		string nameFlower = getNameFlower (spawnFlowerNum);
	
		Vector3 newPos = GameObject.Find(nameFlower).transform.position;
		Vector3 flowerPos = new Vector3 (newPos.x, 
		                                 newPos.y, 
		                                 newPos.z);


		if (countFlower == iTimeToSpawnStopSign) {
			countFlower = 0;
			Instantiate (stopSignPrefab, flowerPos, Quaternion.identity);

		} else {
			countFlower++;
			int flowerNum = this.randNoSame (0, flowerPrefabs.Length,ref this.flowerColorOld);
			flowerPrefab = getFlowerObject(flowerNum);
			Instantiate (flowerPrefab, flowerPos, Quaternion.identity);
		}
	}

	GameObject getFlowerObject(int num) {
		for (int i=0; i< flowerPrefabs.Length; i++)
						if (i == num)
							return flowerPrefabs [i];
		return null;
	}

	string getNameFlower(int num) {
		for (int i=0; i< flowerPrefabs.Length; i++)
			if (i == num) return "spawnFlower" + i.ToString();
		return "";
	}

	int randNoSame(int min, int max, ref int oldValue) {
		int newNum = Random.Range (min,max);
		while (newNum == oldValue) {
			newNum = Random.Range (min,max);
		}
		oldValue = newNum;
		return newNum;
	}
}
