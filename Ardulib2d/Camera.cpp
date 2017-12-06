#include"Camera.h"

#define CAMERA_WIDTH    128;
#define CAMERA_HEIGHT   64;

Vector2 Camera::worldToScreenPosition(const Vector2 &vector) {
  return Vector2(vector.x - position.x, vector.y - position.y);
}

