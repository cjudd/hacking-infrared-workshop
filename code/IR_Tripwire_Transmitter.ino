#include <IRremoteESP8266.h>
#include <IRsend.h>

#define IR_LED D2 // GPIO4 (D2)

#define TRIPWIRE_CODE 0xDC0DEC0DE

IRsend irsend(IR_LED);

void setup() {
  Serial.begin(115200);
  delay(200);
  irsend.begin();
  Serial.println("IR Tripwire Transmitter Ready");
}

void loop() {
  irsend.sendNEC(TRIPWIRE_CODE);
  Serial.println("Transmitting...");
  delay(100);
}
