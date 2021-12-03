#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 7, 6, 5, 4, 3);


void setup() {

  lcd.begin(16,2);

}

void loop() {

  int i;
  lcd.setCursor(3,0);
  for(i=0; i<17; i+=2)
{
  lcd.setCursor(i,0);
  lcd.print("Mono = 1    ");
  delay(1000);
  lcd.setCursor(i,0);
  lcd.print("  ");

}
for(i=0; i<17; i+=2)
{
  lcd.setCursor(i,1);
  lcd.print("Di = 2    ");
  delay(1000);
  lcd.setCursor(i,1);
  lcd.print("  ");

}
for(i=0; i<17; i+=2)
{
  lcd.setCursor(i,0);
  lcd.print("Tri = 3    ");
  delay(1000);
  lcd.setCursor(i,0);
  lcd.print("  ");

}
for(i=0; i<17; i+=2)
{
  lcd.setCursor(i,1);
  lcd.print("Tetra = 4    ");
  delay(1000);
  lcd.setCursor(i,1);
  lcd.print("  ");

}
for(i=0; i<17; i+=2)
{
  lcd.setCursor(i,0);
  lcd.print("Penta = 5  ");
  delay(1000);
  lcd.setCursor(i,0);
  lcd.print("  ");

}
for(i=0; i<17; i+=2)
{
  lcd.setCursor(i,1);
  lcd.print("Hegza = 6  ");
  delay(1000);
  lcd.setCursor(i,1);
  lcd.print("  ");

}
for(i=0; i<17; i+=2)
{
  lcd.setCursor(i,0);
  lcd.print("Hepta = 7  ");
  delay(1000);
  lcd.setCursor(i,0);
  lcd.print("  ");

}
for(i=0; i<17; i+=2)
{
  lcd.setCursor(i,1);
  lcd.print("Okta = 8    ");
  delay(1000);
  lcd.setCursor(i,1);
  lcd.print("  ");

}
for(i=0; i<17; i+=2)
{
  lcd.setCursor(i,0);
  lcd.print("Nona = 9    ");
  delay(1000);
  lcd.setCursor(i,0);
  lcd.print("  ");

}
for(i=0; i<17; i+=2)
{
  lcd.setCursor(i,1);
  lcd.print("Deka = 10   ");
  delay(1000);
  lcd.setCursor(i,1);
  lcd.print("  ");

}
for(i=0; i<17; i+=2)
{
  lcd.setCursor(i,0);
  lcd.print("Huseyin  ");
  delay(1000);
  lcd.setCursor(i,0);
  lcd.print("  ");

}
for(i=0; i<17; i+=2)
{
  lcd.setCursor(i,1);
  lcd.print("Cinar  ");
  delay(1000);
  lcd.setCursor(i,1);
  lcd.print("  ");

}
}
