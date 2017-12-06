#ifndef CAMERA_H
#define CAMERA_H

#include"Base.h"

class Camera : public Base {
  public:
    Camera() : Base() {}
    Camera(const Vector2 &vector) : Base(vector) {}
    
    Vector2 worldToScreenPosition(const Vector2 &vector);
};

#endif
