#include<Wire.h>
 
#define MPU 0x68
#define led 8
#define baz 10
#define led1 11
#define led2 12
#define led3 13

int16_t ivmeX,ivmeY,ivmeZ,IsI,GyX,GyY,GyZ;

void setup(){
  Wire.begin();
  pinMode(8,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(10,OUTPUT);
  Wire.beginTransmission(MPU);
  Wire.write(0x6B);
  Wire.write(0); 
  Wire.endTransmission(true);
  Serial.begin(9600);
}
void loop(){
  
  verileriOku();
  
  Serial.print("ivmeX = "); Serial.print(ivmeX);
  Serial.print(" | ivmeY = "); Serial.print(ivmeY);
  Serial.print(" | ivmeZ = "); Serial.print(ivmeZ);
  Serial.print(" | Sicaklik = "); Serial.print(IsI/340.00+36.53);  
  Serial.print(" | GyroX = "); Serial.print(GyX);
  Serial.print(" | GyroY = "); Serial.print(GyY);
  Serial.print(" | GyroZ = "); Serial.println(GyZ);
  delay(333);
}




void verileriOku(){
  Wire.beginTransmission(MPU);
  Wire.write(0x3B); // mpu6050 nin ilk sensör verisinin adresi.
  Wire.endTransmission(false);
  Wire.requestFrom(MPU,14,true); //0X3B den başlayan 14 bitlik veri istendi. İçinde tüm değerlerimiz var.
  
  ivmeX=Wire.read()<<8|Wire.read();   
  ivmeY=Wire.read()<<8|Wire.read(); 
  ivmeZ=Wire.read()<<8|Wire.read(); 
  IsI=Wire.read()<<8|Wire.read(); 
  GyX=Wire.read()<<8|Wire.read(); 
  GyY=Wire.read()<<8|Wire.read();  
  GyZ=Wire.read()<<8|Wire.read();

  if(GyX>200){
    digitalWrite(led2,HIGH);
    delay(20);
    digitalWrite(led2,LOW);
    delay(20);
    digitalWrite(led,HIGH);
    delay(20);
    digitalWrite(led,LOW);
    delay(20);
    digitalWrite(led3,HIGH);
    delay(20);
    digitalWrite(led3,LOW);
    delay(20);
    digitalWrite(led1,HIGH);
    delay(20);
    digitalWrite(led1,LOW);
    delay(20);
    digitalWrite(baz,HIGH);
    delay(10);
    digitalWrite(baz,LOW);
    delay(10);
    
  }
else{
  digitalWrite(led,LOW);
  digitalWrite(baz,LOW);
}

}











  
  /* 
  * Sırası ile okunan her iki byte birleştirilerek sırası ile değişkenlere yazdırıldı
  * Böylece IMU'dan tüm değerler okunmuş oldu
  * 0X3B adresi imu değerlerinden ilk sensörün değerine denk gelmektedir.
  * IMU'dan tüm değerlerin okunabilmesi için bu adresten başlandı
  */
