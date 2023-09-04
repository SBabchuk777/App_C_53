using System;
using AppsFlyerSDK;
using UnityEngine;
using UnityEngine.Networking;

namespace Prototype.MagicApps_Client
{
    [System.Serializable]
    public class StartRequest : Request
    {
        public override void GeneralParametersGenerate()
        {
            base.GeneralParametersGenerate();
            
            body += ",\"" + Constants.ReqType + "\":\"" + ReqType.start.ToString() + "\"";
           
            body += ",\"" + "startApfUID" + "\":\"" + AppsFlyer.getAppsFlyerId() + "\"";
            Debug.Log(":" + PlayerPrefs.GetString("startApfConvData", "null")); 
            body += ",\"" + "startApfConvData" + "\":\"" + PlayerPrefs.GetString("startApfConvData", "null")+ "\"";
            //startInstallRef 
        }

        public override void ProcessResponse(UnityWebRequest response)
        {
            GameSettings.SetFirstRunApp();
            
            base.ProcessResponse(response);
        }
    }
}
