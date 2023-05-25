using System;
using UnityEngine;
using UnityEngine.UI;

namespace Game.Scripts.Runtime.Feature.Lobby
{
    public class LobbyView : MonoBehaviour
    {
        [SerializeField] private Button collectionButton;
        [SerializeField] private Button challengeButton;
        
        [SerializeField] private LobbyArbiter lobbyArbiter;

        private void Start()
        {
            collectionButton.onClick.AddListener(lobbyArbiter.OpenCollectionView);
            challengeButton.onClick.AddListener(lobbyArbiter.OpenChallengeView);
        }

        private void OnDestroy()
        {
            collectionButton.onClick.RemoveAllListeners();
            challengeButton.onClick.RemoveAllListeners();
        }
    }
    
}