using System;
using DG.Tweening;
using Game.Scripts.Runtime.Feature.Lobby;
using Game.Scripts.Runtime.Feature.Project;
using Game.Scripts.Runtime.Feature.Project.Audio;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services.Audio;
using UnityEngine;
using AudioType = Game.Scripts.Runtime.Services.Audio.AudioType;

namespace Game.Scripts.Runtime.Feature.SlotEngine.Audio
{
    public class SlotAudioPlayer : MonoBehaviour
    {
        public SlotAudioPath SlotAudioPath;
        private AudioService AudioService => ProjectContext.Instance.GetDependence<AudioService>();
       
        private AudioSource slotMoveSource;

        public void OnDestroy() =>
            StopAudioMoveSlot();

        public void PlayAudioMoveSlot()
        {
            var audioClip = SlotAudioPath.SlotAudioPathMap["SlotMove"];

            slotMoveSource = AudioService.Play(new Tune(audioClip, AudioType.Music, true));

            slotMoveSource.volume = 0;
            slotMoveSource.DOFade(1, 2).Play();
        }

        public void StopAudioMoveSlot()
        {
            if (slotMoveSource != null)
                AudioService.Stop(slotMoveSource);
        }

        public void PlayAudioFinishGroup()
        {
            var audioClip = SlotAudioPath.SlotAudioPathMap["SlotStop"];

            AudioService.Play(new Tune(audioClip, AudioType.Music));
            
        }

        public void PlayAudioWinSpin()
        {
            var audioClip = SlotAudioPath.SlotAudioPathMap["Win"];

            AudioService.Play(new Tune(audioClip, AudioType.Music));
        }
    }
}