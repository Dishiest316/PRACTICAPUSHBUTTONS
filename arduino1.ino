#include "GFButton.h"
 
int Botonprendido = 8;
int Botonapagado = 9;
 
GFButton boton1(Botonprendido);
GFButton boton2(Botonapagado);
 
void setup() {
  pinMode(Botonprendido, INPUT);
  pinMode(Botonapagado, INPUT);
  boton1.setPressHandler(botonprendido_pulsado);
  boton2.setPressHandler(botonapagado_pulsado);
  Serial.begin(9600);
}
 
void loop() {
  boton1.process();
  boton2.process();
}
 
void botonprendido_pulsado(GFButton & btn){
  Serial.print("LED1 prendido");
}
void botonapagado_pulsado(GFButton & btn){
  Serial.print("LED1 apagado");
}
