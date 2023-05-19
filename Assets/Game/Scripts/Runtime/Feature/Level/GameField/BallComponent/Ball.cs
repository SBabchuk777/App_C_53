using System;

namespace Game.Scripts.Runtime.Feature.Level.GameField
{
    using UnityEngine;

    public class Ball : MonoBehaviour
    {
        public float MinSwipeDistance;
        public float MaxSwipeDistance;
        public float force; // Сила полета мяча
        public float distance; // Сила полета мяча
        public float maxHeightScale; // Максимальное значение изменения масштаба мяча

        public SpriteRenderer SpriteRenderer;
        private Vector3 startPos; // Начальная позиция мяча
        private Vector3 endPos; // Конечная позиция мяча
        private Rigidbody2D rb; // Компонент Rigidbody2D мяча
        private float startYScale; // Начальное значение масштаба мяча по оси Y
        
        private bool isBallThrown;
        private bool isCanChangeScale;
        private bool isClickBall;
        private void Start()
        {
            rb = GetComponent<Rigidbody2D>();
            rb.isKinematic = true;
            startPos = new Vector3(transform.position.x, transform.position.y, transform.position.z);
            startYScale = transform.localScale.y;
        }

        private void OnMouseDown()
        {
            startYScale = transform.localScale.y;
            isClickBall = true;
        }

        private void Update()
        {
            if (isClickBall && !isBallThrown)
            {
                if (Input.GetMouseButtonUp(0))
                {
                    endPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);

                    var swipeDistance = Vector2.Distance(startPos, endPos);

                    if (swipeDistance >= MinSwipeDistance)
                    {
                        ThrowBall();
                    }

                    if (transform.position != startPos)
                    {
                        transform.position = Vector3.Lerp(transform.position, startPos, 1);
                    }
                
                    isClickBall = false;
                }

                if (Input.GetMouseButton(0))
                {
                    endPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
                
                    var swipeDistance = Vector2.Distance(startPos, endPos);
                    if (swipeDistance < MaxSwipeDistance)
                    {
                        transform.position = Vector3.Lerp(transform.position, new Vector3(endPos.x, endPos.y, transform.position.z), 3f * Time.deltaTime);
                    }
                    if (swipeDistance >= MaxSwipeDistance) 
                        ThrowBall();
                }
                
            }
            
            ChangeScaleToPositionY();
        }
        
        public void SetSprite(Sprite sprite) => 
            SpriteRenderer.sprite = sprite;

        private void ChangeScaleToPositionY()
        {
            if (!isCanChangeScale) 
                return;
            
            var currentHeightScale = Mathf.Lerp(startYScale, startYScale * maxHeightScale, (transform.position.y - startPos.y) / (endPos.y - startPos.y)/2);
            transform.localScale = new Vector3(currentHeightScale, currentHeightScale, transform.localScale.z);

            if (transform.localScale.x <= maxHeightScale)
                isCanChangeScale = false;
        }

        private void ThrowBall()
        {
            Vector2 direction = (endPos - startPos).normalized;
            
            if (direction.y < 0.02)
                return;
            if (direction.x < -0.01f)
                return;
            if (direction.x > 0.01)
                return;
            
            var distanceMultiplier = distance / Vector2.Distance(startPos, endPos); // Множитель для задания фиксированного расстояния полета
            rb.isKinematic = false;
            direction = Vector2.Lerp(direction, direction * 0.2f, 0.2f);
            rb.AddForce(direction * force * distanceMultiplier, ForceMode2D.Impulse);
            isBallThrown = true;
            isCanChangeScale = true;
        }
    }

}