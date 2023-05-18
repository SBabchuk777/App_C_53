using System;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.Level
{
    public class GameStatusHandler : MonoBehaviour
    {
        public event Action OnTwoPointGoal;
        public event Action OnThreePointGoal;
        
        public event Action OnMissedToHope;
        
        public event Action<int> OnChangeMultiplayerScore; 
        public event Action<int> OnChangeScore; 
        public event Action<int> OnAddScore; 


        public void NotifyTwoPointGoal()
        {
            OnTwoPointGoal?.Invoke();
        }

        public void NotifyThreePointGoal()
        {
            OnThreePointGoal?.Invoke();
        }

        public void NotifyMissedToHope()
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
    }
}