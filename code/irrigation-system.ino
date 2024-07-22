// =====================================================================================
// Read values from a soil moisture sensor and turn on or off a water pump accordingly
// This code works with capacitance-based soil moisture sensors
// Created on 17 July 2024
// Created by Lucas Fernando (https://www.youtube.com/@lucasfernandochannel)
// You are free to use this code the way you want
//========================================================================================

// Defining soil moisture reading threshold
// From 0 to 400 - wet soil
// Above 400 - dry soil
#define THRESHOLD 400
#define RELE_PIN 2 //Relè is connected to digital pin 2
#define SENSOR_PIN A5 //Soil moisture sensor connected to analog pin A5


void setup() {
  pinMode(RELE_PIN, OUTPUT);
  digitalWrite(RELE_PIN, LOW);
  Serial.begin(9600);
}

void loop() {
  long sensorValue = 0;
  for (int i = 0; i < 100; i++) {
    sensorValue += analogRead(SENSOR_PIN);
  }
  sensorValue = sensorValue / 100;

  // Print the sensor reading values
  Serial.print("Soil moisture sensor value: ");
  Serial.println(sensorValue);

  if (sensorValue > THRESHOLD) {
    // Turn on the water pump
    digitalWrite(RELE_PIN, HIGH);
  } else {
    // Turn off the water pump
    digitalWrite(RELE_PIN, LOW);
  }

  // Wait one second before measure the soil moisture again
  delay(1000);
}
