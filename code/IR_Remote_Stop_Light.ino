#include <IRremoteESP8266.h>
#include <IRrecv.h>
#include <IRutils.h>

#define RED_LED 14 // GPIO14 D5
#define YELLOW_LED 12 // GPIO12 D6
#define GREEN_LED 13 // GPIO13 D7

#define RECV_PIN D1 // GPIO5 D1

unsigned long IR_CODE_1 = 0xFFA25D;
unsigned long IR_CODE_2 = 0xFF629D;
unsigned long IR_CODE_3 = 0xFFE21D;

bool redStatus;
bool yellowStatus;
bool greenStatus;

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  Serial.begin(115200);
  irrecv.enableIRIn();
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  delay(200);
  Serial.println("Waiting for IR input...");
}

void loop() {

  if (irrecv.decode(&results)) {
    if(results.value == IR_CODE_1) {
      redStatus = light("Red", RED_LED, redStatus);
    }
    if(results.value == IR_CODE_2) {
      yellowStatus = light("Yellow", YELLOW_LED, yellowStatus);
    }
    if(results.value == IR_CODE_3) {
      greenStatus = light("Green", GREEN_LED, greenStatus);
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