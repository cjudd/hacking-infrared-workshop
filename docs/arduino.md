# Arduino Fundamentals

The NodeMCU WiFi Development Board is an Arduino-compatible device. Learning a few Arduino fundamentals will make the rest of this workshop much easier to understand and more fun.

In this section, you’ll learn:
* How Arduino programs work
* How code is structured
* How to send messages to your computer (Serial)
* How to control LEDs and read buttons

These skills are the foundation for everything you’ll build later—including infrared projects.

## Arduino Code (Sketches)

Arduino programs are called sketches.

A sketch is written in C++, but Arduino makes it easier for beginners by:

* Providing a simple programming interface (API)
* Automatically handling some setup behind the scenes

Arduino sketches are usually saved with a .ino file extension.

## The Two Most Important Functions

Every Arduino sketch has two main functions:

```c++
void setup() {
}

void loop() {
}
```

`setup()`
* Runs **once**
* Executes when the board powers on or when you upload new code
* Used to:
    * Set up pins
    * Start Serial communications
    * Initialize hardware

`loop()`
* Runs **over and over forever**
* This is where your main program logic goes
* The board will keep repeating this code until:
    * Power is removed, or
    * New code is uploaded

Think of it like:
* `setup()` = getting ready
* `loop()` = doing the job repeatedly

💡**Helpful Tip**
>If your code has an error and keeps repeating something you don’t want, it can be useful to replace it with an empty sketch like the one above.

Some developers keep a file called `clean.ino` that contains only an empty `setup()` and `loop()` so they can quickly upload it and stop a misbehaving program.

[clear.ino](https://github.com/cjudd/hacking-infrared-workshop/blob/main/code/clear.ino)

## Uploading Code to the NodeMCU

After writing your code in the Arduino IDE:
1. Connect the NodeMCU to your computer using the USB cable
1. Select the correct Board and Port
1. Click the Upload button (the right-facing arrow ▶️)

The Arduino IDE will compile your code and send it to the board.

## Arduino Hardware

Every Arduino-compatible board is different, but each one comes with a **pinout diagram** that explains what its pins can do.

![NodeMCU ESP-12 Pinout](images/NodeMCU-ESP12E-Pinouts.png)

In this workshop, you’ll mainly use:
* GPIO (Digital) Pins\
  Used to turn things on and off (LEDs, IR transmitters, etc.)
* 3V3 (3.3 volts)\
  Supplies power to components
* GND (Ground)\
  The return path for electricity—every circuit needs this

💡**Helpful Tip**
> GPIO stands for General Purpose Input/Output, meaning the pin is not dedicated to a single function and can be configured in software as either an input or an output.

You’ll use these pins to:
* Power components
* Read inputs like buttons
* Control outputs like LEDs and infrared emitters

## Why This Matters

Understanding these fundamentals means you’ll be able to:
* Read Arduino examples with confidence
* Debug problems when things don’t work
* Build more complex projects without guessing

> Every advanced Arduino project—robots, sensors, IR hacking—starts with these basics.

1. [Serial](serial.md)
1. [LEDs](leds.md)
1. [Buttons](buttons.md)

[NEXT](serial.md)