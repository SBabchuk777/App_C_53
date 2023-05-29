using System;
using Game.Scripts.Runtime.Feature.Lobby;
using Game.Scripts.Runtime.Feature.Project;
using Game.Scripts.Runtime.Feature.Project.Audio;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Feature.SlotEngine.Audio;
using UnityEngine;

namespace Game.Scripts.Runtime.Services
{
    [RequireComponent(typeof(BoxCollider2D))]
    public class ButtonUI : MonoBehaviour
    {
        private ProjectAudioPlayer ProjectAudioPlayer => ProjectContext.Instance.GetDependence<ProjectAudioPlayer>();
        public event Action OnClick;

        public void OnMouseUp()
        {
            OnClick?.Invoke();
            
            if (ProjectAudioPlayer != null) 
                ProjectAudioPlayer.PlayAudioSfx(ProjectAudioType.Click);
        }

        public void TurnOff() => 
            enabled = false;
    
        public void TurnOn() => 
            enabled = false;
    }
}