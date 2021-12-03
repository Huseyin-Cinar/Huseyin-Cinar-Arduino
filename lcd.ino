#include <LiquidCrystal.h>
const int trigger_pin = 9;
const int echo_pin = 10;
LiquidCrystal lcd(8, 7, 6, 5, 4, 3);
float sure;
float mesafe;
void setup() {
  pinMode(trigger_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  lcd.begin(16, 2);

}

void loop() {
  
  digitalWrite(trigger_pin, 1);
  delayMicroseconds(1000);
  digitalWrite(trigger_pin, 0);
  sure = pulseIn(echo_pin, 1);
  mesafe = (sure/2) / 29.1;
  
  
  
  
  lcd.setCursor(0, 0);
  lcd.print("Mono = 1    ");
  delay(2000);
  lcd.setCursor(0, 0);
  lcd.print("Di = 2    ");
  delay(2000);
  lcd.setCursor(0, 0);
  lcd.print("Tri = 3    ");
  delay(2000);
  lcd.setCursor(0, 0);
  lcd.print("Tetra = 4    ");
  delay(2000);
  lcd.setCursor(0, 0);
  lcd.print("Penta = 5  ");
  delay(2000);
  lcd.setCursor(0, 0);
  lcd.print("Hegza = 6  ");
  delay(2000);
  lcd.setCursor(0, 0);
  lcd.print("Hepta = 7  ");
  delay(2000);
  lcd.setCursor(0, 0);
  lcd.print("Okta = 8    ");
  delay(2000);
  lcd.setCursor(0, 0);
  lcd.print("Poli = Fazla  ");
  delay(2000);

  /*lcd.setCursor(0, 0);
  lcd.print("Deneme");
  lcd.setCursor(2, 1);
  lcd.print("Deneme");*/
}
