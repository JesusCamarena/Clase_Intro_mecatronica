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
  //--Outputs
  pinMode(13,OUTPUT); // Pin D13 es una salida
  pinMode(D12,OUTPUT);// Pin D12 es una salida
}//Fin setup

//Se ejecuta infinitamente
void loop() 
{
    digitalWrite(13,HIGH); // Pin D13 esta en source
    digitalWrite(D12,LOW); // Pin D12 esta en sink
}//Fin loop
