#include <DFPlayer_Mini_Mp3.h>
SoftwareSerial mySerial(10, 11); 

int btn = 13;

void setup() {
  pinMode(btn, INPUT_PULLUP);

  mySerial.begin(9600);
  mp3_set_serial(mySerial);    
  delay(1);                    
  mp3_set_volume(30);
}

void loop() {
  if (digitalRead(btn) == 0) {
    mp3_play(1);
  }
}
