void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  int delay_ = 3000;
  digitalWrite(LED_BUILTIN, HIGH);
  delay(delay_);
  digitalWrite(LED_BUILTIN, LOW);
  delay(delay_);
}
