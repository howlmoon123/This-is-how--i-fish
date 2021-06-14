﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public partial interface IVungleHelper
{
	#region Plugin Information
	string SdkVersion { get; }
	string VersionInfo { get; }
	#endregion

	void OnResume();
	void OnPause();

	bool IsSoundEnabled();
	void SetSoundEnabled(bool isEnabled);

	// Initializes the Vungle SDK. Pass in your app ID from the Vungle web portal.
	void Init(string appId);
	// This method gets called by Android and iOS; in contrast, the method above gets called by Windows.
	void Init(string appId, bool initHeaderBiddingDelegate);
	bool IsInitialized();

	bool IsAdvertAvailable(string placementID);
	void LoadAd(string placementID);
	void PlayAd(string placementID);
	void PlayAd(Dictionary<string, object> options, string placementID);
	bool CloseAd(string placementID);

	bool IsAdvertAvailable(string placementID, Vungle.VungleBannerSize adSize);
	void LoadBanner(string placementID, Vungle.VungleBannerSize adSize, Vungle.VungleBannerPosition adPosition);
	void SetBannerOffset(string placementID, int x, int y);
	void ShowBanner(string placementID);
	void CloseBanner(string placementID);
	
	void UpdateConsentStatus(Vungle.Consent consent, string version = "1.0");
	Vungle.Consent GetConsentStatus();

	void UpdateCCPAStatus(Vungle.Consent consent);
	Vungle.Consent GetCCPAStatus();

	void RequestTrackingAuthorization();

	#region Test Usage
	void SetLogEnable(bool enable);
	#endregion
}
