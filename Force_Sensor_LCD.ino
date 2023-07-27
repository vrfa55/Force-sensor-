#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {

  lcd.init();
  lcd.backlight();
  
  pinMode(A0,INPUT);
}

void loop() 
{
 int analogReading = analogRead(A0);
  lcd.print("Reading : ");
  
  lcd.print(analogReading*3);
  delay(1000);
  lcd.clear();
}
