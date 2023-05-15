using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;

namespace Game.Scripts.Runtime.Services.Timer
{
    public class TimerService : ITimer
    {
        private bool isStarted;
        private bool isExecuting;

        public event Action<float> OnSecondPassed;

        public event Action OnTimerFinished;

        public float CurrentSeconds { get; private set; }

        public async void Start(CancellationToken cancellationToken)
        {
            if (isStarted)
                return;

            isStarted = true;
            isExecuting = true;

            await UpdateTimer(cancellationToken);
        }

        public void SetSeconds(float time) => 
            CurrentSeconds = time;

        public async void StartCountdown(float time, CancellationToken cancellationToken)
        {
            if (isStarted)
                return;

            isStarted = true;
            isExecuting = true;

            CurrentSeconds = time;
            await UpdateCountdownTimer(cancellationToken);
        }

        public void Resume() =>
            isExecuting = true;

        public void Pause() =>
            isExecuting = false;

        public void Reset()
        {
            CurrentSeconds = 0f;
            isStarted = false;
        }

        public void Stop()
        {
            Pause();
            Reset();
        }

        private async UniTask UpdateTimer(CancellationToken cancellationToken)
        {
            float previousSecond = Mathf.Floor(CurrentSeconds);

            await UniTask.WaitWhile(() =>
            {
                if (isExecuting)
                {
                    CurrentSeconds += Time.deltaTime;
                    float currentSecond = Mathf.Floor(CurrentSeconds);

                    if (currentSecond > previousSecond)
                    {
                        previousSecond = currentSecond;
                        OnSecondPassed?.Invoke(CurrentSeconds);
                    }
                }

                return isStarted && !cancellationToken.IsCancellationRequested;
            }, cancellationToken: cancellationToken);
        }
        private async UniTask UpdateCountdownTimer(CancellationToken cancellationToken)
        {
            float previousSecond = Mathf.Floor(CurrentSeconds);

            await UniTask.WaitWhile(() =>
            {
                if (isExecuting)
                {
                    CurrentSeconds -= Time.deltaTime;
                    float currentSecond = Mathf.Floor(CurrentSeconds);

                    if (currentSecond < previousSecond)
                    {
                        previousSecond = currentSecond;
                        OnSecondPassed?.Invoke(CurrentSeconds <= 0 ? 0f : CurrentSeconds);
                    }
                    
                    if (CurrentSeconds <= 0f)
                    {
                        OnTimerFinished?.Invoke();
                        Reset();
                    }
                }

                return isStarted && !cancellationToken.IsCancellationRequested;
            }, cancellationToken: cancellationToken);
        }
    }
}