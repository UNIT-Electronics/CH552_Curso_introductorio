---
title: 11. Comunicación con neopixels
type: docs
weight: 10
BookToC: false
---

# Comunicación con neopixels 

El chip CH552 es un microcontrolador USB con capacidades de E/S versátiles en esta ocasión control de tiras de LED RGB programables individualmente conocidas como Neopixels. Hemos adaptado el código original de Stefan Wagner con el objetivo de lograr una comunicación eficiente y fluida en el chip ch552. Para conectar el chip CH552 a Neopixels, necesitarás entender los conceptos básicos de comunicación y control de Neopixels a través de protocolos como WS2812.

Los Neopixels utilizan el protocolo WS2812, que implica enviar una serie de bits que representan los valores de color para cada LED en la cadena. Se debe generar la secuencia de bits de acuerdo con las especificaciones del protocolo.

Aquí hay una guía general sobre cómo podrías conectar el chip CH552 a Neopixels:
```c
// -------   c                              CH552
//                                       +--\/--+
//           OUT  ---------------- P32  1|°     |16  V33 -------------
//                ---------------- P14  2|      |15  Vcc -------------
//                ---------------- P15  3|      |14  GND -------------
//                ---------------- P16  4|      |13  P37 UDM --- USB D-
//                ---------------- P17  5|      |12  P36 UDP --- USB D+
//                ---------------- RST  6|      |11  P34 -------------
//                ---------------- P31  7|      |10  P33 -------------
//                ---------------- P30  8|      |9   P11 -------------
//                                       +------+

```

Conexiones físicas: Conecta la salida de datos del Neopixel (generalmente marcada como "DIN" o "Data Input") a un pin de salida del chip CH552 para este ejemplo usaremos el PIN P32. Asegúrate de que los niveles de voltaje sean compatibles (generalmente 5V).

Fuente de Alimentación: Asegúrate de tener una fuente de alimentación adecuada para los Neopixels. Pueden requerir más corriente de la que el chip CH552 puede proporcionar directamente, regularmente un led WS2812 a su máximo brillo puede llegar a consumir hasta 60 mA.
Configurando el entorno! 👋
Utiliza el software de programación compatible con el chip CH552 para enviar los comandos adecuados a los Neopixels.

![](/content/docs/11-Comunicacion_neopixels/images/buttons.png)
 Código Ejemplo: Neopixel_lite
Para comprobar el funcionamiento de nuestro ejemplo, recomendamos uso del Arduino IDE para cargar los archivos (Guia_config_ch552).

Por lo que para poder iniciar con nuestro despliesgue se necesita:

Descargar el archivo Neopixel_lite.

Dentro de la carpeta encontrarás un archivo que lleva por nombre "neopixel_lite.ino" abre el archivo con Arduino IDE.

 

Para poder cargar el archivo, configura el entorno con las siguientes especificaciones:

```C

Reloj: 16 Mhz.

Método de carga: USB.

Ajuste de carga a:  "USER CODE /w 2866 USB RAM".
```

```C
// Pin definitions

#define PIN_NEO             P32          // GPIO Utilizado para este ejemplo
```


```C
#include "src/config.h"   // user configurations
#include "src/system.h"   // system functions
#include "src/delay.h"    // delay functions
#include "src/neo.h"      // NeoPixel functions
#include <stdlib.h>       // for random number generation

// ===================================================================================
// NeoPixel Functions
// ===================================================================================


#define delay 100
#define NeoPixel 8 // Number Neopixel conect
#define level 64 // Ilumination level 0 to 255

void randomColorSequence(void) {

  for(int j=0;j<NeoPixel;j++){
      uint8_t red = rand() % level;
      uint8_t green = rand() % level;
      uint8_t blue = rand() % level;
      uint8_t num = rand() % NeoPixel;

      for(int i=0; i<num; i++){
        NEO_writeColor(0, 0, 0);
      }
      NEO_writeColor(red, green, blue);
      DLY_ms(delay);
      NEO_writeColor(0, 0, 0);
    }
    
    for(int l=0; l<9; l++){
        NEO_writeColor(0, 0, 0);
      }

}

void colorSequence(void) {
 
  for(int j=0;j<=NeoPixel;j++){
        uint8_t red = rand() % level;
        uint8_t green = rand() % level;
        uint8_t blue = rand() % level;
      for(int i=0; i<j; i++){
        NEO_writeColor(red, green, blue);
      }
      DLY_ms(delay);
      for(int l=0; l<j; l++){
        NEO_writeColor(0, 0, 0);
      }
  }
}

// ===================================================================================
// Main Function
// ===================================================================================
void main(void) {
  NEO_init();                       // init NeoPixels
  CLK_config();                     // configure system clock
  DLY_ms(delay);                       // wait for clock to settle

  // Loop
  while (1) {
    randomColorSequence();
    DLY_ms(1000);
    colorSequence();
    DLY_ms(1000);
  }
}
```
![](/docs/11-Comunicacion_neopixels/images/NEO.gif)

Puedes cambiar la configuración de velocidad y número Neopixels, así como nivel de iluminación.

```

#define delay 100

#define NeoPixel 16 // Number Neopixel conect

#define level 64 // Ilumination level 0 to 255
```



# Continua con el curso [](/)

Para completar la carga del código, presiona el botón de boot mientras se conecta vía USB.

<div style="text-align: right;">
    <a href="" download=".ino">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            Download 
        </button>
    </a>
</div>


⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊
 
