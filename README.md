# MazeRunner
A library for controlling a LittleBits Arduino car

I created this for a [Lincoln Girls Who Code](http://lincolngirlswhocode.com) Club. It provides a simple interface to command a programmable car.

## Required Parts
A [Steam Student Set](http://littlebits.cc/kits/steam-student-set) contains all the parts necessary to build the car with the addition of an [Arduino Bit](http://littlebits.cc/bits/w6-arduino).

- x1 [Mounting Board](http://littlebits.cc/accessories/mounting-board)
- x1 [Battery + Cable](http://littlebits.cc/accessories/battery-plus-cable)
- x1 [Power](http://littlebits.cc/bits/littlebits-power)
- x1 [Button](http://littlebits.cc/bits/button)
- x1 [Wire](http://littlebits.cc/bits/wire-bit)
- x1 [Arduion](http://littlebits.cc/bits/w6-arduino)
- x2 [DC Motor (Tethered)](http://littlebits.cc/bits/dc-motor-tethered)
- x2 [Wheel](https://littlebits.cc/accessories/wheel)
- x1 [Long LED (optional)](http://littlebits.cc/bits/long-led)

For more annoying fun, replace the long LED with a buzzer to make a car horn.

## Available Commands

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
