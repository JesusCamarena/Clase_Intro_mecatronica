#include "Arduino.h"
#include "actuadores.h"

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