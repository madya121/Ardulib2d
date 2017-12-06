#include<Arduboy2.h>

#include"Camera.h"
#include"RectShape.h"

void RectShape::draw(Arduboy2 &arduboy, Camera &camera) {
  Vector2 realPosition = camera.worldToScreenPosition(Vector2(position.x, position.y));
  arduboy.drawRect(realPosition.x, realPosition.y, width, height, color);
}

