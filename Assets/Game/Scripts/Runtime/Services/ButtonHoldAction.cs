using System;
using Game.Scripts.Runtime.Feature.Lobby;
using Game.Scripts.Runtime.Feature.Project;
using Game.Scripts.Runtime.Feature.Project.Audio;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Feature.SlotEngine.Audio;
using UnityEngine;

namespace Game.Scripts.Runtime.Services
{
    public class ButtonHoldAction : MonoBehaviour
    {
        [SerializeField] private float holdTime;
    
        private float clickTime;

        private ProjectAudioPlayer ProjectAudioPlayer => ProjectContext.Instance.GetDependence<ProjectAudioPlayer>();
        public event Action OnClick;
        public event Action OnButtonHold;
        

        private void OnMouseDown() => 
            clickTime = Time.time;

        private void OnMouseUp()
        {
            if (Time.time - clickTime < holdTime)
                OnClick?.Invoke();
            else
                OnButtonHold?.Invoke();

            if (ProjectAudioPlayer != null) 
                ProjectAudioPlayer.PlayAudioSfx(ProjectAudioType.Click);
        }
    }
}