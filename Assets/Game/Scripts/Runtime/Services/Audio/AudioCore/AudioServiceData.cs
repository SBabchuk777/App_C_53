using UnityEngine;
using UnityEngine.Audio;

namespace Game.Scripts.Runtime.Services.Audio
{
	[CreateAssetMenu(fileName = "AudioServiceData", menuName = "Game/Services/AudioServiceData", order = 1)]
	public class AudioServiceData : ScriptableObject
	{
		public AudioMixer Mixer;
		public AudioTypeToMixerGroupMap AudioTypeToMixerGroupMap;
	}
}
