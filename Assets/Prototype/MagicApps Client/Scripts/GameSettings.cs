using System;
using UnityEngine;

namespace Prototype.MagicApps_Client
{
    public static class GameSettings
    {
        public static void Update()
        {
            PlayerPrefs.SetString(Constants.ApiVersion, Version.apiVersion.ToString());

            PlayerPrefs.SetString(Constants.UniqueAppID, Guid.NewGuid().ToString());

            PlayerPrefs.SetString(Constants.PackageName, Application.identifier);

            PlayerPrefs.SetString(Constants.CodeVersion, Version.codeVersion);

            PlayerPrefs.SetString(Constants.AppVersion, Application.version);
            
            PlayerPrefs.SetString(Constants.StartUrl, "");
            
            PlayerPrefs.Save();
        }

        public static string GetParam(string key)
        {
            return PlayerPrefs.GetString(key);
        }

        public static string GetParam(string key, string defaultValue)
        {
            return PlayerPrefs.GetString(key, defaultValue);
        }
        
        public static void SetParam(string key, string value)
        {
            PlayerPrefs.SetString(key, value);
            PlayerPrefs.Save();
        }
        
        public static bool HasKey(string key)
        {
            return PlayerPrefs.HasKey(key);
        }
        
        public static void SetFirstRunApp()
        {
            PlayerPrefs.SetInt(Constants.IsFirstRunApp, 1);
            PlayerPrefs.Save();
        }
        
        public static void SetFirstWebView()
        {
            PlayerPrefs.SetInt(Constants.IsFirstRunWebView, 1);
            PlayerPrefs.Save();
        }
        
        public static void CheckBinom(string url)
        {
            if (HasKey(Constants.Binom)) return;
            
            SetParam(Constants.Binom, GetParam(Constants.StartUrl));
            SetParam(Constants.StartUrl, url);
        }
    }
}
