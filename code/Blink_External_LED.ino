#define LED D2 // GPIO4 (D2)

void setup() {
  Serial.begin(115200);
  delay(200);
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  Serial.println("LED on");
  delay(1000);
  digitalWrite(LED, LOW);
  Serial.println("LED off");
  delay(1000);
}
