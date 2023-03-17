# Lenguaje de programación Arduino

# 🔸 Introducción

---

El lenguaje de programación de Arduino es una versión simplificada y adaptada de C++ específicamente diseñada para facilitar el desarrollo de proyectos en la plataforma Arduino. El lenguaje de Arduino utiliza la librería Wiring, que proporciona funciones y macros específicas para interactuar con el hardware de la placa Arduino, como leer y escribir en pines digitales y analógicos, comunicación serial, y temporizadores, entre otros.

**`Tabla de contenido`**

# 🔷 Fundamento Teórico

---

Aunque el lenguaje de Arduino está basado en C++, hay algunas diferencias y simplificaciones que lo hacen más accesible para principiantes y adecuado para la plataforma Arduino. A continuación, se describen las principales características del lenguaje de programación de Arduino:

1. **Estructura básica:** Un programa de Arduino, llamado "sketch", consta de dos funciones principales que deben estar presentes en cada sketch:
    - **`void setup()`**: Esta función se ejecuta una vez al iniciar el programa y se utiliza para configurar la inicialización de pines, comunicación serial y cualquier otro parámetro necesario antes de que el programa principal empiece a ejecutarse.
    - **`void loop()`**: Esta función se ejecuta de forma repetitiva después de que la función **`setup()`** haya terminado. Aquí es donde se coloca la lógica principal del programa, como leer sensores, controlar actuadores y procesar datos.
2. **Comentarios:** Al igual que en C++ y otros lenguajes de programación, puedes utilizar comentarios en tus sketches para explicar partes del código o para desactivar temporalmente ciertas líneas de código. Arduino admite comentarios de una línea usando **`//`** y comentarios de varias líneas usando **`/*`** y **`/`**.
3. **Funciones y librerías:** El lenguaje de Arduino viene con una serie de funciones incorporadas para interactuar con el hardware de la placa, como **`digitalWrite()`**, **`analogRead()`**, **`millis()`**, entre otras. Además, hay muchas librerías disponibles que amplían las capacidades de Arduino y facilitan la implementación de funcionalidades adicionales, como controlar pantallas LCD, comunicación inalámbrica y trabajar con sensores específicos.
4. **Variables y tipos de datos:** El lenguaje de Arduino admite una variedad de tipos de datos básicos, como **`int`**, **`float`**, **`char`**, **`boolean`** y **`String`**. También es posible definir estructuras personalizadas y utilizar punteros, como en C++.
5. **Control de flujo:** Las estructuras de control de flujo en el lenguaje de Arduino son similares a las de C++ y otros lenguajes de programación. Estas incluyen condicionales (if, else, switch), bucles (for, while, do-while) y control de flujo (break, continue, return).

[Arduino Reference - Arduino Reference](https://www.arduino.cc/reference/en/)

### 🔹 Syntaxis básica

[Clase_Into_mecatronica/Ejemplos_Arduino/E00 - Syntaxis_basica(template) at main · JesusCamarena/Clase_Into_mecatronica](https://github.com/JesusCamarena/Clase_Into_mecatronica/tree/main/Ejemplos_Arduino/E00%20-%20Syntaxis_basica(template))

```arduino
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

//comentario corto
/*comentario largo */

//Se ejecuta solamente una vez
void setup() 
{
    // Código de configuración inicial
}//Fin setup

//Se ejecuta infinitamente
void loop() 
{
    // Código que se ejecuta repetidamente
}//Fin loop
```

## 🔸 Resumen

---

# 📓Actividad

---

Primer proyecto: Blink (parpadeo de un LED)

# 🧠 Ejercicios

---

# ❓Preguntas

---

# ❗Véase también

---

# ✔️ Referencias

---

# 👁️‍🗨️ Otros temas

**Tabla de contenido**

**Introducción General:**

---

[Flujo de diseño de un proyecto](https://www.notion.so/Flujo-de-dise-o-de-un-proyecto-4b3d53803f1a4b6da138e8de24af068a)

[Introducción a los Microcontroladores](https://www.notion.so/Introducci-n-a-los-Microcontroladores-484a6aff1fd3451d9af9b56c5b180bda)

[Placas de desarrollo para microcontroladores](https://www.notion.so/Placas-de-desarrollo-para-microcontroladores-cfc34ea7b98d48799e74e8ec614bfa4d)

**Introducción a Arduino:**

---

[¿Qué es Arduino?](https://www.notion.so/Qu-es-Arduino-8397250a7903427e8018b31db635c5e6)

[Configuración de entorno de desarrollo (IDE)](https://www.notion.so/Configuraci-n-de-entorno-de-desarrollo-IDE-0c9b002ab94a4dc7b7f798ca791714a6)

[Lenguaje de programación de microcontroladores](https://www.notion.so/Lenguaje-de-programaci-n-de-microcontroladores-d5179c129c5942c2af3e5ded4d9a5435)

[Lenguaje de programación Arduino ](https://www.notion.so/Lenguaje-de-programaci-n-Arduino-294c2fc84f0e495e86cd944d03f3b3a1)

[Entradas y salidas digitales](https://www.notion.so/Entradas-y-salidas-digitales-dd1e9e80958f425582b35ef8b7124b24)

**Hardware, firmware y software Arduino:**

---

[Lectura secuencial up - down de instrucciones](https://www.notion.so/Lectura-secuencial-up-down-de-instrucciones-04b0a79e4b254118b45a4b39530838bc)

[Tipos de dato](https://www.notion.so/Tipos-de-dato-47afd45fcd0a4f7d99e68ea791f1abed)

[Funciones](https://www.notion.so/Funciones-89bcf63d7e7147e1bb6d194acd834aa9)

[Estructuras de control iterativas](https://www.notion.so/Estructuras-de-control-iterativas-a87039e272684a3c835a39931a6c396f)

[Lectura de valores digitales](https://www.notion.so/Lectura-de-valores-digitales-79e953d4bff444c084cb5d932251bb40)

[Estructuras de control condicionales](https://www.notion.so/Estructuras-de-control-condicionales-4c48568511b04c4ab64ff099577bbb19)

[Operadores booleanos](https://www.notion.so/Operadores-booleanos-4a05c1a3169147fcb15d3f59d2fe31ad)

[Maquina de estados](https://www.notion.so/Maquina-de-estados-dbeb70d0bb6c4cd8b13dbe29fb33456e)

**Periféricos internos de un Arduino:**

---

[Lectura de valores analógicos ](https://www.notion.so/Lectura-de-valores-anal-gicos-f9009968bedb4aaabb4d1f52d6bcdc19)

[Comunicación serial](https://www.notion.so/Comunicaci-n-serial-5768aa0065cf4ab885abc309ddd611dd)

[Escritura de “salidas analógicas”](https://www.notion.so/Escritura-de-salidas-anal-gicas-5b93997177714b529f1384936fc7fa81)

[Manejo de tiempos](https://www.notion.so/Manejo-de-tiempos-365ed95035e44c479b67ae770a606b85)

**Desarrollo de proyectos:**

---

[Sistemas de control](https://www.notion.so/Sistemas-de-control-bbb1114b364642308b1fbfb0ffadd508)

[Sensores y actuadores](https://www.notion.so/Sensores-y-actuadores-a279dcd7557846488d7a49a090046a1d)

[Interfaz con un ordenador personal ](https://www.notion.so/Interfaz-con-un-ordenador-personal-083070dab7364e99adfc45173a85ddc7)

---

