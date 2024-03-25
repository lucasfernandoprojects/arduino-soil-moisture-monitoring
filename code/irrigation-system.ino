int relay_control = 2;
int sensor_input = A0;

void setup()
{
  pinMode(relay_control, OUTPUT);
  pinMode(sensor_input, INPUT);
  digitalWrite(relay_control, LOW);
}

void loop()
{
  // Extremely dry - 0
  // Extremely wet - 868
  int reading_value = analogRead(sensor_input);
  if (converted_value <= 289) {
  	digitalWrite(relay_control, HIGH);
  } else {
  	digitalWrite(relay_control, LOW);
  }
  delay(1000);
}