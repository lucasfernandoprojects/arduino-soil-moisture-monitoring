// ================================================================================
// Read values from a soil moisture sensor and blink LEDs accordingly
// This code works with resistance-based soil moisture sensors
// Created on 17 July 2024
// Created by Lucas Fernando (https://www.youtube.com/@lucasfernandochannel)
// You are free to use this code the way you want
// ================================================================================

#define GREEN_LED 2 // Green LED connected to digital pin 2
#define YELLOW_LED 3 // Yellow LED connected to digital pin 3
#define RED_LED 4 // Red LED connected to digital pin 4
#define SENSOR_PIN A5 // Soil moisture sensor connected to analog pin A5
// Defining soil moisture readings thresholds
// From 0 to 500 - extremely wet
// From 501 to 800 - wet
// From 801 - dry
#define DRY_THRESHOLD 800
#define WET_THRESHOLD 500

void setup() {
  pinMode(GREEN_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);

  digitalWrite(GREEN_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(RED_LED, LOW);

  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(SENSOR_PIN);
  // Print the sensor reading values
  Serial.print("Soil moisture sensor value: ");
  Serial.println(sensorValue);

  if(sensorValue > 0 && sensorValue <= WET_THRESHOLD) {
    // Extremely wet (green LED)
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(RED_LED, LOW);
  } else if (sensorValue > WET_THRESHOLD && sensorValue <= DRY_THRESHOLD) {
    // Wet (yellow LED)
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(YELLOW_LED, HIGH);
    digitalWrite(RED_LED, LOW);
  } else {
    // Extremely dry (red LED)
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(RED_LED, HIGH);
  }
}
