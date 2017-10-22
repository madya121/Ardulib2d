#ifndef BASE_H
#define BASE_H

#include"Vector2.h"

class Base {
  public:
    Vector2 position;
    bool enabled;
  
    Base() : position(Vector2(0, 0)), enabled(true) {}
    Base(const Vector2 &position) : position(Vector2(position)) {}
};

#endif
