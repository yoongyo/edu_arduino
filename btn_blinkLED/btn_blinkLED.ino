int btn = 13;
int led = 3;

int state = 1;

long previousMillis = 0;
long currentMillis = 0;

void setup() {
  pinMode(btn, INPUT_PULLUP);
  pinMode(left3, OUTPUT);
}

void loop() {
  // 버튼을 누르면
  if(digitalRead(btn) == 0) {
    blinkLED();
  }
}


void blinkLED() {
  currentMillis = millis();
  if (state == 1) {
    digitalWrite(led, HIGH);
  }
  if (currentMillis - previousMillis >= 1500 && state == 1) {
    digitalWrite(led, LOW);
    previousMillis = currentMillis;
    state = 2;
  }
  if (state == 2) {
    digitalWrite(led, HIGH);
  }
  if (currentMillis - previousMillis >= 1500 && state == 2) {
    digitalWrite(led, LOW);
    previousMillis = currentMillis;
    state = 3;
  }
  if (state == 3) {
    digitalWrite(led, HIGH);
  }
  if (currentMillis - previousMillis >= 1500 && state == 3) {
    digitalWrite(led, LOW);
    previousMillis = currentMillis;
    state = 4;
  }
  if (state == 4) {
    digitalWrite(led, HIGH);
  }
  if (currentMillis - previousMillis >= 1500 && state == 4) {
    digitalWrite(led, LOW);
    previousMillis = currentMillis;
    state = 5;
  }
  if (state == 5) {
    digitalWrite(led, HIGH);
  }
  if (currentMillis - previousMillis >= 1500 && state == 5) {
    digitalWrite(led, LOW);
    previousMillis = currentMillis;
    state = 6;
  }
  if (state == 6) {
    digitalWrite(led, HIGH);
  }
  if (currentMillis - previousMillis >= 1500 && state == 6) {
    digitalWrite(led, LOW);
    previousMillis = currentMillis;
    state = 7;
  }
  if (state == 7) {
    digitalWrite(led, HIGH);
  }
  if (currentMillis - previousMillis >= 1500 && state == 7) {
    digitalWrite(led, LOW);
    previousMillis = currentMillis;
    state = 8;
  }
  if (state == 8) {
    digitalWrite(led, HIGH);
  }
  if (currentMillis - previousMillis >= 1500 && state == 8) {
    digitalWrite(led, LOW);
    previousMillis = currentMillis;
    state = 1;
  }
}
