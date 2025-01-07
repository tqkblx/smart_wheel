#define TOUCH_SENSOR_INPUT_PIN 10

#define TOUCH_SENSOR_OUTPUT_PIN 4

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

  pinMode(TOUCH_SENSOR_INPUT_PIN, INPUT);

  pinMode(TOUCH_SENSOR_OUTPUT_PIN, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int touch_sensor_output = digitalRead(TOUCH_SENSOR_INPUT_PIN);
  Serial.print("Touch sensor output: ");
  Serial.println(touch_sensor_output);
  digitalWrite(TOUCH_SENSOR_OUTPUT_PIN, touch_sensor_output);
  delay(1000);
}
