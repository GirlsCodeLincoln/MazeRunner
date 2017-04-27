#include <Arduino.h>
#include "car.h"

Car::Car() {
  leftWheelPin = 5;
  rightWheelPin = 9;
  lightPin = 1;
  buttonPin = A0;
  speed = 127;
}

bool Car::buttonPressed() {
  return digitalRead(buttonPin) == HIGH;
}

void Car::stop() {
  analogWrite(leftWheelPin, 127);
  analogWrite(rightWheelPin, 127);
}

void Car::forward(int duration) {
  analogWrite(leftWheelPin, 127 + speed);
  analogWrite(rightWheelPin, 127 - speed);
  delay(duration);
  stop();
}

void Car::backward(int duration) {
  analogWrite(leftWheelPin, 127 - speed);
  analogWrite(rightWheelPin, 127 + speed);
  delay(duration);
  stop();
}

void Car::turnLeft(int duration) {
  analogWrite(leftWheelPin, 127);
  analogWrite(rightWheelPin, 127 - speed);
  delay(duration);
  stop();
}

void Car::turnRight(int duration) {
  analogWrite(leftWheelPin, 127 + speed);
  analogWrite(rightWheelPin, 127);
  delay(duration);
  stop();
}

void Car::zeroPointLeft(int duration) {
  analogWrite(leftWheelPin, 127 - speed);
  analogWrite(rightWheelPin, 127 - speed);
  delay(duration);
  stop();
}

void Car::zeroPointRight(int duration) {
  analogWrite(leftWheelPin, 127 + speed);
  analogWrite(rightWheelPin, 127 + speed);
  delay(duration);
  stop();
}

void Car::lightOn() {
  digitalWrite(lightPin, HIGH);
}

void Car::lightOff() {
  digitalWrite(lightPin, LOW);
}

