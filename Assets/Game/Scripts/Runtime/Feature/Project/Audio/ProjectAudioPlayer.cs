using DG.Tweening;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Feature.UIViews.Settings;
using Game.Scripts.Runtime.Services.Audio;
using Game.Scripts.Runtime.Services.SaveLoadService;
using UnityEngine;
using AudioType = Game.Scripts.Runtime.Services.Audio.AudioType;

namespace Game.Scripts.Runtime.Feature.Project.Audio
{
    public class ProjectAudioPlayer : MonoBehaviour, IProjectInitializable
    {
        public ProjectAudioPath ProjectAudioPath;

        [Inject] private AudioService audioService;
        [Inject] private DataHub dataHub;

        private AudioSource lobbyAmbientSource;
        private AudioSource levelAmbientSource;

        private SettingsData SettingsData { get; set; }

        public void Initialize() =>
            SettingsData = dataHub.LoadData<SettingsData>("Settings");

        public void Start()
        {
            audioService.SetVolume(AudioType.Background, SettingsData.IsMusic ? -20 : -80);
            audioService.SetVolume(AudioType.Music, SettingsData.IsSound ? 0 : -80);
            audioService.SetVolume(AudioType.Sfx, SettingsData.IsSound ? 0 : -80);

            if (!SettingsData.IsSliderActive)
                return;

            audioService.SetVolume(AudioType.Background, SettingsData.MusicVolumeCount);
            audioService.SetVolume(AudioType.Music, SettingsData.SoundVolumeCount);
            audioService.SetVolume(AudioType.Sfx, SettingsData.SoundVolumeCount);
        }

        public void OnDestroy() =>
            StopAudioAmbientOnLobby();

        public void PlayAudioAmbientOnLobby()
        {
            var audioClip = ProjectAudioPath.ProjectAudioPathMap[ProjectAudioType.LobbyAmbient];

            lobbyAmbientSource = audioService.Play(new Tune(audioClip, AudioType.Sfx, true));
            lobbyAmbientSource.volume = 0;
            lobbyAmbientSource.DOFade(1, 3f).Play();
        }

        public void StopAudioAmbientOnLobby()
        {
            if (lobbyAmbientSource != null)
                audioService.Stop(lobbyAmbientSource);
        }
        

        public void PlayAudioSfx(ProjectAudioType projectAudioType)
        {
            audioService.Play(new Tune(ProjectAudioPath.ProjectAudioPathMap[projectAudioType], AudioType.Sfx));
        } 
        
        public void PlayAudioMusic(ProjectAudioType projectAudioType)
        {
            audioService.Play(new Tune(ProjectAudioPath.ProjectAudioPathMap[projectAudioType], AudioType.Music));
        }
    }
}