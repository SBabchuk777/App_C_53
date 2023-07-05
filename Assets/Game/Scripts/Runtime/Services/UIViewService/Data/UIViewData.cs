using Game.Scripts.Runtime.Tools.SerializableComponent;
using UnityEngine;

namespace Game.Scripts.Runtime.Services.UIViewService.Data
{
    [CreateAssetMenu(fileName = nameof(UIViewData), menuName = "Core/Services/UIView/" + nameof(UIViewData))]
    public class UIViewData : ScriptableObject
    {
        public SerializableDictionary<UIViewType, BaseView> ViewDataMap;
    }
}