# Prerequisites

To complete the Invisible Technology: Hacking with Infrared workshop, you’ll need a small set of hardware components and software tools. When purchased in bulk, the total cost per student is typically $9–$20, depending on supplier and kit options.

![Infrared Workshop Parts](images/parts.png "Infrared Workshop Parts")

## Hardware

Each student or team (2–3 students recommended) should have access to the following components:

* Core Electronics
    * <a href="https://www.alibaba.com/product-detail/CP2102-Nodemcu-WIFI-Development-Board-Based_1601374322874.html" target="_blank">NodeMCU WIFI Development Board Based ESP8266</a>\
    (Wi-Fi enabled microcontroller)
    * <a href="https://www.amazon.com/dp/B01GKWE3E0" target="_blank">Micro USB Cable</a>\
    (for programming and power)
    * <a href="https://www.alibaba.com/product-detail/Can-be-spliced-solderless-breadboard-solderless_1601096435202.html" target="_blank">Breadboard</a>\
    (solderless prototyping board)
    * Jumper wires\
    (male-to-male recommended)
* Input & Output Components
    * <a href="https://www.amazon.com/dp/B09R42T3CB" target="_blank">Tactile Tact Push Button Switchs</a>
    * LEDs (assorted colors)
* Infrared Components
    * <a href="https://www.amazon.com/dp/B07TLBJR5J?th=1" target="_blank">5 mm IR Emitter (IR LED)</a>\
    Used for transmitting infrared signals
    * <a href="https://www.amazon.com/dp/B07TLBJR5J?th=1" target="_blank">5 mm IR Receiver</a>\
    Used to detect basic IR signals
    * <a href="https://www.amazon.com/dp/B07TLBJR5J?th=1" target="_blank">VS18388 IR Receiver</a>\
    Optimized for decoding remote control signals
    * <a href="https://www.amazon.com/Avoidance-Reflective-Photoelectric-Compatible-Raspberry/dp/B08DR1W3BK/" target="_blank">IR Infrared Obstical Avoidance Sensor (HW-201)</a>\
    Used for proximity detection and alarm projects
    * Infrared Remote Control\
    ( <a href="https://www.alibaba.com/product-detail/HX 1838-Infrared-Remote-Control-Kit-Wireless_1601597724033.html" target="_blank">HX1838<a> or any standard IR remote )


## Software

Students will need the following software installed before the workshop:

* <a href="https://www.arduino.cc/en/software/" target="_blank">Arduino IDE (version 2.3.7 or later)</a>\
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