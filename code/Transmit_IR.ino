#include <IRremoteESP8266.h>
#include <IRsend.h>

#define IR_LED D2 // GPIO4 (D2)

IRsend irsend(D2);

void setup() {
  Serial.begin(115200);
  delay(200);  
  irsend.begin();
}

void loop() {
  Serial.println("NEC");
  irsend.sendNEC(0x807F00FF); // Power
  delay(2000);
}