#define BUTTON_PIN D5 // GPIO14 (D5) 
#define LED D2 // GPIO4 (D2)

void setup() {
  Serial.begin(115200);
  delay(200);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
}

void loop(){
  // Read the value of the input. It can either be 1 or 0
  int buttonValue = digitalRead(BUTTON_PIN);
  if (buttonValue == LOW){
    // If button pushed, turn LED on
    digitalWrite(LED, HIGH);
    Serial.println("LED on");
   } else {
    // Otherwise, turn the LED off
    digitalWrite(LED, LOW);
    Serial.println("LED off");
  }
}