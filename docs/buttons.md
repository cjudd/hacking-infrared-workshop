# Buttons (tactile switch)

A button lets a person send a signal into the code.

When you press a button, the Arduino can:

* Turn something on or off
* Change modes
* Start or stop an action
* Trigger an event
* Make a decision

In other words, buttons turn a project from automatic into interactive.

To Arduino, a button is just:

* Pressed → electrical signal changes
* Not pressed → electrical signal changes back

The Arduino reads this using a GPIO input pin.
```c++
int value = digitalRead(BUTTON_PIN);
```

The value will be:
* `HIGH` (1)
* `LOW` (0)

Your code decides what that means.

## Lab: Use a Button to Control an External LED

In this lab you’ll wire a pushbutton and an external LED so that pressing the button turns the LED on. When you release the button, the LED turns off.

![Button & LED](images/Button_LED_bb.png)

### Wiring Table (source → destination)

NodeMCU GND → – rail\
NodeMCU D2 (GPIO4) → LED anode (long leg)\
LED cathode (short leg) → – rail\
NodeMCU D5 (GPIO14) → one side of pushbutton\
Other side of pushbutton → – rail

✅ This lab uses INPUT_PULLUP, so the button connects D5 to GND when pressed (no extra resistor needed for the button).

### Code

```c++
#define BUTTON_PIN D5 // GPIO14 (D5) 
#define LED D2 // GPIO4 (D2)

void setup() {
  Serial.begin(115200);
  delay(200);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
}

void loop(){
  // Read the value of the input. It can either be 1 or 0
  int buttonValue = digitalRead(BUTTON_PIN);
  if (buttonValue == LOW){
    // If button pushed, turn LED on
    digitalWrite(LED, HIGH);
    Serial.println("LED on");
   } else {
    // Otherwise, turn the LED off
    digitalWrite(LED, LOW);
    Serial.println("LED off");
  }
}
```

[Button_LED.ino](https://github.com/cjudd/hacking-infrared-workshop/blob/main/code/Button_LED.ino)

This program uses a button to control an external LED. The button is connected to pin D5, and the LED is connected to pin D2. In the `setup()` function, the button pin is configured as an input with an internal pull-up resistor, which means the pin normally reads `HIGH` and changes to `LOW` when the button is pressed. The LED pin is configured as an output, allowing the board to turn the LED on or off.

In the `loop()` function, the program continuously reads the state of the button. If the button is pressed and the input reads `LOW`, the program turns the LED on by sending a `HIGH` signal to the LED pin. If the button is not pressed and the input reads `HIGH`, the program turns the LED off by sending a `LOW` signal. This process repeats over and over, so the LED immediately responds whenever the button is pressed or released.

### Upload and Test
1. Upload the sketch
    1. In Arduino IDE, select the correct board (commonly NodeMCU 1.0 (ESP-12E Module)).
    1. Select the correct Port.
    1. Click Upload.
1.  Verify it works
    1. Press and hold the button:
        * The external LED should turn on
        * Serial Monitor should print “LED on”
    1. Release the button:
        * The LED should turn off
        * Serial Monitor should print “LED off”

### Troubleshooting
* LED never turns on
    *  Flip the LED (anode/cathode might be reversed).
    *  Confirm you used D2 (not D1/D3).
* Button doesn’t work
    * Make sure the button stems are in different rows.
    * Confirm one side goes to D5 and the other goes to GND.

---

1. [Serial](serial.md)
1. [LEDs](leds.md)
1. [Buttons](buttons.md)

[NEXT](buttons.md)