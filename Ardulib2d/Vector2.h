#ifndef VECTOR2_H
#define VECTOR2_H

class Vector2 {
  public:
    float x;
    float y;
  
    Vector2() : x(0), y(0) {}
    Vector2(float x, float y) : x(x), y(y) {}
    Vector2(const Vector2 &vector) : x(vector.x), y(vector.y) {}
    // Vector2(const Vector2 &vector);
  
    // const float getMagnitude();
    // const Vector2 getNormal();
    
    // const setVector(const Vector2 &vector);
};

#endif
