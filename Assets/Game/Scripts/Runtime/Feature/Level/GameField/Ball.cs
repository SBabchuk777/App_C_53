namespace Game.Scripts.Runtime.Feature.Level.GameField
{
    using UnityEngine;

    public class Ball : MonoBehaviour
    {
        public float MinSwipeDistance = 1f;
        public float MaxSwipeDistance = 5f;
        public float force = 10f; // Сила полета мяча
        public float distance = 5f; // Сила полета мяча
        public float maxHeightScale; // Максимальное значение изменения масштаба мяча

        private Vector3 startPos; // Начальная позиция мяча
        private Vector3 endPos; // Конечная позиция мяча
        private Rigidbody2D rb; // Компонент Rigidbody2D мяча
        private float startYScale; // Начальное значение масштаба мяча по оси Y
        private bool isBallThrown;
        private bool isCanChangeScale;
        private void Start()
        {
            rb = GetComponent<Rigidbody2D>();
            rb.isKinematic = true;
            startPos = transform.position;
            startYScale = transform.localScale.y;
        }

        private void Update()
        {
            if (Input.GetMouseButtonDown(0))
            {
                startPos = transform.position; // Сохраняем начальную позицию мяча
                startYScale = transform.localScale.y; // Сохраняем начальное значение масштаба мяча
            }

            if (Input.GetMouseButtonUp(0))
            {
                endPos = Camera.main.ScreenToWorldPoint(Input.mousePosition); // Получаем конечную позицию мяча в мировых координатах
                
                var swipeDistance = Vector2.Distance(startPos, endPos);

                if (swipeDistance >= MinSwipeDistance && !isBallThrown)
                    ThrowBall();
                
                isBallThrown = false;
            }

            if (Input.GetMouseButton(0) && !isBallThrown)
            {
                endPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
                
                var swipeDistance = Vector2.Distance(startPos, endPos);
                
                if (swipeDistance >= MaxSwipeDistance)
                {
                    ThrowBall();
                }
            }

            // Изменение масштаба мяча в полете
            if (isCanChangeScale)
            {
                var currentHeightScale = Mathf.Lerp(startYScale, startYScale * maxHeightScale, (transform.position.y - startPos.y) / (endPos.y - startPos.y));
                transform.localScale = new Vector3(currentHeightScale, currentHeightScale, transform.localScale.z);

                if (transform.localScale.x <= maxHeightScale) 
                    isCanChangeScale = false;
            }
        }

        private void ThrowBall()
        {
            Vector2 direction = (endPos - startPos).normalized;
            if (direction.y < 0.12f)
                return;
            
            var distanceMultiplier = distance / Vector2.Distance(startPos, endPos); // Множитель для задания фиксированного расстояния полета
            rb.isKinematic = false;
            rb.AddForce(direction * force * distanceMultiplier, ForceMode2D.Impulse);
            isBallThrown = true;
            isCanChangeScale = true;
        }
    }

}