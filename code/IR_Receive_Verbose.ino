#include <IRremoteESP8266.h>
#include <IRrecv.h>
#include <IRutils.h>

#define RECV_PIN D1 // GPIO5 D1

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  Serial.begin(115200);
  irrecv.enableIRIn();
  delay(200);
  Serial.println("Waiting for IR input...");
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println("****** Received IR input ******");
    print("Hex", resultToHexidecimal(&results));
    print("Human Readable", resultToHumanReadableBasic(&results));
    print("Source Code", resultToSourceCode(&results));
    print("Timing", resultToTimingInfo(&results));
    irrecv.resume();
  }
}

void print(String title, String body) {
  Serial.println("**** " + title + " ****");
  Serial.println(body);
}
