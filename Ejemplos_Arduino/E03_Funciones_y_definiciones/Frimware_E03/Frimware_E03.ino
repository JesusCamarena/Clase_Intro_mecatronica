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
//--------------------------------INICO---------------------------------//
//--Constantes
#define RETARDO 500 //Retardo equivale a 500

//--Etiquetas
#define LED0 10 //LED0 equivale al pin 10
#define LED1 11 //LED1 equivale al pin 11
#define LED2 12 //LED2 equivale al pin 12
#define LED3 13 //LED3 equivale al pin 13

//--------------------------------SETUP---------------------------------//
void setup() 
{
  //--Outputs
  pinMode(LED0,OUTPUT); // LED0 es salida
  pinMode(LED1,OUTPUT); // LED1 es salida
  pinMode(LED2,OUTPUT); // LED2 es salida
  pinMode(LED3,OUTPUT); // LED3 es salida
}//Fin_setup

//---------------------------------LOOP---------------------------------//
void loop()
{
  Encender_leds(); // Funcion de leds que se encienden
  delay(RETARDO);  // Retardo 
  Apagar_leds();   // Funcion de leds que se apagan
  delay(RETARDO);  // Retardo 
  Secuencia_leds();// Funcion de leds que hacen una secuencia
  Apagar_leds();   // Funcion de leds que se apagan
  delay(RETARDO);  // Retardo 
}//Fin_loop

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
  digitalWrite(LED0, HIGH);// LED0 encendido
  digitalWrite(LED1, HIGH);// LED1 encendido
  digitalWrite(LED2, HIGH);// LED2 encendido
  digitalWrite(LED3, HIGH);// LED3 encendido
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
  digitalWrite(LED0, LOW);// LED0 apagado
  digitalWrite(LED1, LOW);// LED1 apagado
  digitalWrite(LED2, LOW);// LED2 apagado
  digitalWrite(LED3, LOW);// LED3 apagado
}//Fin_Apagar_leds

//***********************************************************************
//* Descripcion: Funcion de leds que hacen una secuencia propia
//* Prototype: void Secuencia_leds(void);
//* Call: Secuencia_leds();
//* Retorno: void
//* Argumentos: void
//***********************************************************************
void Secuencia_leds(void)
{
  digitalWrite(LED3, LOW); // LED3 apagado
  digitalWrite(LED0, HIGH);// LED0 encendido
  delay(RETARDO);          // Retardo 
  digitalWrite(LED0, LOW); // LED0 apagado
  digitalWrite(LED1, HIGH);// LED1 encendido
  delay(RETARDO);          // Retardo
  digitalWrite(LED1, LOW); // LED1 apagado
  digitalWrite(LED2, HIGH);// LED2 encendido
  delay(RETARDO);          // Retardo
  digitalWrite(LED2, LOW); // LED2 apagado
  digitalWrite(LED3, HIGH);// LED3 encendido
  delay(RETARDO);          // Retardo
}//Fin_Secuencia_leds
