using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IdleManager : MonoBehaviour
{
    [HideInInspector]
    public int length;

    [HideInInspector]
    public int strength;

    [HideInInspector]
    public int offlineEarnings;

    [HideInInspector]
    public int lengthCost;

    [HideInInspector]
    public int strengthCost;

    [HideInInspector]
    public int offlineEarningsCost;

    [HideInInspector]
    public int wallet;

    [HideInInspector]
    public int totalGain;

    private int[] costs = new int[]
    {
        120,
        151,
        197,
        250,
        324,
        414,
        537,
        687,
        892,
        1145,
        1484,
        1911,
        2479,
        3196,
        4148,
        5359,
        6954,
        9000,
        11687
    };

    public static IdleManager instance;

    public PlayerProfile profile;
    private void Awake()
    {
        if (IdleManager.instance)
            UnityEngine.Object.Destroy(gameObject);
        else
            IdleManager.instance = this;

        //TODO Move prefs to SQLite set up some encryption check my reading list on that.
        length = -30;
        strength = 3;
        offlineEarnings =  3;
        lengthCost = costs[-length / 10 - 3];
        strengthCost = costs[strength - 3];
        offlineEarningsCost = costs[offlineEarnings - 3];
        wallet =  0;

       
        //SaveController.Instance.SaveTextProfile(profile);
    }

    private void Start()
    {

      
        if (!SaveController.Instance.IsPlayerFile())
        {
            profile = new PlayerProfile("Allen", length, strength, offlineEarnings, wallet);
            SaveController.Instance.profile = profile;
            SaveController.Instance.SaveProfile(profile);
        }
    }

    private void OnApplicationPause(bool pause)
    {
        if (pause)
        {
            DateTime now = DateTime.Now;
            profile.gameDate = now.ToString("O");
            // PlayerPrefs.SetString("Date", now.ToString());
            SaveController.Instance.SaveProfile(profile);
            MonoBehaviour.print(now.ToString());
        }
        else
        {
            string @string = profile.gameDate;
            if (@string != string.Empty)
            {
                DateTime d = DateTime.Parse(@string);
                totalGain = (int)((DateTime.Now - d).TotalMinutes * offlineEarnings + 1.0);
                ScreensManager.instance.ChangeScreen(Screens.RETURN);
            }
        }
    }

    private void OnApplicationQuit()
    {
        OnApplicationPause(true);
    }

    public void IQuit()
    {
        Debug.Log("Click quit event setup");
        OnApplicationQuit();
    }

    public void BuyLength()
    {
        length -= 10;
        wallet -= lengthCost;
        lengthCost = costs[-length / 10 - 3];
        profile.Length = -length;
        profile.Wallet = wallet;
      
        ScreensManager.instance.ChangeScreen(Screens.MAIN);
    }

    public void BuyStrength()
    {
        strength++;
        wallet -= strengthCost;
        strengthCost = costs[strength - 3];
        profile.Strength = strength;
        profile.wallet = wallet;
       
        ScreensManager.instance.ChangeScreen(Screens.MAIN);
    }

    public void BuyOfflineEarnings()
    {
        offlineEarnings++;
        wallet -= offlineEarningsCost;
        strengthCost = costs[offlineEarnings - 3];
        profile.OffLine = offlineEarnings;
        profile.Wallet = wallet;
        ScreensManager.instance.ChangeScreen(Screens.MAIN);
    }

    public void CollectMoney()
    {
        wallet += totalGain;
        profile.Wallet = wallet;
        ScreensManager.instance.ChangeScreen(Screens.MAIN);
    }

    public void CollectDoubleMoney()
    {
        wallet += totalGain * 2;
        profile.Wallet = wallet;
        ScreensManager.instance.ChangeScreen(Screens.MAIN);
    }

    public int GetNewCost(int v1)
    {
        return (int)(v1 * 1.25f);
    }
}
