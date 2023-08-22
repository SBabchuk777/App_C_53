using UnityEngine;

namespace RateUs
{
    public class RateUsGenerateLink : MonoBehaviour
    {
        [SerializeField, Header("For Andriod")]
        private string _bundleId;
    
        [SerializeField, Header("For IOS")]
        private string _appID;

        private void Start()
        {
            GenerateInPlayerPrefs();
        }

        private void GenerateInPlayerPrefs()
        {
            var key = ""; 
            var value = "";
            
#if UNITY_ANDROID
            key = Consts.KeyAndroid;
            
            if (string.IsNullOrEmpty(_bundleId))
            {
                Debug.Log("!!! Check _bundleId in Rate Us");
                return;
            }
            
            value = Consts.PrefixAndroid + _bundleId;
#elif UNITY_IOS
            key = Consts.KeyIOS;
            
            if (string.IsNullOrEmpty(_appID))
            {
                Debug.Log("!!! Check _appID in Rate Us");
                return;
            }
            
            value = Consts.PrefixIOS + _appID;
#endif
            if (string.IsNullOrEmpty(key))
            {
                Debug.Log("!!! Check Key in Rate Us");
                return;
            }
            
            
            if (PlayerPrefs.HasKey(key))
            {
                return;
            }

            SaveKey(key, value);
        }

        private void SaveKey(string key, string value)
        {
            PlayerPrefs.SetString(key, value);
            PlayerPrefs.Save();
        }
        
        [ContextMenu("Delete Keys")]
        private void DeleteKeys()
        {
            PlayerPrefs.DeleteKey(Consts.KeyIOS);
            
            PlayerPrefs.DeleteKey(Consts.KeyAndroid);
        }
    }
}

