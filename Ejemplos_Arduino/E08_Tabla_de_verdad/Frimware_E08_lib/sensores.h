#ifndef sensores_h
#define sensores_h

//Sensores
const byte tarjeta_de_acceso = 12;
const byte codigo_pin        = 11;
const byte numero_de_sensores = 2;

//--Arreglos
//-Inputs
//Sensores
byte pin_entrada_sensores[numero_de_sensores] = 
    {tarjeta_de_acceso,
     numero_de_sensores};

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

#endif