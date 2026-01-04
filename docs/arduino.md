# Arduino Fundamentals

A NodeMCU WIFI Development Board is an Arduino device so knowing some fundamental Arduino concepts will make the rest of the tutorial easier. During these fundamentals, you will learn about concepts like writing code as well as using serial, LEDs and buttons.

## Arduino Code

Arduino code also referred to as sketches is essentially C+, with a simplified application programming interface (API) and some automated preprocessing to make it easier for beginners. The code is often saved in a file with an ino extension.

Every Arduino is made up of two functions, a setup and loop function. The set up is called one when the Arduino is powered up or the code is uploaded. The loop function is called repeatedly until power is removed or new code is uploaded. Your code to make the Arduino do something goes into these functions.

```C
void setup() {
}

void loop() {
}
```

This example of code I often have in a 

## Arduino Hardware

Each Arduino device is different and each come with a documented pinout that explains the physical capabilities of the device. In this tutorial, you will use the GPIO (General Purpose Input/Output) or Digital pins as well as power (3V3) and ground (GND). 

![NodeMCU ESP-12 Pinout](images/NodeMCU-ESP12E-Pinouts.png)



1. [Serial](serial.md)
1. [LEDs](leds.md)
1. [Buttons](buttons.md)

[NEXT](serial.md)