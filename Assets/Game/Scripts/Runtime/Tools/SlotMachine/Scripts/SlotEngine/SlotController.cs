using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
using Game.Scripts.Runtime.Feature.SlotEngine.Data;
using UnityEngine;
using Random = UnityEngine.Random;

namespace Game.Scripts.Runtime.Feature.SlotEngine
{
    public class SlotController : MonoBehaviour
    {
        public SlotHandler SlotHandler;
        public SlotSymbolPath SlotSymbolPath;
        public SlotControllerSettings Settings;
        public List<SlotGroup> SlotGroups;

        public void Create()
        {
            foreach (var group in SlotGroups)
                group.Init(SlotSymbolPath, Settings);

            SlotGroups.Last().OnStopGroup += SlotHandler.NotifyStopSpin;
            SlotGroups.ForEach(g=> g.OnStopGroup += SlotHandler.AudioPlayer.PlayAudioFinishGroup);
            SlotHandler.OnStartSpin += Spin;
        }

        public void OnDestroy()
        {
            SlotGroups.Last().OnStopGroup -= SlotHandler.NotifyStopSpin;
            SlotHandler.OnStartSpin -= Spin;
            SlotGroups.ForEach(g=> g.OnStopGroup -= SlotHandler.AudioPlayer.PlayAudioFinishGroup);
        }

        private void Spin()
        {
            if (SlotHandler.IsSpin)
                return;

            var spinSequence = DOTween.Sequence();

            foreach (var group in SlotGroups)
            {
                spinSequence.Append(DOVirtual.DelayedCall(Random.Range(0, Settings.AwaitTimeForStartGroup),
                    group.MoveGroup));
            }

            spinSequence
                .Append(DOVirtual.DelayedCall(Settings.TimeSpin, StopSpin))
                .Play();
        }

        private void StopSpin()
        {
            var spinSequence = DOTween.Sequence();

            foreach (var group in SlotGroups)
            {
                spinSequence.Append(DOVirtual.DelayedCall(Settings.AwaitTimeStopSpin, group.StopGroup));
            }

            spinSequence.Play();
        }
    }
}