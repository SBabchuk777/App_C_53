using System;
using System.Threading;

namespace Game.Scripts.Runtime.Services.Timer
{
    public interface ITimer
    {
        float CurrentSeconds { get; }

        void Start(CancellationToken cancellationToken);
        void StartCountdown(float time,CancellationToken cancellationToken);
        void Resume();
        void Pause();
        void Stop();
        void Reset();
        void SetSeconds(float time);
        event Action<float> OnSecondPassed;
        event Action OnTimerFinished;
    }
}