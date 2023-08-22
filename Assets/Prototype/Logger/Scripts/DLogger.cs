using System;
using UnityEngine;

namespace Prototype.Logger
{
    public class DLogger : MonoBehaviour
    {
        private static DLogger instance;
        
        [SerializeField] private bool _isLogging;
        
        [SerializeField] private GameObject _reporter; 

        private void Awake()
        {
            instance = this;
            
            SetReporterActive(instance._isLogging);
        }
        
        private void SetReporterActive(bool isActive)
        {
            if (_reporter != null)
            {
                _reporter.SetActive(isActive);
            }
        }

        public static void Log(string message)
        {
            if(instance._isLogging)
            {
                Debug.Log(message);
            }
        }
        
        public static void LogError(string message)
        {
            if(instance._isLogging)
            {
                Debug.LogError(message);
            }
        }
        
        public static void LogWarning(string message)
        {
            if(instance._isLogging)
            {
                Debug.LogWarning(message);
            }
        }
    }
}

