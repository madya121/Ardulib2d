#ifndef RECT_SHAPE_H
#define RECT_SHAPE

#include<Arduboy2.h>

#include"Camera.h"
#include"Vector2.h"

class RectShape : public Base {
  public:
    int width;
    int height;
    int color;
  
    RectShape() : Base(), width(0), height(0), color(WHITE) {}
    RectShape(int x, int y, int width, int height, int color) : Base(Vector2(x, y)), width(width), height(height), color(color) {}
    
    void draw(const Arduboy2 &arduboy, const Camera &camera);
};

#endif
