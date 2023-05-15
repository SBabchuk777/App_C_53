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

        public void UpdateData(SettingsData settingsData) => 
            SettingsData = settingsData;

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
            var audioClip = ProjectAudioPath.ProjectAudioPathMap["LobbyAmbient"];

            lobbyAmbientSource = audioService.Play(new Tune(audioClip, AudioType.Background, true));
            lobbyAmbientSource.volume = 0;
            lobbyAmbientSource.DOFade(1, 3f).Play();
        }

        public void StopAudioAmbientOnLobby()
        {
            if (lobbyAmbientSource != null)
                audioService.Stop(lobbyAmbientSource);
        }

        public void PlayAudioAmbientOnLevel()
        {
            var audioClip = ProjectAudioPath.ProjectAudioPathMap["LevelAmbient"];

            levelAmbientSource = audioService.Play(new Tune(audioClip, AudioType.Background, true));
            levelAmbientSource.volume = 0;
            levelAmbientSource.DOFade(1, 3f).Play();
        }

        public void StopAudioAmbientOnLevel()
        {
            if (levelAmbientSource != null)
                audioService.Stop(levelAmbientSource);
        }

        public void PlayAudioJump()
        {
            var audioClip = ProjectAudioPath.ProjectAudioPathMap["Jump"];

            audioService.Play(new Tune(audioClip, AudioType.Sfx));
        }
        public void PlayAudioAddLife()
        {
            var audioClip = ProjectAudioPath.ProjectAudioPathMap["AddLife"];

            audioService.Play(new Tune(audioClip, AudioType.Sfx));
        }
        public void PlayAudioAddCoin()
        {
            var audioClip = ProjectAudioPath.ProjectAudioPathMap["AddCoin"];

            audioService.Play(new Tune(audioClip, AudioType.Sfx));
        }
        public void PlayAudioExplosionLight()
        {
            var audioClip = ProjectAudioPath.ProjectAudioPathMap["Explosion_1"];

            audioService.Play(new Tune(audioClip, AudioType.Sfx));
        }
        public void PlayAudioWinLevel()
        {
            var audioClip = ProjectAudioPath.ProjectAudioPathMap["WinLevel"];

            audioService.Play(new Tune(audioClip, AudioType.Sfx));
        }
        public void PlayAudioLoseLevel()
        {
            var audioClip = ProjectAudioPath.ProjectAudioPathMap["LoseLevel"];

            audioService.Play(new Tune(audioClip, AudioType.Sfx));
        }
        public void PlayAudioShoot()
        {
            var audioClip = ProjectAudioPath.ProjectAudioPathMap["Shoot"];

            audioService.Play(new Tune(audioClip, AudioType.Sfx));
        }
        public void PlayAudioTakeDamage()
        {
            var audioClip = ProjectAudioPath.ProjectAudioPathMap["TakeDamage"];

            audioService.Play(new Tune(audioClip, AudioType.Sfx));
        }
        public void PlayAudioClick()
        {
            var audioClip = ProjectAudioPath.ProjectAudioPathMap["Click"];

            audioService.Play(new Tune(audioClip, AudioType.Sfx));
        }

       
    }
}