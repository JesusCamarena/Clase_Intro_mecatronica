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
#define LED0 2
#define LED1 3
#define LED2 4
#define LED3 5
#define LED4 6
#define LED5 7

//--Macro
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

//--Variables
//byte iteracion = 0;

//Arreglos

//--------------------------------SETUP---------------------------------//
void setup() 
{
//Configurar el pines como salidas 
  //--Outputs
  pinMode(LED0,OUTPUT); // LED0 es una salida
  pinMode(LED1,OUTPUT); // LED1 es una salida
  pinMode(LED2,OUTPUT); // LED2 es una salida
  pinMode(LED3,OUTPUT); // LED3 es una salida
  pinMode(LED4,OUTPUT); // LED4 es una salida
  pinMode(LED5,OUTPUT); // LED5 es una salida

}//Fin setup

//---------------------------------LOOP---------------------------------//
void loop()//while(1)
{
  Secuencia_leds_for_left();    // llama a la función
  Secuencia_leds_for_right(); // llama a la función
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
  LED0_ON();// LED0 esta encendido
  LED1_ON();// LED1 esta encendido
  LED2_ON();// LED2 esta encendido
  LED3_ON();// LED3 esta encendido
  LED4_ON();// LED4 esta encendido
  LED5_ON();// LED5 esta encendido
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
  LED0_OFF();// LED0 esta apagado
  LED1_OFF();// LED1 esta apagado
  LED2_OFF();// LED2 esta apagado
  LED3_OFF();// LED3 esta apagado
  LED4_OFF();// LED4 esta apagado
  LED5_OFF();// LED5 esta apagado
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
  //Inicia en el LED0 -> 02 y termina en el LED5 -> 07
  for (byte i = 2;i<8;i++)
  {
    digitalWrite(i, HIGH);// Enciende el numero del led elegido
    delay(RETARDO);       // Retardo 
    digitalWrite(i, LOW); // Apaga el numero del led elegido
  }//Finfor
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
  for (byte i = 7;i>=2;i--)
  {
    digitalWrite(i, HIGH);// Enciende el numero del led elegido
    delay(RETARDO);       // Retardo 
    digitalWrite(i, LOW); // Apaga el numero del led elegido
  }
}//Fin_Secuencia_leds_for_right
