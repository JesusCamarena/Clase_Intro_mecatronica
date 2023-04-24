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
const byte button2_pin = 11;
const byte dswitch1_1_pin  = 12;
const byte numero_de_pulsadores = 2;

//-Outputs
//Actuadores
const byte led0_pin = 2;
const byte led1_pin = 3;
const byte led2_pin = 4;
const byte led3_pin = 5;
const byte numero_de_leds = 4;

//--Constantes

//--Variables
bool button2_value = 0;
bool dswitch1_1_value = 0;
byte counter = 0; //Variable de 8 bits para guardar el conteo

//--Arreglos
//-Inputs
//Sensores
byte pulsadores_pins[numero_de_pulsadores] = 
     {button2_pin,
      dswitch1_1_pin};
    
//-Outputs
//Actuadores
byte led_pins[numero_de_leds] = 
     {led0_pin,
      led1_pin,
      led2_pin,
      led3_pin};
//--------------------------------SETUP---------------------------------//
void setup() 
{
  Init_pulsadores();// Funcion para inicializar los pulsadores
  Init_leds();// Funcion para inicializar actuadores como salidas
}//Fin setup

//---------------------------------LOOP---------------------------------//
void loop()//while(1)
{
  button2_value    = digitalRead(button2_pin);
  dswitch1_1_value = digitalRead(dswitch1_1_pin);
  if (button2_value)
  
}//Fin loop

//-----------------------------FUNCIONES()------------------------------//

//***********************************************************************
//* Descripcion: Funcion para inicializar los pulsadores
//* Prototype: void Init_pulsadores(void);
//* Call: Init_pulsadores();
//* Retorno: void
//* Argumentos: void
//***********************************************************************
void Init_pulsadores(void)
{
  for (byte i = 0;i < numero_de_pulsadores;i++)
  {
    pinMode(pulsadores_pins[i],INPUT); // Pines es salidas
  }//Fin_for
}//Fin_Init_sensores

//***********************************************************************
//* Descripcion: Funcion para inicializar leds
//* Prototype: void Init_leds(void);
//* Call: Init_leds();
//* Retorno: void
//* Argumentos: void
//***********************************************************************
void Init_leds(void)
{
  for (byte i = 0;i < numero_de_leds;i++)
  {
    pinMode(led_pins[i],OUTPUT); // Pines entradas
  }//Fin_for
}//Fin_Init_actuadores