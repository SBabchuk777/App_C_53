using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Feature.UIViews.Challenge;
using Game.Scripts.Runtime.Services.UIViewService;
using Game.Scripts.Runtime.Tools.SerializableComponent;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.UIViews
{
    public class LevelPreview : BaseView
    {
        public SerializableDictionary<GameModeType, string> contentTextMap;

        [Space]
        [SerializeField] private Text infoText;
        [SerializeField] private Button playButton;

        [Inject] private DataHub dataHub;

        protected override void Subscribe()
        {
            playButton.onClick.AddListener(Close);
        }

        protected override void Initialize()
        {
            infoText.text = dataHub.LevelGameData.GameModeType == GameModeType.NewBall
                ? contentTextMap[GameModeType.NewBall]
                : contentTextMap[GameModeType.Time];
        }

        protected override void Unsubscribe()
        {
            playButton.onClick.RemoveAllListeners();
        }
    }
}