#include <PulseSensorPlayground.h>

#define TOUCH_SENSOR_0_INPUT_PIN 2
#define TOUCH_SENSOR_1_INPUT_PIN 3
#define TOUCH_SENSOR_2_INPUT_PIN 4
#define TOUCH_SENSOR_3_INPUT_PIN 5
#define TOUCH_SENSOR_4_INPUT_PIN 6
#define TOUCH_SENSOR_5_INPUT_PIN 7
#define TOUCH_SENSOR_6_INPUT_PIN 8
#define TOUCH_SENSOR_7_INPUT_PIN 9
#define TOUCH_SENSOR_8_INPUT_PIN 10
#define TOUCH_SENSOR_9_INPUT_PIN 11
#define TOUCH_SENSOR_10_INPUT_PIN 12
#define TOUCH_SENSOR_11_INPUT_PIN A3

#define TEMPERATURE_SENSOR_0_INPUT_PIN A0

#define HEART_RATE_0_INPUT_PIN A2

PulseSensorPlayground heart_rate_sensor_0;

void setup() {
  int heart_rate_sensor_threshold = 550;

  pinMode(LED_BUILTIN, OUTPUT);

  pinMode(TOUCH_SENSOR_0_INPUT_PIN, INPUT);
  pinMode(TOUCH_SENSOR_1_INPUT_PIN, INPUT);
  pinMode(TOUCH_SENSOR_2_INPUT_PIN, INPUT);
  pinMode(TOUCH_SENSOR_3_INPUT_PIN, INPUT);
  pinMode(TOUCH_SENSOR_4_INPUT_PIN, INPUT);
  pinMode(TOUCH_SENSOR_5_INPUT_PIN, INPUT);
  pinMode(TOUCH_SENSOR_6_INPUT_PIN, INPUT);
  pinMode(TOUCH_SENSOR_7_INPUT_PIN, INPUT);
  pinMode(TOUCH_SENSOR_8_INPUT_PIN, INPUT);
  pinMode(TOUCH_SENSOR_9_INPUT_PIN, INPUT);
  pinMode(TOUCH_SENSOR_10_INPUT_PIN, INPUT);

  pinMode(TEMPERATURE_SENSOR_0_INPUT_PIN, INPUT);

  pinMode(HEART_RATE_0_INPUT_PIN, INPUT);

  heart_rate_sensor_0.analogInput(HEART_RATE_0_INPUT_PIN);
  heart_rate_sensor_0.setThreshold(heart_rate_sensor_threshold);

  if (heart_rate_sensor_0.begin()) {
    Serial.println("Created a PulseSensorPlayground object");
  }

  Serial.begin(9600);
}

void loop() {
  int touch_sensor_0_output = digitalRead(TOUCH_SENSOR_0_INPUT_PIN);
  int touch_sensor_1_output = digitalRead(TOUCH_SENSOR_1_INPUT_PIN);
  int touch_sensor_2_output = digitalRead(TOUCH_SENSOR_2_INPUT_PIN);
  int touch_sensor_3_output = digitalRead(TOUCH_SENSOR_3_INPUT_PIN);
  int touch_sensor_4_output = digitalRead(TOUCH_SENSOR_4_INPUT_PIN);
  int touch_sensor_5_output = digitalRead(TOUCH_SENSOR_5_INPUT_PIN);
  int touch_sensor_6_output = digitalRead(TOUCH_SENSOR_6_INPUT_PIN);
  int touch_sensor_7_output = digitalRead(TOUCH_SENSOR_7_INPUT_PIN);
  int touch_sensor_8_output = digitalRead(TOUCH_SENSOR_8_INPUT_PIN);
  int touch_sensor_9_output = digitalRead(TOUCH_SENSOR_9_INPUT_PIN);
  int touch_sensor_10_output = digitalRead(TOUCH_SENSOR_10_INPUT_PIN);
  int touch_sensor_11_output = digitalRead(TOUCH_SENSOR_11_INPUT_PIN);

  int temperature_sensor_0_output = analogRead(TEMPERATURE_SENSOR_0_INPUT_PIN) * (5.0 / 1024.0) * 100;
  Serial.print("temperature 0: ");
  Serial.println(temperature_sensor_0_output);

  if (heart_rate_sensor_0.sawStartOfBeat()) {
    int heart_rate_sensor_0_output = heart_rate_sensor_0.getBeatsPerMinute();
    Serial.print("heart_rate 0: ");
    Serial.println(heart_rate_sensor_0_output);
  }

  if (touch_sensor_0_output == 1) {
    Serial.println("touch 0");
  }

  if (touch_sensor_1_output == 1) {
    Serial.println("touch 1");
  }

  if (touch_sensor_2_output == 1) {
    Serial.println("touch 2");
  }

  if (touch_sensor_3_output == 1) {
    Serial.println("touch 3");
  }

  if (touch_sensor_4_output == 1) {
    Serial.println("touch 4");
  }

  if (touch_sensor_5_output == 1) {
    Serial.println("touch 5");
  }

  if (touch_sensor_6_output == 1) {
    Serial.println("touch 6");
  }

  if (touch_sensor_7_output == 1) {
    Serial.println("touch 7");
  }

  if (touch_sensor_8_output == 1) {
    Serial.println("touch 8");
  }

  if (touch_sensor_9_output == 1) {
    Serial.println("touch 9");
  }

  if (touch_sensor_10_output == 1) {
    Serial.println("touch 10");
  }
  
  if (touch_sensor_11_output == 1) {
    Serial.println("touch 11");
  }

  delay(500);
}
