using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.Serialization;
using System.Runtime.Serialization.Formatters.Binary;
using System.Text;
using UnityEngine;


public class SaveController : MonoBehaviour
{
    public static SaveController Instance = null;

    public PlayerProfile profile;

    public string path;
    public string pathText;

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        else
            Destroy(this);

        path = Application.persistentDataPath + "/Saves/PlayerProfile.howlersave";
        pathText = Application.persistentDataPath + "/Saves/PlayerProfile.txt";

        if (!IsPlayerFile())
        {
            profile = new PlayerProfile(IdleManager.instance.name, IdleManager.instance.length, IdleManager.instance.strength,
                IdleManager.instance.offlineEarnings, IdleManager.instance.wallet);
        }
        else
        {
            LoadPlayerData();
          
        }
        
    }

    public void SaveProfile(PlayerProfile player)
    {
       
        BinaryFormatter formatter = GetBinarryFormatter();
        if (!Directory.Exists(Application.persistentDataPath + "/Saves"))
        {
            Directory.CreateDirectory(Application.persistentDataPath + "/Saves");
        }

        FileStream file = File.Create(path);

        formatter.Serialize(file, player);
        file.Close();
        Debug.LogError("Save Data " + System.Environment.NewLine);
        PrintPlayer(profile);
    }



    public void SaveTextProfile(PlayerProfile profile)
    {
        if (!Directory.Exists(Application.persistentDataPath + "/Saves"))
        {
            Directory.CreateDirectory(Application.persistentDataPath + "/Saves");
        }

        TextWriter t = GetTextWriter(pathText);
        StringBuilder build = new StringBuilder();
        build.Append("Name: " + profile.Name);
        build.Append(" Length: " + profile.Length.ToString());
        build.Append(" Strength: " + profile.Strength.ToString());
        build.Append(" Offline: " + profile.OffLine.ToString());
        build.Append(" Date Time: " + profile.gameDate);
        t.WriteLine(build.ToString());
        t.Flush();
        t.Close();
    }

    public BinaryFormatter GetBinarryFormatter()
    {
        BinaryFormatter f = new BinaryFormatter();
        return f;

    }

    public TextWriter GetTextWriter(string path)
    {
        TextWriter t = new StreamWriter(path);
        return t;
    }

    public bool IsPlayerFile()
    {
        return File.Exists(path);
    }

    public void LoadPlayerData()
    {
        BinaryFormatter bf = GetBinarryFormatter();

        if(IsPlayerFile())
        {
            profile = new PlayerProfile();

            FileStream file = File.Open(path,FileMode.Open);

            profile = (PlayerProfile)bf.Deserialize(file);
        }
        IdleManager.instance.profile = profile;
        Debug.LogError("Load Data " + System.Environment.NewLine);
        PrintPlayer(profile);
    }

    public static bool IsFirstTime()
    {
        return File.Exists(Application.persistentDataPath + "/Saves/PlayerProfile.howlersave");
    }

    public void PrintPlayer(PlayerProfile playerProfile)
    {
        Debug.LogError("Profile Name " + playerProfile.name + " Length: " + playerProfile.length  + " Strength: " + playerProfile.strength + " Offline: " + playerProfile.offLine +  " Wallet " + playerProfile.wallet);
    }

    public static void CreateSaveDirectory()
    {
        Directory.CreateDirectory(Application.persistentDataPath + "/Saves");
    }
}
