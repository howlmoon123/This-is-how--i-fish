using System;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class PlayerProfile 
{
    
    public string name;

    public int length;
    public int strength;
    public int offLine;
    public int wallet;

    public string gameDate;

    public string Name { get => name; set { name = value; } }
    public int Length { get => length; set { length = value; } }
    public int Strength { get => strength; set { strength = value; } }
    public int OffLine { get => offLine; set { offLine = value; } }
    public int Wallet { get => wallet; set { wallet = value; } }

    public PlayerProfile() { }

    public PlayerProfile(string n, int l, int s, int o, int w)
    {
        name = n;
        length = l;
        strength = s;
        offLine = o;
        wallet = w;
        gameDate = DateTime.Now.ToString("O");
    }
    
    public DateTime GetDateTime()
    {
        if (gameDate == "")
            return DateTime.Parse("");
        else
            return DateTime.Parse(gameDate);
    }

    public void SetGameData(DateTime date)
    {
        gameDate = date.ToString("O");
    }

}
