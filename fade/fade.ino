/* Pulse Width Modulation (PWM) of LED */

const int led = 5;
int brightness = 0;
int fade = 1;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  analogWrite(led, brightness);

  brightness += fade;

  if (brightness == 0 || brightness == 255) {
    fade = -fade;
  }

  delay(10);
}