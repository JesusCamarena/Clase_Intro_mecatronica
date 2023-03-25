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
//--Constantes
#define RETARDO 500

//--Variables
//byte iteracion = 0;

//--Etiquetas
#define LED0 10
#define LED1 11
#define LED2 12
#define LED3 13

//--------------------------------SETUP---------------------------------//
void setup() 
{
//Configurar el pines como salidas 
  //--Outputs
  pinMode(LED0,OUTPUT); // Pin D13 es una salida
  pinMode(LED1,OUTPUT); // Pin D12 es una salida
  pinMode(LED2,OUTPUT); // Pin D13 es una salida
  pinMode(LED3,OUTPUT); // Pin D12 es una salida
}//Fin setup

//---------------------------------LOOP---------------------------------//
void loop()//while(1)
{
  Secuencia_leds_for_left();    // llama a la función
  Secuencia_leds_while_right(); // llama a la función
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
  digitalWrite(LED0, HIGH);// LED0 esta encendido
  digitalWrite(LED1, HIGH);// LED1 esta encendido
  digitalWrite(LED2, HIGH);// LED2 esta encendido
  digitalWrite(LED3, HIGH);// LED3 esta encendido
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
  digitalWrite(LED0, LOW);// LED0 esta apagado
  digitalWrite(LED1, LOW);// LED1 esta apagado
  digitalWrite(LED2, LOW);// LED2 esta apagado
  digitalWrite(LED3, LOW);// LED3 esta apagado
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
  //Inicia en el LED0 -> 10 y termina en el LED3 -> 13
  // la varible i inicia en 10
  // la varible i se compara si es menor que 14
  // la varible i se incrementa en 1 si no se cumple
  for (byte i = 10;i<14;i++)
  {
    digitalWrite(i, HIGH);// Enciende el numero del led elegido
    delay(RETARDO);       // Retardo 
    digitalWrite(i, LOW); // Apaga el numero del led elegido
  }//Finfor
}//Fin_Secuencia_leds_for_left

//***********************************************************************
//* Descripcion: Funcion de leds que se desplazan a la derecha
//* Prototype: void Secuencia_leds_while(void);
//* Call: Secuencia_leds_while();
//* Retorno: void
//* Argumentos: void
//***********************************************************************
void Secuencia_leds_while_right(void)
{
  //Inicia en el LED3 -> 10 y termina en el LED3 -> 13
  byte iteracion = 13; // la varible iteracion inicia en 13
  while (iteracion > 9) // // la varible iteracion se compara si es menor que 9
  {
    digitalWrite(iteracion, HIGH);// Enciende el numero del led elegido
    delay(RETARDO);               // Retardo 
    digitalWrite(iteracion, LOW); // Apaga el numero del led elegido
    iteracion--;                 // iteracion se decrementa en 1
  }//Fin_while
}//Fin_Secuencia_leds_while_right
