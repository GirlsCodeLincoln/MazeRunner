#include <Arduino.h>
#include "car.h"

Car car;

void setup() {
  car.stop();
  car.lightOff();
}

void go();
void loop() {
  if(car.buttonPressed()) {
    go();
  }
}

void go() {
  delay(1000);
  car.forward(2000);
  car.turnRight(800);
  car.forward(2000);
  car.turnLeft(800);
  car.stop();
}

