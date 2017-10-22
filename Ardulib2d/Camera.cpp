#include"Camera.h"

#define CAMERA_WIDTH    128;
#define CAMERA_HEIGHT   64;

Vector2 Camera::worldToScreenPosition(const Vector2 &vector) {
  if (!isSnapped)
    return Vector2(vector.x - position.x, vector.y - position.y);
  else 
    return Vector2(vector.x - position.x, vector.y - position.y);
}

void Camera::snap(const Base &snap) {
  snapObject = snap;
  isSnapped = true;
}

void Camera::releaseSnap() {
  isSnapped = false;
}

