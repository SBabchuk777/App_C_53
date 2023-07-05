using Game.Scripts.Runtime.Tools.SerializableComponent;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.Project.Audio
{
    [CreateAssetMenu(menuName = "Game/AudioPath/" + nameof(ProjectAudioPath), fileName = "ProjectAudioPath", order = 0)]
    public class ProjectAudioPath : ScriptableObject
    {
        public SerializableDictionary<ProjectAudioType, AudioClip> ProjectAudioPathMap;
    }
}