using UnityEngine;
using System.Collections;
using admob;

public class AdManager : MonoBehaviour {

	public static AdManager Instance { set; get;}
	public string bannerID;
	public string videoID;

	private void Start() {
		Instance = this;
		DontDestroyOnLoad (gameObject);

		#if UNITY_EDITOR
		#elif UNITY_IPHONE
		Admob.Instance ().initAdmob (bannerID, videoID);
		//Admob.Instance ().loadInterstitial ();
		#elif UNITY_ANDROID
		Admob.Instance ().initAdmob (bannerID, videoID);
		//Admob.Instance ().loadInterstitial ();
		#endif
		//Admob.Instance().setTesting(true);
	}

	public void ShowBanner() {
		#if UNITY_EDITOR
		#elif UNITY_IPHONE
		Admob.Instance ().showBannerRelative (AdSize.Banner, AdPosition.TOP_CENTER , 5);
		#elif UNITY_ANDROID
		Admob.Instance ().showBannerRelative (AdSize.Banner, AdPosition.TOP_CENTER , 5);
		#endif
	}

	public void removeBannerAd() {
		#if UNITY_EDITOR
		#elif UNITY_IPHONE
		Admob.Instance ().removeBanner ();
		#elif UNITY_ANDROID
		Admob.Instance ().removeBanner ();
		#endif
	}

	public void showVideoAd() {
		#if UNITY_EDITOR
		#elif UNITY_IPHONE
			if (Admob.Instance ().isInterstitialReady ())
			Admob.Instance ().showInterstitial ();
		#elif UNITY_ANDROID
			if (Admob.Instance ().isInterstitialReady ())
			Admob.Instance ().showInterstitial ();
		#endif
	}

}
