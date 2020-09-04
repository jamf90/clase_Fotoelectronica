#include <LiquidCrystal.h>
LiquidCrystal LCD (13,12,11,10,9,8);
int dato;  //int se usa para definir variables por encima de 8 bits, por que va de 0 a 1023, usamos byte solo para datos de 0 a 254
#define Barrera 7
#define Reset 6
int BarreraActiva =0; 
void setup() {
 LCD.begin(16,2);
 pinMode(Barrera, INPUT);   
 pinMode(Reset, INPUT); 
}

void loop() {
    
 dato=analogRead(A0);
  if(digitalRead(Reset)== 1){
     while(digitalRead(Reset) ==1){}
    BarreraActiva =0;
  }
 
     if(dato<300 && digitalRead(Barrera)==1){
        while(digitalRead(Barrera) ==1){} 
       BarreraActiva =1;
     
   
     }
    if( BarreraActiva){  
      LCD.setCursor(5,0); 
      LCD.print("INTRUSO"); 
    delay(300);
     }
     if(dato<300 && BarreraActiva ==0 ){
    
     LCD.clear();
      LCD.setCursor(5,0); 
      LCD.print("NORMAL"); 
    delay(300);
     }
 
 if(dato>300){
     
      LCD.setCursor(2,0); 
      LCD.print("sk200 Sistema");
      LCD.setCursor(2,1);
      LCD.print("desactivado");
      delay(500);
 }
  
}
