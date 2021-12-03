#include <Servo.h>

Servo myservo,servo;

int potpin = A0;  
int val;  
int pos;  

void setup() {
  myservo.attach(9);
  servo.attach(10);
}

void loop() {
  val = analogRead(potpin);            
  myservo.write(0);
  servo.write(0);
   for (pos = 0; pos <= 180; pos += 1)
  {
    myservo.write(pos);
    servo.write(pos);
    delay(15);
  }
    delay(3000);
  for (pos = 180; pos >= 0; pos -= 1)
  {
    myservo.write(pos);
    servo.write(pos);
    delay(15);
  }
  delay(3000);
}
