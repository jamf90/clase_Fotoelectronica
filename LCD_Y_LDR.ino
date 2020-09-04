#include <LiquidCrystal.h>
LiquidCrystal LCD (13,12,11,10,9,8);
int dato;                          //int se usa para definir variables por encima de 8 bits, por que va de 0 a 1023, usamos byte solo para datos de 0 a 254
void setup() {
 LCD.begin(16,2);


}

void loop() {
  dato=analogRead(A0);
  if(dato<300){
     
      LCD.setCursor(3,0); 
      LCD.print(" ES DE NOCHE"); 
 }

 else{
     
      LCD.setCursor(3,0); 
      LCD.print(" ES DE DIA  "); 
 }
  
}
