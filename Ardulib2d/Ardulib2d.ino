#include<Arduboy2.h>

#include"Camera.h"
#include"RectShape.h"

Arduboy2 arduboy;

Camera camera = Camera();
RectShape rect = RectShape(60, 28, 8, 8, WHITE);

void setup() {
  // put your setup code here, to run once:
  arduboy.begin();

  arduboy.setFrameRate(20);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (!(arduboy.nextFrame()))
    return;
  arduboy.clear();
  arduboy.pollButtons();

  rect.draw(arduboy, camera);
  
  if (arduboy.pressed(LEFT_BUTTON)) {
    camera.position.x -= 1;
  }
  if (arduboy.pressed(RIGHT_BUTTON)) {
    camera.position.x += 1;
  }
  if (arduboy.pressed(UP_BUTTON)) {
    camera.position.y -= 1;
  }
  if (arduboy.pressed(DOWN_BUTTON)) {
    camera.position.y += 1;
  }

  arduboy.setCursor(0, 0);
  arduboy.print("Cam: ");
  arduboy.print(camera.position.x); arduboy.print(", "); arduboy.print(camera.position.y);

  arduboy.display();
}
