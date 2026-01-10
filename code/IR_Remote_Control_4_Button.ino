#include <IRremoteESP8266.h>
#include <IRsend.h>

#define BUTTON_1_PIN D5 // GPIO14 (D5) 
#define BUTTON_2_PIN D6 // GPIO12 (D6) 
#define BUTTON_3_PIN D7 // GPIO (D7)
#define BUTTON_4_PIN D8 // GPIO (D8)  
#define IR_LED D2 // GPIO4 (D2)

IRsend irsend(D2);

void setup() {
  Serial.begin(115200);
  delay(200);  
  irsend.begin();
  pinMode(BUTTON_1_PIN, INPUT_PULLUP);
  pinMode(BUTTON_2_PIN, INPUT_PULLUP);
  pinMode(BUTTON_3_PIN, INPUT_PULLUP);
  pinMode(BUTTON_4_PIN, INPUT_PULLUP);
}

void loop() {
  int button1Value = digitalRead(BUTTON_1_PIN);
  if (button1Value == LOW){
    irsend.sendNEC(0xE0E040BF); // Power
    Serial.println("Button 1");
   }
  int button2Value = digitalRead(BUTTON_2_PIN);
  if (button2Value == LOW){
    irsend.sendNEC(0xE0E0E01F); // Vol+
    Serial.println("Button 2");
   }
  int button3Value = digitalRead(BUTTON_3_PIN);
  if (button3Value == LOW){
    irsend.sendNEC(0xE0E0D02F); // Vol-
    Serial.println("Button 3");
   }
  int button4Value = digitalRead(BUTTON_4_PIN);
  if (button4Value == LOW){
    irsend.sendNEC(0xE0E0F00F); // Mute
    Serial.println("Button 4");
   }

}
