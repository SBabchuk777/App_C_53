using System;
using DG.Tweening;
using Game.Scripts.Runtime.Services;
using UnityEngine;

namespace Game.Scripts.Runtime.Tools.Wheel.Scripts.WheelEngine
{
    public class WheelOfFortuneHandler : MonoBehaviour
    {
        public ButtonUI SpinButton;

        public WheelOfFortune WheelOfFortune;
        public WheelOfFortuneAudioPlayer AudioPlayer;
        public WheelRayCaster RayCaster;

        public event Action OnStartSpin;
        public event Action<WheelCell> OnStopSpin;
        public event Action<WheelCell> OnFinishSpin;

        public void Awake()
        {
            SpinButton.OnClick += Spin;
            WheelOfFortune.OnStop += NotifyStopSpin;
        }

        private void NotifyStopSpin()
        {
            var cell = RayCaster.GetCell();
            OnStopSpin?.Invoke(cell);
            if (cell.IDCell != WheelBonusType.None)
            {
                cell.PlayWinAnimation(1f, () => { NotifyFinishSpin(cell); });

                AudioPlayer.PlayAudioWin();
                return;
            }

            NotifyFinishSpin(cell);
        }

        private void NotifyFinishSpin(WheelCell wheelCell)
        {
            OnFinishSpin?.Invoke(wheelCell);
        }

        private void Spin()
        {
            WheelOfFortune.SpinWheel(() =>
            {
                AudioPlayer.PlayAudioSpin();
                OnStartSpin?.Invoke();
            });
        }
    }
}