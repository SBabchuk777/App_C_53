using UnityEngine;

namespace Game.Scripts.Runtime.Feature.SlotEngine
{
    public class SlotRayCaster : MonoBehaviour
    {
        
        public SlotSymbol GetSymbol()
        {
            var hit = Physics2D.OverlapPoint(new Vector2(transform.position.x, transform.position.y));
            return hit ? hit.GetComponent<SlotSymbol>() : null;
        }
    }
}