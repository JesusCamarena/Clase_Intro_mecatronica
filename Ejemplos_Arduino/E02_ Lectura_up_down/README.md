# 🟥 Ejemplo “**E02” - Lectura up - down**

---

En este ejemplo trata sobre la lectura secuencial de instrucciones en Arduino, que se refiere al proceso por el cual el microcontrolador ejecuta las instrucciones de un programa de manera secuencial, una tras otra desde el inicio hasta el final del programa. Se describe la velocidad de lectura de instrucciones en un microcontrolador de Arduino, y se detallan los retardos de tiempo y cómo agregarlos en un sketch de Arduino. Finalmente, se presenta un ejemplo de cómo escribir en pines digitales y se incluye una sección de análisis y corrección de problemas.

### 🔴 Selección de pines (Hardware)

---

- [**Arduino UNO**](https://store-usa.arduino.cc/products/arduino-uno-rev3?selectedStore=us)
- **Documentos Arduino UNO**
    
    [https://docs.arduino.cc/hardware/uno-rev3](https://docs.arduino.cc/hardware/uno-rev3)
    
    [Arduino UNO datasheet.pdf](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/09e02053-758a-4718-bc0d-f3427501147b/Arduino_UNO_datasheet.pdf)
    
    [Arduino UNO THT_schematics.pdf](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/6e0da3da-414c-4881-84b2-677c23ed2cd0/Arduino_UNO_THT_schematics.pdf)
    
    ![SRL-image-0 (1).png](https://www.notion.so/image/https%3A%2F%2Fs3-us-west-2.amazonaws.com%2Fsecure.notion-static.com%2F9c4ab46b-f27c-4ff2-82ed-f7b69604c35b%2FSRL-image-0_(1).png?id=d034c0a3-67d5-4767-907c-5ea3508ca1fc&table=block&spaceId=c14cd858-9512-406d-b68f-90710326c6aa&width=2000&userId=7df30413-c942-494a-a0b0-083e44fa7787&cache=v2)
    

- **[Arduino Nano para protoboard](https://store-usa.arduino.cc/products/arduino-nano?selectedStore=us)**
- **Documentos Arduino Nano**
    
    [https://docs.arduino.cc/hardware/nano](https://docs.arduino.cc/hardware/nano)
    
    [Arduino Nano datasheet.pdf](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/66bca46e-a162-40b1-88b6-3d33a1e521ef/Arduino_Nano_datasheet.pdf)
    
    [NanoV3.3_sch.pdf](https://s3-us-west-2.amazonaws.com/secure.notion-static.com/57a99021-4a6e-43b3-b6ac-36182a632aa5/NanoV3.3_sch.pdf)
    
    ![SRL-image-0.png](https://www.notion.so/image/https%3A%2F%2Fs3-us-west-2.amazonaws.com%2Fsecure.notion-static.com%2F3c9b7f3e-2e61-42f7-a355-785956c9b48d%2FSRL-image-0.png?id=386be8c7-c5b5-4485-92cd-6f91920417d5&table=block&spaceId=c14cd858-9512-406d-b68f-90710326c6aa&width=2000&userId=7df30413-c942-494a-a0b0-083e44fa7787&cache=v2)
    

### 🔴 Selección de pines (Hardware)

---

### 🔴 Flujo de diseño

---

### 1️⃣ **Diagrama de bloques**

[Diagrama](https://github.com/JesusCamarena/Clase_Intro_mecatronica/blob/bb68e8b30d1ae4086ffbb0f4e0d35db5ed94c46d/Ejemplos_Arduino/E02_%20Lectura_up_down/Images/E02_block_diagram.png)

---

### 2️⃣ **Circuito esquemático**

[E02_ Lectura_up_down.PDF](https://github.com/JesusCamarena/Clase_Intro_mecatronica/blob/main/Ejemplos_Arduino/E02_%20Lectura_up_down/Hardware/E02_%20Lectura_up_down.PDF)

---

### 3️⃣ **Diagrama de flujo - code2flow**

[code2flow - flowchart](https://app.code2flow.com/e4nruAJH62zt)

- High level code
    
    ```arduino
    inicio 
    {
      setup();
      while(loop)
      {
        something_0();
        delay();
        something_1();
        delay();
        something_n();
        delay();
      }
    }
    fin;
    ```
---

### 4️⃣ **Firmware**

[code](https://github.com/JesusCamarena/Clase_Intro_mecatronica/blob/bb68e8b30d1ae4086ffbb0f4e0d35db5ed94c46d/Ejemplos_Arduino/E02_%20Lectura_up_down/Frimware_E02/Frimware_E02.ino)

### 5️⃣ **Simulación**

[Circuit design E02_ Lectura_up_down | Tinkercad](https://www.tinkercad.com/things/drnqWRbf90d)

---

### 6️⃣ **Prototipado**

![Prototipado](https://github.com/JesusCamarena/Clase_Intro_mecatronica/blob/bb68e8b30d1ae4086ffbb0f4e0d35db5ed94c46d/Ejemplos_Arduino/E02_%20Lectura_up_down/Images/E02_%20Lectura_up_downl_fr_bb.png)

---

## 🟦Análisis y corrección de problemas ***(Troubleshooting)***⚠️

---

En el proceso de diseño de un sistema y la construcción de un prototipo se pueden presentar algunos errores, que se pueden clasificar en tres tipos:

1. **Errores en el diseño.**
    - Esquemático
        1. Asegúrate que estás representando todas las etapas del diagrama de bloques
        2. Revisa los números de parte de cada componente junto con sus especificaciones de su hoja de datos
    - Código
        1. Revisar que el código esté bien descrito como está planeado en el diagrama de flujo inicial
        2. Corre el debugger y monitorea los registros esperando a que tenga la información que buscas
    - Simulación
        1. Asegúrate que los componentes tengan los parámetros indicados, voltaje, resistencia principalmente
        2. Mide con un voltímetro digital la salida de los pines del dispositivo y las caídas de voltaje
        3. Verifica que el código que estás colocando en el circuito integrado es el correcto
2. **Errores en la implementación del prototipo.**
    1. A partir de tu esquemático conecta los componentes en la tablilla de conexiones
    2. Haz una inspección visual si falta algún alambre o componente no bien colocado, falso contacto, polaridad adecuada 
    3. Con un multímetro mide:
        1. El voltaje de alimentación general
        2. La alimentación adecuada de los circuitos integrados medido directamente en las terminales
        3. Las caídas de voltaje de cada componente
    4. Revisa que la temperatura de los componentes no sea muy alta y esté dentro del rango de operación 
    5. Verifica que el código se subió correctamente realizando alguna prueba sencilla
        1. Enciende un solo LED como salida
        2. Revisa un solo botón como entrada
3. **Componentes defectuosos.**
    1. Revisa la conectividad de tu protobard sin que este energizado
    2. Cambia de componente asegurándote que esté alimentado al voltaje que indica el datasheet

![Diagrama](https://www.notion.so/image/https%3A%2F%2Fs3-us-west-2.amazonaws.com%2Fsecure.notion-static.com%2F2f10f99f-9caf-4489-a4b1-cbbda85d4380%2FUntitled.png?id=747741c6-fba6-40f4-a5ab-dbe70686d36a&table=block&spaceId=c14cd858-9512-406d-b68f-90710326c6aa&width=2000&userId=7df30413-c942-494a-a0b0-083e44fa7787&cache=v2)

---

---

## :busts_in_silhouette: Autores
* [Jesus Camarena](https://www.notion.so/didyde/Profesor-universitario-Dise-ador-de-hardware-para-sistemas-embebidos-81703493db3c44c4a75b49b2d536ea19)

## :ballot_box_with_check: Historial de versiones
* 1.0
    * Initial Release

## Licencia

This project is licensed under the [NAME HERE] License - see the LICENSE.md file for details

## :speech_balloon: Agradecimientos

