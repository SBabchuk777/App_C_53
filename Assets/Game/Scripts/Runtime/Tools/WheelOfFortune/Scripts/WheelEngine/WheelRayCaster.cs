using UnityEngine;

namespace Game.Scripts.Runtime.Tools.Wheel.Scripts.WheelEngine
{
    public class WheelRayCaster : MonoBehaviour
    {
        public WheelCell GetCell()
        {
            var hit = Physics2D.OverlapPoint(new Vector2(transform.position.x, transform.position.y));
            return hit ? hit.GetComponent<WheelCell>() : null;
        }
    }

    public enum WheelBonusType
    {
        None,
        Coin,
        Life
    }
}