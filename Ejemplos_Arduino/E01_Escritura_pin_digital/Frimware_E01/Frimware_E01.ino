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

//-------------setup()--------------------//
void setup() 
{
  //--Outputs
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
}//Fin setup

//-------------loop()--------------------//
void loop() 
{
    digitalWrite(13,HIGH);
	  digitalWrite(12,LOW);
}//Fin loop
