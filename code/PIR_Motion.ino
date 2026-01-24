#define PIR_PIN D5 // GPIO14 (D5)
#define LED D2 // GPIO4 (D2)

void setup() {
  Serial.begin(115200);
  delay(200);
  pinMode(PIR_PIN, INPUT);
  pinMode(LED, OUTPUT);
  Serial.println("PIR Motion Sensor Ready");
  Serial.println("Warming up sensor (30-60 seconds)...");
}

void loop() {
  int motion = digitalRead(PIR_PIN);
  digitalWrite(LED, motion);
  delay(100);
}