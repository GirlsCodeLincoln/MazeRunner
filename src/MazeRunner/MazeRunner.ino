#include <Arduino.h>
#include "car.h"

Car car;

void go() {
  //Alter the code in this function to make the car drive as desired
  delay(1000);
  car.forward(2000);
  car.turnRight(800);
  car.forward(2000);
  car.turnLeft(800);
  car.stop();
}

void setup() {
  car.stop();
  car.lightOff();
}

void loop() {
  if(car.buttonPressed()) {
    go();
  }
}


