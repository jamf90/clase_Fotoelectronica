byte valor[10]={0X7E, 0X30, 0X6D, 0X79, 0X33, 0X5B, 0X5F, 0X70, 0X7F, 0X7B};


void setup(){
  DDRD=255;  //Todo el puerto D trabajarà como salida, si queremos que el grupo tenga entrada y salida colocamos el numero (1 salida 0 entrada). tambien puedo hacerlo en binario
}
 void loop(){
  for (byte i=0; i<=9; i++){
    PORTD=valor[i];
    delay (500);
  }
  
  
 }
