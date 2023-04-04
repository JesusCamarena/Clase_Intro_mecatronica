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
//-Outputs
const byte LED2 = 4;
const byte LED1 = 3;
const byte LED0 = 2;
const byte numero_de_leds = 3;

//-Inputs
const byte DSW1_2 = A2;
const byte DSW1_1 = A1;
const byte BTN2   = A0;
const byte numero_de_pulsadores = 3;

//--Macro
//-Outputs
//LED0
#define LED0_ON   digitalWrite(LED0,HIGH)
#define LED0_OFF  digitalWrite(LED0,LOW)

//--Constantes
#define RETARDO 500
#define RETARDO_1s 1000

//--Variables
bool value_DSW1 = 0;
bool value_BTN1 = 0;

//--Arreglos
byte led_pin_salida[numero_de_leds] = {LED0,LED1,LED2};
byte pulsador_pin_entrada[numero_de_pulsadores] = {BTN2,DSW1_1,DSW1_2};

//--------------------------------SETUP---------------------------------//
void setup() 
{
  Init_leds();// Funcion para inicializar leds como salidas
  Init_pulsadores();// Funcion para inicializar botones como entradas
}//Fin setup

//---------------------------------LOOP---------------------------------//
void loop()//while(1)
{
 if (digitalRead(DSW1_1))
 {
  if(digitalRead(BTN2))
  {
    digitalWrite(LED0, HIGH);
  }
  else
  {
    digitalWrite(LED0, LOW);
  }//Fin_if_1_anidado
 }//Fin_if_1
 else if (digitalRead(DSW1_2))
 {
   if(digitalRead(BTN2))
   {
     digitalWrite(LED0, LOW);
   }
   else
   {
     digitalWrite(LED0, HIGH);
   }//Fin_if_2_anidado
  }//Fin_if_2_encadenado
  else
  {
    digitalWrite(LED0, LOW);
  }//Fin_if_1_encadenado
}//Fin loop

//-----------------------------FUNCIONES()------------------------------//

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
    pinMode(led_pin_salida[i],OUTPUT); // Pines es salidas
  }//Fin_for
}//Fin_Init_leds

//***********************************************************************
//* Descripcion: Funcion para inicializar pulsadores
//* Prototype: void Init_pulsadores(void);
//* Call: Init_pulsadores();
//* Retorno: void
//* Argumentos: void
//***********************************************************************
void Init_pulsadores(void)
{
  for (byte i = 0;i < numero_de_pulsadores;i++)
  {
    pinMode(pulsador_pin_entrada[i],INPUT); // Pines entradas
  }//Fin_for
}//Fin_Init_leds

//***********************************************************************
//* Descripcion: Funcion de leds que se encienden
//* Prototype: void Encender_leds(void);
//* Call: Encender_leds();
//* Retorno: void
//* Argumentos: void
//***********************************************************************
void Encender_leds(void)
{
  for (byte i = 0;i < numero_de_leds;i++)
  {
    digitalWrite(led_pin_salida[i],HIGH); // Pines es salidas
  }//Fin_for
}//Fin_Encender_leds

//***********************************************************************
//* Descripcion: Funcion de leds que se apagan
//* Prototype: void Apagar_leds(void);
//* Call: Apagar_leds();
//* Retorno: void
//* Argumentos: void
//***********************************************************************
void Apagar_leds(void)
{
  for (byte i = 0;i < numero_de_leds;i++)
  {
    digitalWrite(led_pin_salida[i],LOW); // Pines es salidas
  }//Fin_for
}//Fin_Apagar_leds
