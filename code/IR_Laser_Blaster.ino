// FAO Swartz Duel Blaster Lazer Tag Demo
// https://www.target.com/p/fao-schwarz-toy-laser-tag-shooting-game-circular-vest-new-box-size/-/A-94583019

#include <IRremoteESP8266.h>
#include <IRsend.h>

#define BUTTON_1_PIN D5 // GPIO14 (D5) 
#define BUTTON_2_PIN D6 // GPIO12 (D6) 
#define BUTTON_3_PIN D7 // GPIO13 (D7)
#define BUTTON_4_PIN D3 // GPIO18 (D3)  
#define IR_LED D2 // GPIO4 (D2)

IRsend irsend(D2);

uint16_t playerOne[99] = {6286, 524,  1556, 540,  524, 1566,  1530, 562,  524, 1568,  522, 1568,  524, 1568,  522, 1566,  1530, 556,  1582, 4732,  6202, 558,  1532, 562,  526, 1562,  1530, 562,  552, 1538,  528, 1562,  554, 1536,  554, 1534,  1532, 552,  1584, 4722,  6228, 538,  1508, 586,  560, 1530,  1540, 554,  558, 1532,  560, 1532,  558, 1552,  538, 1530,  1560, 526,  1582, 4718,  6256, 516,  1554, 538,  522, 1568,  1554, 538,  520, 1570,  520, 1572,  518, 1572,  518, 1594,  1530, 532,  1554, 4782,  6204, 556,  1528, 564,  494, 1596,  1526, 566,  464, 1626,  464, 1626,  464, 1628,  462, 1628,  1522, 562,  1522};  // UNKNOWN 8A7B03B3
uint16_t playerTwo[99] = {6180, 468,  1480, 574,  552, 1498,  1534, 518,  552, 1500,  552, 1498,  1534, 516,  552, 1500,  1534, 512,  1556, 4642,  6154, 476,  1482, 576,  550, 1500,  1508, 544,  552, 1500,  552, 1498,  1534, 520,  550, 1500,  1508, 538,  1554, 4636,  6120, 518,  1480, 574,  550, 1502,  1532, 520,  550, 1500,  528, 1524,  1536, 516,  550, 1502,  1536, 510,  1556, 4632,  6116, 528,  1528, 528,  552, 1500,  1530, 522,  554, 1498,  554, 1496,  1508, 544,  552, 1498,  1508, 538,  1556, 4644,  6120, 512,  1476, 576,  548, 1502,  1502, 550,  544, 1506,  518, 1532,  1504, 548,  514, 1538,  1506, 540,  1550};  // UNKNOWN ADF2D293

const uint16_t kFrequency = 38; 

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
    blast(playerOne, "Player 1");
  }
  int button2Value = digitalRead(BUTTON_2_PIN);
  if (button2Value == LOW){
    blast(playerTwo, "Player 2");
  }
  int button3Value = digitalRead(BUTTON_3_PIN);
  if (button3Value == LOW){
    // Laser Tag grenade
    for(int i = 0; i <=6; i++) {
      blast(playerOne, "Player 1");
      delay(2200);
      blast(playerTwo, "Player 2");
      delay(2200);
    }
  }
  int button4Value = digitalRead(BUTTON_4_PIN);
  if (button4Value == LOW){
    // todo
  }
   delay(500);
}

void blast(uint16_t player[], String name) {
  const uint16_t size = sizeof(playerOne) / sizeof(playerOne[0]);
  irsend.sendRaw(player, size, kFrequency);
  Serial.println(name + " blast...");
}