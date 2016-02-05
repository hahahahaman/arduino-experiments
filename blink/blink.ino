// First project

/* Blink a LED. */

void setup() {
  // built in led is on pin 13
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}