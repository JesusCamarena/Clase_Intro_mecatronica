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
 *                                                     Fecha: 25/03/23   *
 ************************************************************************/
//--------------------------------INICO---------------------------------//
//--Bibliotecas

//--Constantes
#define ON  HIGH
#define OFF LOW

//--Variables
bool value_tarjeta_de_acceso = 0;
bool value_codigo_pin = 0;

//--------------------------------SETUP---------------------------------//
void setup() 
{
  Init_sensores();// Funcion para inicializar sensores como entradas
  Init_actuadores();// Funcion para inicializar actuadores como salidas
}//Fin setup

//---------------------------------LOOP---------------------------------//
void loop()//while(1)
{
  //Guardar valores de los sensores
  value_tarjeta_de_acceso = digitalRead(tarjeta_de_acceso);
  value_codigo_pin = digitalRead(codigo_pin);
  
  //m = 0
  if (!value_tarjeta_de_acceso && !value_codigo_pin)
  {
    digitalWrite(puerta,OFF);
    digitalWrite(alarma,OFF);
  } //Fin_if_1_encadenado
  
  //m = 1
  else if (!value_tarjeta_de_acceso && value_codigo_pin)
  {
    digitalWrite(puerta,OFF);
    digitalWrite(alarma,OFF);
  } //Fin_else_if_1_encadenado
  
  //m = 2
  else if (value_tarjeta_de_acceso && !value_codigo_pin)
  {
    digitalWrite(puerta,OFF);
    digitalWrite(alarma,ON);
  } //Fin_else_if_2_encadenado
  
  //m = 3
  else if (value_tarjeta_de_acceso && value_codigo_pin)
  {
    digitalWrite(puerta,ON);
    digitalWrite(alarma,OFF);
  } //Fin_else_if_3_encadenado

}//Fin loop

//-----------------------------FUNCIONES()------------------------------//