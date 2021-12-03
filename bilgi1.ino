//Hüseyin Çınar Tarafından Yapılmıştır.
#include <Adafruit_BMP085.h>
int TusSayac;
#define led 8
Adafruit_BMP085 bmp;
  
void setup() {
  
  Serial.begin(9600);
  if (!bmp.begin()) {
    Serial.println("Cihaz bulunamadı bir sorun oluştu yeniden deneyin!");
  while (1) {}
  }
}
  
void loop() {
int yukseklik = bmp.readAltitude(101500);
  
    Serial.print("Sıcaklık = ");
    Serial.print(bmp.readTemperature());
    Serial.println(" *C");
    
    Serial.print("Basınç = ");
    Serial.print(bmp.readPressure());
    Serial.println(" Pa");
    
    
    Serial.print("Yükseklik = ");
    Serial.print(bmp.readAltitude());
    Serial.println(" metre");

    Serial.print("Deniz Seviyesindeki Basınç (Hesaplanmış) = ");
    Serial.print(bmp.readSealevelPressure());
    Serial.println(" Pa");

  
    Serial.print("Gerçek Yükseklik = ");
    Serial.print(bmp.readAltitude(101500));
    Serial.println(" metre");
    
    Serial.println();
 

  
    
    
    if(yukseklik-=150){
      digitalWrite(13,1);
      delay(500);
      digitalWrite(13,0);
      delay(500);
    }
    else {
      digitalWrite(13,0);
    }
}
