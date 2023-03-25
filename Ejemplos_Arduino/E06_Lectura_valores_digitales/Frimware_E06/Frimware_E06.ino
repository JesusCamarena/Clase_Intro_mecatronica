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
const byte LED0 = 2;
const byte LED1 = 3;
const byte LED2 = 4;
const byte numero_de_leds = 3;

//-Inputs
const byte BTN2 = 8;
const byte DSW1 = 9;
const byte numero_de_botones = 2;

//--Macro
//-Outputs
//LED0
#define LED0_ON()   digitalWrite(LED0,HIGH)
#define LED0_OFF()  digitalWrite(LED0,LOW)
//LED1
#define LED1_ON()   digitalWrite(LED1,HIGH)
#define LED1_OFF()  digitalWrite(LED1,LOW)
//LED2
#define LED2_ON()   digitalWrite(LED2,HIGH)
#define LED2_OFF()  digitalWrite(LED2,LOW)


//--Constantes
#define RETARDO 500
#define RETARDO_1s 1000

//--Variables

//--Arreglos
byte led_pin_salida[numero_de_leds] = {LED0,LED1,LED2};
byte boton_pin_entrada[numero_de_botones] = {BTN2,DSW1};

//--------------------------------SETUP---------------------------------//
void setup() 
{
//Arreglo para establecer los pines seleccionados como salidas
  //-Outputs
  Init_leds();
  Init_botones();
  
}//Fin setup

//---------------------------------LOOP---------------------------------//
void loop()//while(1)
{
 
}//Fin loop

//-----------------------------FUNCIONES()------------------------------//

//***********************************************************************
//* Descripcion: Funcion de para inicializar leds
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
//* Descripcion: Funcion de para inicializar botones
//* Prototype: void Init_botones(void);
//* Call: Init_botones();
//* Retorno: void
//* Argumentos: void
//***********************************************************************
void Init_botones(void)
{
  for (byte i = 0;i < numero_de_botones;i++)
  {
    pinMode(boton_pin_entrada[i],INPUT); // Pines entradas
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
  for (byte i = LED0;i<=LED2;i++)
  {
    digitalWrite(i, HIGH);// Enciende el numero del led elegido
  }//Finfor
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
  for (byte i = LED0;i<=LED2;i++)
  {
    digitalWrite(i, LOW);// Enciende el numero del led elegido
  }//Fin_for
}//Fin_Apagar_leds
