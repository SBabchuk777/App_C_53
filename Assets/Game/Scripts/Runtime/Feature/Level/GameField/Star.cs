using System;
using Game.Scripts.Runtime.Feature.Project.DI;
using Game.Scripts.Runtime.Services.Bank;
using UnityEngine;

namespace Game.Scripts.Runtime.Feature.Level.GameField
{
    public class Star : MonoBehaviour
    {
        [SerializeField] private CircleCollider2D collider2D;
        
        [Inject] private BankService bankService;

        public void OnTriggerEnter2D(Collider2D col)
        {
            if (col.GetComponent<Ball>())
            {
                bankService.AddCoin(1);
                Destroy(gameObject);
            }
        }

        public void Activate() => collider2D.enabled = true;
        
        public void Deactivate() => collider2D.enabled = false;
    }
}