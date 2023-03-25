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
const byte LED3 = 5;
const byte LED4 = 6;
const byte LED5 = 7;
const byte numero_de_salidas = 6;

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
//LED3
#define LED3_ON()   digitalWrite(LED3,HIGH)
#define LED3_OFF()  digitalWrite(LED3,LOW)
//LED4
#define LED4_ON()   digitalWrite(LED4,HIGH)
#define LED4_OFF()  digitalWrite(LED4,LOW)
//LED5
#define LED5_ON()   digitalWrite(LED5,HIGH)
#define LED5_OFF()  digitalWrite(LED5,LOW)

//--Constantes
#define RETARDO 500
#define RETARDO_1s 1000

//--Variables

//--Arreglos
byte pin_salida[numero_de_salidas] = {LED0,LED1,LED2,LED3,LED4,LED5};

//--------------------------------SETUP---------------------------------//
void setup() 
{
//Arreglo para establecer los pines seleccionados como salidas
  //--Outputs
  for (byte i = 0;i < numero_de_salidas;i++)
  {
    pinMode(pin_salida[i],OUTPUT); // Pines es salidas
  }//Fin_for
  
}//Fin setup

//---------------------------------LOOP---------------------------------//
void loop()//while(1)
{
  Apagar_leds();
  delay(RETARDO_1s);
  Encender_leds();
  delay(RETARDO_1s);
  Apagar_leds();
  delay(RETARDO_1s);
  Secuencia_leds_for_left();  // llama a la función
  Secuencia_leds_for_right(); // llama a la función
  Encender_leds();
  delay(RETARDO_1s);
}//Fin loop

//-----------------------------FUNCIONES()------------------------------//
//***********************************************************************
//* Descripcion: Funcion de leds que se encienden
//* Prototype: void Encender_leds(void);
//* Call: Encender_leds();
//* Retorno: void
//* Argumentos: void
//***********************************************************************
void Encender_leds(void)
{
  for (byte i = LED0;i<=LED5;i++)
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
  for (byte i = LED0;i<=LED5;i++)
  {
    digitalWrite(i, LOW);// Enciende el numero del led elegido
  }//Fin_for
}//Fin_Apagar_leds

//***********************************************************************
//* Descripcion: Funcion de leds que se desplazan a la izquierda
//* Prototype: void Secuencia_leds_for(void);
//* Call: Secuencia_leds_for();
//* Retorno: void
//* Argumentos: void
//***********************************************************************
void Secuencia_leds_for_left(void)
{
  Apagar_leds();
  for (byte i = LED0;i<LED5;i++)
  {
    digitalWrite(i, HIGH);// Enciende el numero del led elegido
    delay(RETARDO);       // Retardo 
    digitalWrite(i, LOW); // Apaga el numero del led elegido
  }//Fin_for
}//Fin_Secuencia_leds_for_left

//***********************************************************************
//* Descripcion: Funcion de leds que se desplazan a la derecha
//* Prototype: void Secuencia_leds_for_rightvoid);
//* Call: Secuencia_leds_for_right();
//* Retorno: void
//* Argumentos: void
//***********************************************************************
void Secuencia_leds_for_right(void)
{
  Apagar_leds();
  for (byte i = LED5;i>=LED0;i--)
  {
    digitalWrite(i, HIGH);// Enciende el numero del led elegido
    delay(RETARDO);       // Retardo 
    digitalWrite(i, LOW); // Apaga el numero del led elegido
  }
}//Fin_Secuencia_leds_for_right
