# Prerequisites

To complete the Invisible Technology: Hacking with Infrared workshop, you’ll need a small set of hardware components and software tools. When purchased in bulk, the total cost per student is typically $9–$20, depending on supplier and kit options.

![Infrared Workshop Parts](images/parts.png "Infrared Workshop Parts")

## Hardware

Each student or team (2–3 students recommended) should have access to the following components:

* Core Electronics
    * [NodeMCU WIFI Development Board Based ESP8266](https://www.alibaba.com/product-detail/CP2102-Nodemcu-WIFI-Development-Board-Based_1601374322874.html)\
    (Wi-Fi enabled microcontroller)
    * [Micro USB Cable](https://www.amazon.com/dp/B01GKWE3E0)\
    (for programming and power)
    * [Breadboard](https://www.alibaba.com/product-detail/Can-be-spliced-solderless-breadboard-solderless_1601096435202.html)\
    (solderless prototyping board)
    * Jumper wires\
    (male-to-male recommended)
* Input & Output Components
    * [Tactile Tact Push Button Switchs](https://www.amazon.com/dp/B09R42T3CB)
    * LEDs (assorted colors)
* Infrared Components
    * [5 mm IR Emitter (IR LED)](https://www.amazon.com/dp/B07TLBJR5J?th=1)\
    Used for transmitting infrared signals
    * [5 mm IR Receiver](https://www.amazon.com/dp/B07TLBJR5J?th=1)\
    Used to detect basic IR signals
    * [VS18388 IR Receiver](https://www.amazon.com/dp/B07TLBJR5J?th=1)\
    Optimized for decoding remote control signals
    * [IR Infrared Obstical Avoidance Sensor (HW-201)](https://www.amazon.com/Avoidance-Reflective-Photoelectric-Compatible-Raspberry/dp/B08DR1W3BK/)\
    Used for proximity detection and alarm projects
    * Infrared Remote Control\
    ([HX1838](https://www.alibaba.com/product-detail/HX1838-Infrared-Remote-Control-Kit-Wireless_1601597724033.html) or any standard IR remote)


## Software

Students will need the following software installed before the workshop:

* [Arduino IDE (version 2.3.7 or later)](https://www.arduino.cc/en/software/)\
Used to write, upload and debug code on the ESP8266

## Lab: Seat the NodeMcu on the Breadboard

In this lab, you’ll correctly place the NodeMCU (ESP8266) development board onto a breadboard and power it from your computer.

### Step 1: Place the NodeMCU

![Seat NodeMCU](images/EPS-12_bb.png "Seat NodeMCU")

1. Orient the NodeMCU so the USB connector faces outward, away from the breadboard.
1. Carefully insert the NodeMCU into the breadboard so it straddles the center gap.
1. Make sure the pins labeled 3V3 and Vin align with row 30 on the breadboard.
1. Press down gently until all pins are fully seated.

⚠️ Important: Each side of the NodeMCU must be on a separate side of the breadboard gap. If both rows are connected, the board will not work correctly.

### Step 2: Connect Power

1. Plug the micro-USB cable into the NodeMCU.
1. Connect the other end of the cable to your computer’s USB port.
1. Look for a power LED on the board to turn on, indicating it is receiving power.
---

[NEXT](config.md)