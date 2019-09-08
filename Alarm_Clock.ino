//Code Written By RAJDEEP BARUAH

#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
unsigned long int sec;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  sec=millis()/1000;
  Serial.println(sec);
  lcd.setCursor(0,0);
  lcd.print("Making a clock");
  lcd.setCursor(0,1);
  lcd.print(sec);
  delay(1000);
  
}
