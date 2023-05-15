using DG.Tweening;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services.Audio;
using UnityEngine;
using AudioType = Game.Scripts.Runtime.Services.Audio.AudioType;


namespace Game.Scripts.Runtime.Tools.Wheel.Scripts.WheelEngine
{
    public class WheelOfFortuneAudioPlayer : MonoBehaviour
    {
        public WheelOfFortuneAudioPath SlotAudioPath;
        private AudioService AudioService => ProjectContext.Instance.GetDependence<AudioService>();

        public void PlayAudioSpin()
        {
            var audioClip = SlotAudioPath.AudioPathMap["Move"];

            AudioService.Play(new Tune(audioClip, AudioType.Music));
        }
        
        public void PlayAudioWin()
        {
            var audioClip = SlotAudioPath.AudioPathMap["Win"];

            AudioService.Play(new Tune(audioClip, AudioType.Music));
        }
    }
}