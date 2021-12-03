#include <SoftwareSerial.h>
#include <Servo.h>

Servo motor;

SoftwareSerial bt_iletisim(7, 6); // RX,TX

void setup()
{
  motor.attach(3);
  Serial.begin(9600);
  bt_iletisim.begin(9600);
}

void loop()
{
  int data = bt_iletisim.read();
  if (bt_iletisim.available())
  {
    int data = bt_iletisim.read();
    Serial.println(data);
    }
    else
    {
      
    }
     if (data == 90)
     {
      motor.write(90);
     }
     else
     {
      
     }
}
