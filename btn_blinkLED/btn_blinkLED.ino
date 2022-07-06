int btn = 13;

int left3 = 3;

int beforeState = 1;

long previousMillis = 0;
long currentMillis = 0;

void setup() {
  pinMode(btn, INPUT_PULLUP);
  pinMode(left3, OUTPUT);
}

void loop() {
  if(digitalRead(btn) == 0) {
    blinkLED();
  }
}


void blinkLED() {
  currentMillis = millis();
  if (beforeState == 1) {
    digitalWrite(right1, HIGH);
    digitalWrite(left1, HIGH);
  }
  if (currentMillis - previousMillis >= 1500 && beforeState == 1) {
    digitalWrite(right1, LOW);
    digitalWrite(left1, LOW);
    previousMillis = currentMillis;
    beforeState = 2;
  }
  if (beforeState == 2) {
    digitalWrite(left2, HIGH);
    digitalWrite(right2, HIGH);
  }
  if (currentMillis - previousMillis >= 1500 && beforeState == 2) {
    digitalWrite(left2, LOW);
    digitalWrite(right2, LOW);
    previousMillis = currentMillis;
    beforeState = 3;
  }
  if (beforeState == 3) {
    digitalWrite(left3, HIGH);
    digitalWrite(right3, HIGH);
  }
  if (currentMillis - previousMillis >= 1500 && beforeState == 3) {
    digitalWrite(left3, LOW);
    digitalWrite(right3, LOW);
    previousMillis = currentMillis;
    beforeState = 4;
  }
  if (beforeState == 4) {
    digitalWrite(left4, HIGH);
    digitalWrite(right4, HIGH);
  }
  if (currentMillis - previousMillis >= 1500 && beforeState == 4) {
    digitalWrite(left4, LOW);
    digitalWrite(right4, LOW);
    previousMillis = currentMillis;
    beforeState = 5;
  }
  if (beforeState == 5) {
    digitalWrite(left1, HIGH);
    digitalWrite(right1, HIGH);
  }
  if (currentMillis - previousMillis >= 1500 && beforeState == 5) {
    digitalWrite(left1, LOW);
    digitalWrite(right1, LOW);
    previousMillis = currentMillis;
    beforeState = 6;
  }
  if (beforeState == 6) {
    digitalWrite(left2, HIGH);
    digitalWrite(right2, HIGH);
  }
  if (currentMillis - previousMillis >= 1500 && beforeState == 6) {
    digitalWrite(left2, LOW);
    digitalWrite(right2, LOW);
    previousMillis = currentMillis;
    beforeState = 7;
  }
  if (beforeState == 7) {
    digitalWrite(left3, HIGH);
    digitalWrite(right3, HIGH);
  }
  if (currentMillis - previousMillis >= 1500 && beforeState == 7) {
    digitalWrite(left3, LOW);
    digitalWrite(right3, LOW);
    previousMillis = currentMillis;
    beforeState = 8;
  }
  if (beforeState == 8) {
    digitalWrite(left4, HIGH);
    digitalWrite(right4, HIGH);
  }
  if (currentMillis - previousMillis >= 1500 && beforeState == 8) {
    digitalWrite(left4, LOW);
    digitalWrite(right4, LOW);
    previousMillis = currentMillis;
    beforeState = 1;
  }
}
