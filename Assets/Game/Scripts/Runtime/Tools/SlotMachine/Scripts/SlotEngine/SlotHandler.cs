using System;
using Game.Scripts.Runtime.Feature.SlotEngine.Audio;
using Game.Scripts.Runtime.Feature.SlotEngine.Bet;
using Game.Scripts.Runtime.Feature.SlotEngine.WinStatus;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.SlotEngine
{
    public class SlotHandler : MonoBehaviour
    {
        public SlotController SlotController;
        public WinCalculator WinStatus;
        public SlotAudioPlayer AudioPlayer;
        public bool IsAutoSpin { get; private set; }
        public bool IsSpin { get; private set; }
        
        public event Action OnStartSpin;
        public event Action OnStopSpin;
        public event Action OnFinishSpin;
        public event Action OnStartAutoSpin;
        public event Action OnFinishAutoSpin;
        

        public void CreateSlotMachine(BetData betData)
        {
            WinStatus.Init(betData);
            SlotController.Create();
        }
        public void NotifyStartSpin()
        {
            AudioPlayer.PlayAudioMoveSlot();
            OnStartSpin?.Invoke();
            IsSpin = true;
        }

        public void NotifyStopSpin()
        {
            AudioPlayer.StopAudioMoveSlot();
            OnStopSpin?.Invoke();
        }

        public void NotifyFinishSpin()
        {
            IsSpin = false;
            OnFinishSpin?.Invoke();
        }

        public void NotifyStartAutoSpin()
        {
            OnStartAutoSpin?.Invoke();
            IsAutoSpin = true;
        }
        public void NotifyFinishAutoSpin()
        {
            IsAutoSpin = false;
            OnFinishAutoSpin?.Invoke();
        }
    }
}