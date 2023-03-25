//" ¡No copies y pegues el código, analízalo e inspirate en el! "

/*************************************************************************
 *   Copyright (C) 2023 Jesús Camarena                                   *
 *   jesus.garzacmn@uanl.edu.mx                                          *
 *   Licencia: Attribution-NonCommercial-ShareAlike 3.0(CC-BY-NC-SA 3.0) *
 *   https://creativecommons.org/licenses/by-nc-sa/3.0/                  *
 *                                                                       * 
 *   Ejemplo:                                                            *
 *   Dispositivo: Arduino UNO                                            *
 *   Lenguaje: Arduino                                                   *
 *   Rev: 1.0                                                            *
 *                                                     Fecha: 15/03/23   *
 ************************************************************************/

//Se ejecuta solamente una vez
void setup() 
{
// Configurar el pines como salidas 
  //--Outputs
  pinMode(13,OUTPUT); // Pin D13 es una salida
  pinMode(12,OUTPUT); // Pin D12 es una salida
  pinMode(11,OUTPUT); // Pin D13 es una salida
  pinMode(10,OUTPUT); // Pin D12 es una salida
}//Fin setup

//Se ejecuta infinitamente
void loop() 
{
    digitalWrite(13,HIGH); // Pin D13 esta encendido
    delay(1000); // Retardo de 1 segundo
    digitalWrite(13,LOW);  // Pin D12 esta apagado
    digitalWrite(12,HIGH); // Pin D13 esta encendido
    delay(1000); // Retardo de 1 segundo
    digitalWrite(12,LOW);  // Pin D12 esta apagado
    digitalWrite(11,HIGH); // Pin D13 esta encendido
    delay(1000); // Retardo de 1 segundo
    digitalWrite(11,LOW);  // Pin D12 esta apagado
    digitalWrite(10,HIGH); // Pin D13 esta encendido
    delay(1000); // Retardo de 1 segundo
    digitalWrite(10,LOW);  // Pin D12 esta apagado
}//Fin loop
