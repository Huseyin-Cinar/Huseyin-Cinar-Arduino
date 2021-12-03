#include <Servo.h>

Servo motor;
Servo dmotor;

int deger;
int derece;
int ddeger;
int dderece;

void setup() {
  motor.attach(3);
  dmotor.attach(5);
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {

 

  deger = analogRead(A0);
  derece = map(deger, 0,1023,0,180);
  motor.write(derece);
  ddeger = analogRead(A5);
  dderece = map(ddeger, 0,1023,0,180);
  dmotor.write(dderece);

}
