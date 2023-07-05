using System;
using UnityEngine;

namespace Game.Scripts.Runtime.Services.Pause
{
    public class PauseService : MonoBehaviour
    {
        public event Action OnStartPause;
        public event Action OnFinishPause;
        
        public bool IsPause { get; set; }

        public void StartPause()
        {
            IsPause = true;
            OnStartPause?.Invoke();
        }

        public void FinishPause()
        {
            IsPause = false;
            OnFinishPause?.Invoke();
        }
    }
}