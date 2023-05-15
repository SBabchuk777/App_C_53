using System;
using Game.Scripts.Runtime.Tools.SerializableComponent;

namespace Game.Scripts.Runtime.Tools.AspectPresets.Data
{
	[Serializable]
	public class PresetData : SerializableDictionary<AspectRatioType, TransformWrapper> {}
}
