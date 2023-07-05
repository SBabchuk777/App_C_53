using System;
using Game.Scripts.Runtime.Tools.SerializableComponent;
using UnityEngine.Audio;

namespace Game.Scripts.Runtime.Services.Audio
{
	[Serializable]
	public class AudioTypeToMixerGroupMap : SerializableDictionary<AudioType, AudioMixerGroup>
	{

	}
}
