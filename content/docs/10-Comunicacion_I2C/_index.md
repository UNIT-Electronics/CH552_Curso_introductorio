---
title: 10. Comunicación I2C
type: docs
weight: 10
BookToC: false
---

# Comunicación I2C
Configuración OLED I2C SSD1306
En la intersección de la innovación tecnológica y la creatividad visual, las pantallas OLED desempeñan un papel central. Este repositorio se enfoca en el proceso de configuración de un modelo específico: la pantalla OLED SSD1306. Hemos adaptado el código original de Stefan Wagner con el objetivo de lograr una comunicación eficiente y fluida en el chip ch552. Para lograrlo, utilizamos el protocolo I2C y el entorno de programación Arduino IDE.




<p align="center">
    <img src="/docs/10-Comunicacion_I2C/images/oled.png" alt="frecuecy">
</p>

Exploraremos los pasos fundamentales para realizar esta configuración, haciendo especial hincapié en la obtención del archivo `oled_hola_mundo`, la precisa adaptación de los parámetros de datos en armonía con el entorno ch55xduino y la consecuente capacidad de presentar mensajes de manera efectiva en la pantalla. Acompáñanos en esta travesía de integración tecnológica y expresión visual.

Para configurar nuestra pantalla OLED, hacemos uso del Arduino IDE para cargar los archivos. Por lo que para poder iniciar con nuestro despliesgue se necesita:




```c#
// Pin definitions

#define PIN_BUZZER          P33       // buzzer pin

#define PIN_SDA             P31       // I2C SDA

#define PIN_SCL             P30      // I2C SCL


```
```c#
// Pin definitions
#define PIN_BUZZER          P33       // buzzer pin
#define PIN_SDA             P31       // I2C SDA
#define PIN_SCL             P30      // I2C SCL
```
<div style="text-align: right;">
    <a href="" download=".ino">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            Download 
        </button>
    </a>
</div>

El PIN BUZZER o de LED nos permite saber que la transmisión de los datos se ejecutó correctamente. Como se menciona no es necesaria su conexión a menos que se desee ocupar como alerta.

 

El PIN BUZZER o de LED nos permite saber que la transmisión de los datos se ejecutó correctamente. Como se menciona no es necesaria su conexión a menos que se desee ocupar como alerta.

```js
// Conexión CH552 a LED:
// -------                                 CH552
//                                       +--\/--+
//     OLED (SDA) ---------------- P32  1|°     |16  V33 -------------
//                ---------------- P14  2|      |15  Vcc -------------
//                ---------------- P15  3|      |14  GND -------------
//                ---------------- P16  4|      |13  P37 UDM --- USB D-
//                ---------------- P17  5|      |12  P36 UDP --- USB D+
//                ---------------- RST  6|      |11  P34 -------------
//     OLED (SCL) ---------------- P31  7|      |10  P33 BUZZER or LED
//                ---------------- P30  8|      |9   P11 -------------
//                                       +------+
//                                          
//                                        OLED I2C SSD1306
//                                       +---------------+
//                                       | +---------+   |
//                                       | |         |   |
//                ----------- (SDA) -----| |         |   |
//                ----------- (SCL) -----| |         |   |
//                ------------ VCC  -----| |         |   |
//                ------------ GND  -----| |         |   |
//                                       | |         |   |
//                                       | +---------+   |
//                                       +---------------+
```
Para poder cargar el archivo configura el entorno con las siguiente especificaciones:

```c
Reloj: 16 Mhz.

Método de carga: USB.

Ajuste de carga a:  "USER CODE /w 2866 USB RAM"
```
Para completar la carga del código, presiona el botón de boot mientras se conecta vía USB.


La configuración de la conexión, se encuentra asignada en el archivo de la ruta scr/config.h
![](/docs/10-Comunicacion_I2C/images/buttons.png)


![](/docs/10-Comunicacion_I2C/images/oled2.png)


<div style="text-align: right">
    <h1><a href="/docs/11-comunicacion_neopixels/">Siguiente</a></h>
</div>



---
⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊