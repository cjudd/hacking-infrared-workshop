#include <IRremoteESP8266.h>
#include <IRrecv.h>

#define RECV_PIN D1 // GPIO5 (D1)
#define LED D2 // GPIO4 (D2)

#define TRIPWIRE_CODE 0xC0DEC0DE

IRrecv irrecv(RECV_PIN);
decode_results results;

unsigned long lastDetected = 0;
const unsigned long TIMEOUT = 500;

void setup() {
  Serial.begin(115200);
  delay(200);
  irrecv.enableIRIn();
  pinMode(LED, OUTPUT);
  Serial.println("IR Tripwire Receiver Ready");
}

void loop() {
  if (irrecv.decode(&results)) {
    if (results.value == TRIPWIRE_CODE) {
      lastDetected = millis();
      Serial.println("Beam OK");
    }
    irrecv.resume();
  }

  if (millis() - lastDetected > TIMEOUT) {
    digitalWrite(LED, HIGH);
    Serial.println("TRIPWIRE TRIGGERED!");
  } else {
    digitalWrite(LED, LOW);
  }

  delay(50);
}
