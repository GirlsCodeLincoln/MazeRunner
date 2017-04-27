# MazeRunner
A library for controlling a LittleBits Arduino car

I created this for a [Lincoln Girls Who Code](http://lincolngirlswhocode.com) Club. It provides a simple interface to command a programmable car.

```cpp
car.speed = 127;          //Set the speed (values from 1 to 127)
car.stop();               //Stop the car
car.forward(1000);        //Drive forward for 1 second and then stop
car.backward(2000);       //Drive backward for 2 seconds and then stop
car.turnLeft(1000);       //Turn left for 1 second
car.turnRight(9000);      //Turn right for 9 second
car.zeroPointLeft(500);   //Turn left sharply for ½ second
car.zeroPointRight(1000); //Turn right sharply for 1 second
car.lightOn();            //Turn the light on
car.lightOff();           //Turn the light off
```
