using System;
using System.Collections;
using Prototype.Logger;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Networking;

namespace PetrushevskiApps.Utilities
{
    [DefaultExecutionOrder(-50)]
    public class ConnectivityManager : MonoBehaviour
    {
        [Header("Controls")]
        [SerializeField] private bool printDebugMessages;
        
        [SerializeField] private bool StartOnAwake = true;
        
        [Header("Ping parameters")]
        [SerializeField] private string pingUrl = "https://google.com";

        [SerializeField] private float pingInterval = 5f;

        [SerializeField, Space(10)] private UnityEvent InternetAvailable;

        [SerializeField] private UnityEvent InternetNotAvailable;
        
        public static ConnectivityManager Instance;

        private UnityWebRequest webRequest;
        private bool? isConnected;
        private Coroutine connectionTestCoroutine;
        
        private bool? IsConnected
        {
            get => isConnected;
            set
            {
                DLogger.Log($"IsConnected SET: {isConnected} -> {value}");
                
                if (isConnected == value) return;

                isConnected = value;
                
                CheckRequest(value);

                PrintDebugMessage($"Is Connected:: {isConnected}", MessageType.Verbose);
            }
        }
        
        private void CheckRequest(bool? isConnected)
        {
            switch (isConnected)
            {
                case true:
                    DLogger.Log("Internet Available");
                
                    InternetAvailable?.Invoke();
                    break;
                case false:
                    DLogger.Log("Internet Not Available");
                
                    DLogger.Log(" ----- Hide WebView in ConnectivityManager");
                
                    InternetNotAvailable?.Invoke();
                    break;
            }
        }

        private void Awake()
        {
            if (Instance != null)
            {
                Destroy(gameObject);
            }
            else
            {
                Instance = this;
                
                DontDestroyOnLoad(Instance.gameObject);

                if (StartOnAwake)
                {
                    StartConnectionCheck();
                }
            }
        }

        private void StartConnectionCheck()
        {
            if (connectionTestCoroutine == null)
            {
                connectionTestCoroutine = StartCoroutine(TestConnection());
            }
            else
            {
                PrintDebugMessage("Connection check already started!", MessageType.Warning);
            }
        }

        public void StopConnectionCheck()
        {
            if (connectionTestCoroutine != null)
            {
                StopCoroutine(connectionTestCoroutine);
                connectionTestCoroutine = null;
            }
            else
            {
                PrintDebugMessage("No active Connection check!", MessageType.Warning);
            }
        }

        public void CheckErrorReceived()
        {
            if (IsConnected == true)
            {
                IsConnected = false;
            }
        }
        
        private IEnumerator TestConnection()
        {
            DLogger.Log("TestConnection");
            while (true)
            {
                DLogger.Log($"Testing... {Application.internetReachability}");
                
                if (Application.internetReachability == NetworkReachability.NotReachable)
                {
                    IsConnected = false;
                }
                else
                {
                    if (!string.IsNullOrEmpty(pingUrl))
                    {
                        webRequest = new UnityWebRequest(pingUrl);

                        yield return webRequest.SendWebRequest();

                        if (webRequest.result == UnityWebRequest.Result.Success)
                        {
                            IsConnected = true;
                        }
                        else if (webRequest.result != UnityWebRequest.Result.InProgress)
                        {
                            IsConnected = false;

                            PrintDebugMessage($"Connection Error::{webRequest.error}", MessageType.Warning);
                        }

                    }
                    else
                    {
                        IsConnected = false;
                        
                        PrintDebugMessage($"Ping URL in Connectivity Manager ( Inspector ) is missing", MessageType.Error);
                    }
                }

                yield return new WaitForSeconds(pingInterval);
            }
        }

        private void PrintDebugMessage(string message, MessageType messageType)
        {
            if (!printDebugMessages)
            {
                return;
            }
            
            switch (messageType)
            {
                case MessageType.Warning:
                    Debug.LogWarning($"ConnectivityManager:: {message}");
                    break;
                case MessageType.Error:
                    Debug.LogError($"ConnectivityManager:: {message}");
                    break;
                default:
                    Debug.Log($"ConnectivityManager:: {message}");
                    break;
            }
        }

        private enum MessageType
        {
            Verbose,
            Warning,
            Error
        }
    }

    [Serializable] public class UnityConnectivityEvent : UnityEvent<bool, string> { }
}
