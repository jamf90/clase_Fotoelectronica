/*clse 19/08/2020
 * 
 */
#define Barrera 12
#define Alarma 7
#define Reset 0
bool BarreraActiva = false;    // variable

void setup() {
 pinMode(Barrera, INPUT);  // put your setup code here, to run once:
 pinMode(Alarma, OUTPUT);  // put your setup code here, to run once:
 pinMode(Reset, INPUT);  // put your setup code here, to run once:
}

void loop() {

 if(digitalRead(Barrera)==1){ //Entrada de barrera
    while(digitalRead(Barrera) ==1){} //antirebote
      BarreraActiva = true;
 }
    
 if(digitalRead(Reset)==1){ //entrada de reset
    while(digitalRead(Reset) ==1){} //antirebote
      BarreraActiva = false;
 }

   if (BarreraActiva == true){
      digitalWrite(Alarma, HIGH);   //Si algo obtaculiza la barrera se enciende la alarma
      }
  
  if (BarreraActiva == false){
      digitalWrite(Alarma, LOW);   // si no hay nada obstaculizando alarma apagada
      }

}
