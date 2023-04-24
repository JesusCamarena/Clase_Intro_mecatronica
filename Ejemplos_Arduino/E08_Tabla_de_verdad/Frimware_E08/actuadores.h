
//Actuadores
const byte alarma = 3;
const byte puerta = 2;
const byte numero_de_actuadores = 2;

//-Outputs
//Actuadores
byte pin_salida_actuadores[numero_de_actuadores] = 
    {alarma,
     puerta};

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
