//Created By Hüseyin Çınar
#include <LiquidCrystal.h>
const int trigger_pin = 2;
const int echo_pin = 3;
LiquidCrystal lcd(12, 13, 14, 15, 16, 17);
#define buzzer 4
#define beyaz 8
#define sari 9
#define yesil 10
#define kirmizi 11
float sure;
float mesafe;

void setup() {
 
  pinMode(buzzer,OUTPUT);
  pinMode(beyaz,OUTPUT);
  pinMode(sari,OUTPUT);
  pinMode(yesil,OUTPUT);
  pinMode(kirmizi,OUTPUT);
  pinMode(trigger_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  lcd.begin(16, 2);


   
  
}

void loop() {
  digitalWrite(trigger_pin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigger_pin, LOW);
  sure = pulseIn(echo_pin, HIGH);
  mesafe = (sure/2) / 29.1;

  lcd.setCursor(0, 0);
  lcd.print("Cismin Mesafesi:");
  lcd.setCursor(2, 1);
  lcd.print(mesafe);
  delay(30 );

  
    if(mesafe>40 && mesafe<50){
digitalWrite(beyaz,HIGH);
digitalWrite(buzzer,HIGH);
delay(15);
digitalWrite(buzzer,LOW);
delay(15);
    
  }
else{
  digitalWrite(buzzer,LOW);
  digitalWrite(beyaz,LOW);
  
}
if(mesafe>30 && mesafe<40){
digitalWrite(beyaz,HIGH);
digitalWrite(buzzer,HIGH);
delay(320);
digitalWrite(buzzer,LOW);
delay(320);

    
  }
else{
  digitalWrite(buzzer,LOW);
  digitalWrite(beyaz,LOW);
  ;
}
if(mesafe>20 && mesafe<30){
digitalWrite(sari,HIGH);
digitalWrite(beyaz,HIGH);
digitalWrite(buzzer,HIGH);
delay(220);
digitalWrite(buzzer,LOW);
delay(220);

    
  }
else{
  digitalWrite(buzzer,LOW);
  digitalWrite(sari,LOW);
digitalWrite(beyaz,LOW);
  
}
if(mesafe>10 && mesafe<20){
digitalWrite(sari,HIGH);
digitalWrite(beyaz,HIGH);
digitalWrite(buzzer,HIGH);
delay(150);
digitalWrite(buzzer,LOW);
delay(150);

    
  }
else{
  digitalWrite(buzzer,LOW);
  digitalWrite(sari,LOW);
digitalWrite(beyaz,LOW);
 
}
if(mesafe>5 && mesafe<10){
digitalWrite(sari,HIGH);
digitalWrite(yesil,HIGH);
digitalWrite(beyaz,HIGH);
digitalWrite(buzzer,HIGH);
delay(75);
digitalWrite(buzzer,LOW);
delay(75);

    
  }
else{
  digitalWrite(buzzer,LOW);
  digitalWrite(sari,LOW);
digitalWrite(yesil,LOW);
digitalWrite(beyaz,LOW);
  
}
if(mesafe>0 && mesafe<5){
digitalWrite(kirmizi,HIGH);
digitalWrite(sari,HIGH);
digitalWrite(yesil,HIGH);
digitalWrite(beyaz,HIGH);
digitalWrite(buzzer,HIGH);
delay(20);
digitalWrite(buzzer,LOW);
delay(20);

    
  }
else{
  digitalWrite(buzzer,LOW);
  digitalWrite(kirmizi,LOW);
digitalWrite(sari,LOW);
digitalWrite(yesil,LOW);
digitalWrite(beyaz,LOW);
  
}

    
    if(mesafe>40 && mesafe<50){
digitalWrite(beyaz,HIGH);
digitalWrite(buzzer,HIGH);
delay(15);
digitalWrite(buzzer,LOW);
delay(15);
    
  }
else{
  digitalWrite(buzzer,LOW);
  digitalWrite(beyaz,LOW);
  
}
if(mesafe>30 && mesafe<40){
digitalWrite(beyaz,HIGH);
digitalWrite(buzzer,HIGH);
delay(320);
digitalWrite(buzzer,LOW);
delay(320);

    
  }
else{
  digitalWrite(buzzer,LOW);
  digitalWrite(beyaz,LOW);
  ;
}
if(mesafe>20 && mesafe<30){
digitalWrite(sari,HIGH);
digitalWrite(beyaz,HIGH);
digitalWrite(buzzer,HIGH);
delay(220);
digitalWrite(buzzer,LOW);
delay(220);

    
  }
else{
  digitalWrite(buzzer,LOW);
  digitalWrite(sari,LOW);
digitalWrite(beyaz,LOW);
  
}
if(mesafe>10 && mesafe<20){
digitalWrite(sari,HIGH);
digitalWrite(beyaz,HIGH);
digitalWrite(buzzer,HIGH);
delay(150);
digitalWrite(buzzer,LOW);
delay(150);

    
  }
else{
  digitalWrite(buzzer,LOW);
  digitalWrite(sari,LOW);
digitalWrite(beyaz,LOW);
 
}
if(mesafe>5 && mesafe<10){
digitalWrite(sari,HIGH);
digitalWrite(yesil,HIGH);
digitalWrite(beyaz,HIGH);
digitalWrite(buzzer,HIGH);
delay(75);
digitalWrite(buzzer,LOW);
delay(75);

    
  }
else{
  digitalWrite(buzzer,LOW);
  digitalWrite(sari,LOW);
digitalWrite(yesil,LOW);
digitalWrite(beyaz,LOW);
  
}
if(mesafe>0 && mesafe<5){
digitalWrite(kirmizi,HIGH);
digitalWrite(sari,HIGH);
digitalWrite(yesil,HIGH);
digitalWrite(beyaz,HIGH);
digitalWrite(buzzer,HIGH);
delay(20);
digitalWrite(buzzer,LOW);
delay(20);

    
  }
else{
  digitalWrite(buzzer,LOW);
  digitalWrite(kirmizi,LOW);
digitalWrite(sari,LOW);
digitalWrite(yesil,LOW);
digitalWrite(beyaz,LOW);
  
}

    
  
  
}
//1457
