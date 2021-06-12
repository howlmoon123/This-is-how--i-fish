using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;

public class InitializeAdsScript : MonoBehaviour
{

    public string gameId = "4162221";
    // Start is called before the first frame update
    void Start()
    {
        Advertisement.Initialize(gameId, true);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
