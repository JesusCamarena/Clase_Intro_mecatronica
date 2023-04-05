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

//--Etiquetas
//-Inputs
//Sensores
const byte tarjeta_de_acceso = 12;
const byte codigo_pin        = 11;
const byte numero_de_sensores = 2;

//-Outputs
//Actuadores
const byte alarma = 3;
const byte puerta = 2;
const byte numero_de_actuadores = 2;

//--Constantes
#define ON  HIGH
#define OFF LOW

//--Variables
bool value_tarjeta_de_acceso = 0;
bool value_codigo_pin = 0;

//--Arreglos
//-Inputs
//Sensores
byte pin_entrada_sensores[numero_de_sensores] = 
    {tarjeta_de_acceso,
     numero_de_sensores};
    
//-Outputs
//Actuadores
byte pin_salida_actuadores[numero_de_actuadores] = 
    {alarma,
     puerta};
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

//***********************************************************************
//* Descripcion: Funcion para inicializar sensores
//* Prototype: void Init_sensores(void);
//* Call: Init_sensores();
//* Retorno: void
//* Argumentos: void
//***********************************************************************
void Init_sensores(void)
{
  for (byte i = 0;i < numero_de_sensores;i++)
  {
    pinMode(pin_entrada_sensores[i],INPUT); // Pines es salidas
  }//Fin_for
}//Fin_Init_sensores

//***********************************************************************
//* Descripcion: Funcion para inicializar pulsadores
//* Prototype: void Init_actuadores(void);
//* Call: Init_actuadores();
//* Retorno: void
//* Argumentos: void
//***********************************************************************
void Init_actuadores(void)
{
  for (byte i = 0;i < numero_de_actuadores;i++)
  {
    pinMode(pin_salida_actuadores[i],OUTPUT); // Pines entradas
  }//Fin_for
}//Fin_Init_actuadores