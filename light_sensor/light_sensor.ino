int light = A0;
int relay = 13;


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(relay, LOW);
  lightValue = analogRead(light);
  if(lightValue > 300) {
    digitalWrite(relay, HIGH);
    delay(100);
  }
}
