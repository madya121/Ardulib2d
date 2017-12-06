#ifndef ARDUBOY2D_H
#define ARDUBOY2d_H

#include "Camera.h"
#include "RectShape.h"

class Arduboy2D {
  public:
    Camera *camera;
    
    Arduboy2D();
    
    void Draw(RectShape &rectShape);
    
    void DrawGUI(RectShape &rectShape);
};

#endif
