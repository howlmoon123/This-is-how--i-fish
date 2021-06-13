using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Advertisements;

[RequireComponent(typeof(Button))]
public class RewardedAdsButton : MonoBehaviour, IUnityAdsListener
{
    public string gameId = "4162228";
    public string vungleAdId = "60c03ba6405dcfbef23216bf";
    public string vungleAdPlacementId = "COLLECT2X-5391544";
    public bool isPlayale = false;
   

#if UNITY_IOS
     gameId = "4162229";
#elif UNITY_ANDROID
     gameId = "4162228";
#elif WINDOWS_UWP
    gameId = vungleAdId;
#endif


    public Button myButton;
    public string mySurfacingId = "rewardedVideo";

    private void Start()
    {
        //Vungle Id is 60c03ba6405dcfbef23216bf
        //Vungle placement Id  COLLECT2X-5391544ty

        myButton = GetComponent<Button>();
        myButton.interactable = Advertisement.IsReady(mySurfacingId);

        // Map the ShowRewardedVideo function to the button’s click listener:
        if (myButton) myButton.onClick.AddListener(ShowRewardedVideo);
        if (Application.platform == RuntimePlatform.WindowsPlayer)
        {
            // Initialize the Ads listener and service:
            Advertisement.AddListener(this);
            Advertisement.Initialize(gameId, true);
            Vungle.onAdStartedEvent += (vungleAdPlacementId) =>
            {

            };
            Vungle.onAdFinishedEvent += (vungleAdPlacementId, args) =>
            {

            };

            Vungle.adPlayableEvent += (vungleAdPlacementId, args) =>
            {
                isPlayale = args;
            };
        }
    }

    void ShowRewardedVideo()
    {
        if (Application.platform == RuntimePlatform.WindowsPlayer)
        {
            Vungle.loadAd(vungleAdPlacementId);
            Vungle.adPlayableEvent += (vungleAdPlacementId, isPlayale) =>
            {
                myButton.interactable = isPlayale;
            };
        }
        else if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer)
        {
            Advertisement.Show(mySurfacingId);
        }
    }

    public void OnUnityAdsDidError(string message)
    {
        Debug.LogError(message);
    }

    public void OnUnityAdsDidFinish(string placementId, ShowResult showResult)
    {
       if(showResult == ShowResult.Finished)
        {
            IdleManager.instance.CollectDoubleMoney();
        }
       else if(showResult == ShowResult.Skipped)
        {
            IdleManager.instance.CollectMoney();
        }
       else if(showResult == ShowResult.Skipped)
        {
            Debug.LogError("Thw ad did not finish due to a error");
            IdleManager.instance.CollectDoubleMoney();
         }
    }

    public void OnUnityAdsDidStart(string placementId)
    {
        Debug.LogError("Add started");
    }

    public void OnUnityAdsReady(string placementId)
    {
        if (placementId == mySurfacingId)
            myButton.interactable = true;
    }

   
}
