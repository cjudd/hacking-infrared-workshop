#define ONBOARD_LED 16

void setup() {
  Serial.begin(115200);
  pinMode(ONBOARD_LED, OUTPUT);
}

void loop() {
  digitalWrite(ONBOARD_LED, HIGH);
  Serial.println("LED on");
  delay(1000);
  digitalWrite(ONBOARD_LED, LOW);
  Serial.println("LED off");
  delay(1000);
}
