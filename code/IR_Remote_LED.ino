#include <IRremoteESP8266.h>
#include <IRrecv.h>
#include <IRutils.h>

#define LED 14 // GPIO14 D5
#define RECV_PIN D1 // GPIO5 D1

unsigned long IR_CODE_1 = 0xFFA25D;
bool status;

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  Serial.begin(115200);
  irrecv.enableIRIn();
  pinMode(LED, OUTPUT);
  delay(200);
  Serial.println("Waiting for IR input...");
}

void loop() {
  if (irrecv.decode(&results)) {
    if(results.value == IR_CODE_1) {
      status = light("LED", LED, status);
    }
    delay(300);
    irrecv.resume();
  }
}

bool light(String name, uint16_t led, bool status) {
  if(status) {
    Serial.println(name + " off");
    digitalWrite(led, LOW);
  } else {
    Serial.println(name + " On");
    digitalWrite(led, HIGH);
  }
  return !status;
}