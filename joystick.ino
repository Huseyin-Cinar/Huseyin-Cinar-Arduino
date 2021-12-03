int VRX = A0; 
int VRY = A1; 
int SW = 2; 
int xPozisyonu;
int yPozisyonu;
int butonDurum;

void setup() 
  {
    pinMode(SW, INPUT_PULLUP);
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
  }
  
void loop() 
  {
        xPozisyonu = analogRead(VRX);
        yPozisyonu = analogRead(VRY);
        butonDurum = digitalRead(SW);

        if(xPozisyonu<10) digitalWrite(8,HIGH); 
        if(xPozisyonu>1000) digitalWrite(9,HIGH); 
        if(yPozisyonu<10) digitalWrite(10,HIGH); 
        if(yPozisyonu>1000) digitalWrite(11,HIGH); 
        if(!butonDurum) digitalWrite(7,HIGH);

        digitalWrite(7,LOW);
        digitalWrite(8,LOW);
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
        digitalWrite(11,LOW);
        
  }
