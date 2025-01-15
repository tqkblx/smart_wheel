#define TOUCH_SENSOR_INPUT_PIN 7

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

  pinMode(TOUCH_SENSOR_INPUT_PIN, INPUT);

  Serial.begin(9600);
}

void loop() {
  int touch_sensor_output = digitalRead(TOUCH_SENSOR_INPUT_PIN);
  Serial.print("Touch sensor output: ");
  Serial.println(touch_sensor_output);
  delay(1000);
}
