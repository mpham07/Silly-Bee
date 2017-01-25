using UnityEngine;
using System.Collections;

public class ScreenReltaivePosition : MonoBehaviour {
	public enum ScreenEdge {LEFT, RIGHT, TOP, BOTTOM};
	public ScreenEdge screenEdge;
	public float xOffset;
	public float yOffset;
	
	public void init () {
		// 1
		Vector3 newPosition = transform.position;
		Camera camera = Camera.main;
	
		// 2 
		switch(screenEdge)
		{
		case ScreenEdge.RIGHT:
			newPosition.x = camera.aspect * camera.orthographicSize + xOffset;
			newPosition.y = yOffset;
			break;

		case ScreenEdge.TOP:
			newPosition.y = camera.orthographicSize + yOffset;
			newPosition.x = xOffset;
			break;

		case ScreenEdge.LEFT:
			newPosition.x = -camera.aspect * camera.orthographicSize + xOffset;
			newPosition.y = yOffset;
			break;

		case ScreenEdge.BOTTOM:
			newPosition.y = -camera.orthographicSize + yOffset;
			newPosition.x = xOffset;
			break;
		}
		// 3
		transform.position = newPosition;
	}
}
