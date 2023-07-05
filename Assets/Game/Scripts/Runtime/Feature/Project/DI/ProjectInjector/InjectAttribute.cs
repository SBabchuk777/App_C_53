using System;

namespace Game.Scripts.Runtime.Feature.Project.DI
{
    [AttributeUsage(AttributeTargets.Method | AttributeTargets.Field)]
    public class InjectAttribute : Attribute
    {
    }
}