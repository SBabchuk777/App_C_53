using System;

namespace Game.Scripts.Runtime.Services.Audio
{
    public class AudioServiceException : ApplicationException
    {
        public AudioServiceException(string message) : base(message)
        {
        }
    }
}