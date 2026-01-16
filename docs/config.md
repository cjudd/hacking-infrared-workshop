# Install and Configure Arduino IDE (with ESP8266 + IRremoteESP8266)

These steps will set up the **Arduino IDE** to program a **NodeMCU (ESP8266)** and install the **IRremoteESP8266** library.

## 1) Install Arduino IDE

1. Go to: <a href="https://www.arduino.cc/en/software/" target="_blank">Arduino IDE (version 2.3.7 or later)</a>
1. Download the Arduino IDE for your operating system (Windows / macOS / Linux).
1. Install it:
   - **Windows:** run the installer and accept the defaults.
   - **macOS:** drag Arduino IDE into the **Applications** folder.
   - **Linux:** follow the Linux install instructions provided on the download page.
1. Launch **Arduino IDE**.

## 2) Add the ESP8266 Board Manager URL

1. In Arduino IDE, open:
   - **File → Preferences** (Windows/Linux)
   - **Arduino IDE → Settings/Preferences** (macOS)
1. Find **Additional Boards Manager URLs**.
1. Paste this URL:\
    http://arduino.esp8266.com/stable/package_esp8266com_index.json
1. Click **OK** (or **Save**).

## 3) Install the ESP8266 Boards Package (v3.1.2)

1. Open: **Tools → Board → Boards Manager…**
1. In the search box, type:\
    `esp8266`
1. Find **“esp8266 by ESP8266 Community”**
1. Select **Version: 3.1.2**
1. Click **Install**
1. Wait for installation to complete.

## 4) Select the Correct Board (NodeMCU)

1. Go to: **Tools → Board → ESP8266 Boards**
1. Select: **NodeMCU 1.0 (ESP-12E Module)**

## 5) Plug in the NodeMCU and Select the Port

1. Plug the NodeMCU into your computer using a USB cable.
1. Go to: **Tools → Port**
1. Select the port that matches your board:
    - **Windows:** usually `COM3`, `COM4`, etc.
    - **macOS:** usually `/dev/cu.usbserial-xxxx` or `/dev/cu.SLAB_USBtoUART`  
    - **Linux:** usually `/dev/ttyUSB0` or `/dev/ttyACM0`

> ✅ Tip: If you’re not sure which port it is, unplug the board, check the list, plug it back in, and look for the new port that appears.

## 6) Set Upload Speed

1. Go to: **Tools → Upload Speed**
1. Select: **115200**

## 7) Install the IRremoteESP8266 Library

1. Go to: **Sketch → Include Library → Manage Libraries…**
1. In the search box, type:\
    `IRremoteESP8266`
1. Select **IRremoteESP8266**
1. Click **Install**

## Common Issues

* **Port doesn’t show up**
    * Try a different USB cable (some are power-only).
    * Try a different USB port.
    * On Windows, you may need a USB-to-serial driver (often CH340 or CP210x).
* **Upload fails**
    * **Confirm **Board = NodeMCU 1.0 (ESP-12E Module)**
    * Confirm **Upload Speed = 115200**
    * Confirm you selected the correct **Port**

## Github Repo

You can find all the code in the Github repo at https://github.com/cjudd/hacking-infrared-workshop.

[NEXT](arduino.md)