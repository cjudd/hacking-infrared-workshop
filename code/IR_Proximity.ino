#define LED D2 // GPIO4 (D2)
#define SENSOR_PIN D3 // GPIO0 (D3)

void setup() {
  Serial.begin(115200);
  delay(200);
  pinMode(LED, OUTPUT);
  pinMode(SENSOR_PIN, INPUT);
}

void loop() {
  int state = digitalRead(SENSOR_PIN);

  if (state == LOW) {
    digitalWrite(LED, HIGH);
    Serial.println("The obstacle is present");
  } else {
    digitalWrite(LED, LOW);
    Serial.println("The obstacle is NOT present");
  }

  delay(100);
}
