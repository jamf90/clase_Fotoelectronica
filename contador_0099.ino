
byte valor[10]={0X7E, 0X30, 0X6D, 0X79, 0X33, 0X5B, 0X5F, 0X70, 0X7F, 0X7B};
void setup() {
DDRD=255;
pinMode(8,OUTPUT);
pinMode(9, OUTPUT); 

}

void loop() {
for(byte i=0; i<=9; i++){
  for(byte j=0; j<=9; j++){
    for(byte k=1; k<=50; k++){
     PORTD=valor[j];
     digitalWrite(8, LOW);
     digitalWrite(9, HIGH);
     delay(10);  
     PORTD=valor[i];
     digitalWrite(8, HIGH);
     digitalWrite(9, LOW);
     delay(10); 
    }
  }
}

}
