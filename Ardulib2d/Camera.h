#ifndef CAMERA_H
#define CAMERA_H

#include"Base.h"

class Camera : public Base {
  public:
    Camera() : Base(), isSnapped(false) {}
    Camera(const Vector2 &vector) : Base(vector), isSnapped(false) {}
    
    Vector2 worldToScreenPosition(const Vector2 &vector);
    
    void snap(const Base &snap);
    void releaseSnap();

  protected:
    Base snapObject;
    bool isSnapped;
};

#endif
