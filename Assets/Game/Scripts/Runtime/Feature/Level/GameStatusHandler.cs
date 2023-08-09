using System;
using Game.Scripts.Runtime.Feature.UIViews.Challenge;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.Level
{
    public class GameStatusHandler : MonoBehaviour
    {
        public event Action OnTwoPointGoal;
        public event Action OnStartThrowBall;
        public event Action OnCreateBall;
        public event Action OnThreePointGoal;

        public event Action OnMissedToHope;
        public event Action<GameStatusType> OnFinishBallGame;
        public event Action<GameStatusType> OnFinishTimeGame;

        public event Action<int> OnChangeMultiplayerScore;
        public event Action<int> OnChangeScore;
        public event Action<int> OnChangeBestScore;
        public event Action<int> OnAddScore;


        public void NotifyTwoPointGoal()
        {
            OnTwoPointGoal?.Invoke();
        }

        public void NotifyThreePointGoal()
        {
            OnThreePointGoal?.Invoke();
        }

        public void NotifyMissedToHope(GameModeType type)
        {
            OnMissedToHope?.Invoke();
        }

        public void NotifyChangeMultiplayerScore(int value)
        {
            OnChangeMultiplayerScore?.Invoke(value);
        }

        public void NotifyChangeScore(int value)
        {
            OnChangeScore?.Invoke(value);
        }

        public void NotifyAddScore(int value)
        {
            OnAddScore?.Invoke(value);
        }

        public void NotifyChangeBestScore(int value)
        {
            OnChangeBestScore?.Invoke(value);
        }

        public void NotifyFinishBallGame(GameStatusType statusType)
        {
            OnFinishBallGame?.Invoke(statusType);
        }

        public void NotifyFinishTimeGame(GameStatusType statusType)
        {
            OnFinishTimeGame?.Invoke(statusType);
        }

        public void NotifyStartThrow()
        {
            OnStartThrowBall?.Invoke();
        }

        public void NotifyCreateBall()
        {
            OnCreateBall?.Invoke();
        }

        public void UnsubscribeAllEventHandlers()
        {
            OnTwoPointGoal = null;
            OnThreePointGoal = null;
            OnMissedToHope = null;
            OnFinishBallGame = null;
            OnFinishTimeGame = null;
            OnChangeMultiplayerScore = null;
            OnChangeScore = null;
            OnChangeBestScore = null;
            OnAddScore = null;
            OnStartThrowBall = null;
            OnCreateBall = null;
        }
    }
}