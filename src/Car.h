#ifndef Car_h
#define Car_h

class Car
{
  public:
    int leftWheelPin;
    int rightWheelPin;
    int lightPin;
    int buttonPin;
    int speed;
    Car();
    bool buttonPressed();
    void stop();
    void forward(int duration);
    void backward(int duration);
    void turnLeft(int duration);
    void turnRight(int duration);
    void zeroPointLeft(int duration);
    void zeroPointRight(int duration);
    void lightOn();
    void lightOff();
};

#endif

