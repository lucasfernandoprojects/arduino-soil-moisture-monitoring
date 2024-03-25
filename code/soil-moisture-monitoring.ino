#include <LiquidCrystal_I2C.h>  // Include LiquidCrystal_I2C library

int led_green = 2;
int led_yellow = 3;
int led_red = 4;
int sensor_input = A0;
LiquidCrystal_I2C lcd(0x27, 16, 2); // Set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  pinMode(led_green, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_red, OUTPUT);
  pinMode(sensor_input, INPUT);
  
  digitalWrite(led_green, LOW);
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_red, LOW);
  
  lcd.begin();
  lcd.backlight();
}

void loop()
{
  // Lowest value - 0 (extremely  dry)
  // Highest value - 868 (extremely weat)
  int reading_value = analogRead(sensor_input);
  int converted_value = map(reading_value, 0, 868, 0, 100);
  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Reading:");
  lcd.setCursor(9, 0);
  lcd.print(converted_value);
  if (converted_value < 10) {
  	lcd.setCursor(10, 0);
  } else if (converted_value >= 10 && converted_value <= 99) {
  	lcd.setCursor(11, 0);
  } else {
    lcd.setCursor(12, 0);
  }
  lcd.print("%");
  lcd.setCursor(0, 1);

  if (reading_value >= 0 && reading_value < 289) {
    lcd.print("Extremely dry");
    digitalWrite(led_green, LOW);
    digitalWrite(led_yellow, LOW);
    digitalWrite(led_red, HIGH);
  } else if (reading_value >= 289 && reading_value < 578) {
    lcd.print("Wet");
  	digitalWrite(led_green, LOW);
    digitalWrite(led_yellow, HIGH);
    digitalWrite(led_red, LOW);
  } else {
    lcd.print("Extremely wet");
    digitalWrite(led_green, HIGH);
    digitalWrite(led_yellow, LOW);
    digitalWrite(led_red, LOW);
  }
  delay(1000);
}