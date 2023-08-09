using System;

namespace Game.Scripts.Runtime.Feature.Level.GameField
{
    using UnityEngine;

    public class Ball : MonoBehaviour
    {
        private const float MinSwipeDistance = .5f;
        private const float MaxSwipeDistance = 1;
        private const float Force = 23f;
        private const float Distance = 12f;
        private const float MaxHeightScale = 0.668f;
        private readonly Vector3 EndPositionForScale = new Vector3(0, -.4f, 0);

        [SerializeField] private SpriteRenderer _spriteRenderer;
        [SerializeField] private Rigidbody2D _rigidbody2D;

        private Vector3 startPosition;
        private Vector3 mouseWorldPosition;
        private Vector3 startPositionForScale;
        private float startYScale;

        private bool isBallThrown;
        private bool isCanChangeScale;
        private bool isClickBall;
        public event Action OnThrow;

        public void Initialize()
        {
            _rigidbody2D.isKinematic = true;
            startPosition = transform.position;
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
                    isClickBall = false;

                    if (TryThrowBall())
                        return;

                    MoveToStartPosition();
                }

                if (Input.GetMouseButton(0))
                {
                    mouseWorldPosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
                    var swipeDistance = Vector2.Distance(startPosition, mouseWorldPosition);
                    
                    if (swipeDistance < MaxSwipeDistance)
                    {
                        MoveBallToMousePosition();
                    }
                    else
                    {
                        TryThrowBall();
                    }
                }
            }

            if (isCanChangeScale)
            {
                ChangeScaleToPositionY();
            }
        }

        private void OnDestroy()
        {
            OnThrow = null;
        }

        private void MoveBallToMousePosition()
        {
            transform.position = Vector3.Lerp(transform.position, new Vector3(mouseWorldPosition.x, mouseWorldPosition.y, transform.position.z), 3f * Time.deltaTime);
        }

        private void MoveToStartPosition()
        {
            if (transform.position != startPosition)
            {
                transform.position = Vector3.Lerp(transform.position, startPosition, 1);
            }
        }

        private bool TryThrowBall()
        {
            var swipeDistance = Vector2.Distance(startPosition, mouseWorldPosition);

            if (swipeDistance >= MinSwipeDistance)
            {
                ThrowBall();
                return true;
            }

            return false;
        }

        public void SetSprite(Sprite sprite)
        {
            _spriteRenderer.sprite = sprite;
        }

        private void ChangeScaleToPositionY()
        {
            if (!isCanChangeScale)
                return;

            var normalizedY = (transform.position.y - startPositionForScale.y) /
                              (EndPositionForScale.y - startPositionForScale.y);
            var currentHeightScale = Mathf.Lerp(startYScale, MaxHeightScale, normalizedY);

            transform.localScale = new Vector3(currentHeightScale, currentHeightScale, transform.localScale.z);

            if (normalizedY >= 1.0f)
                isCanChangeScale = false;
        }

        private void ThrowBall()
        {
            Vector2 direction = (mouseWorldPosition - startPosition).normalized;

            if (direction.y < 0.02)
                return;
            if (direction.x < -0.015f)
                return;
            if (direction.x > 0.015f)
                return;

            var distanceMultiplier = Distance / Vector2.Distance(startPosition, mouseWorldPosition);
            direction = Vector2.Lerp(direction, direction * 0.16f, 0.2f);

            _rigidbody2D.isKinematic = false;
            _rigidbody2D.AddForce(direction * Force * distanceMultiplier, ForceMode2D.Impulse);

            isBallThrown = true;
            isCanChangeScale = true;
            startPositionForScale = transform.position;

            OnThrow?.Invoke();
        }
    }
}