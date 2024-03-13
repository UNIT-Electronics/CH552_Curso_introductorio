---
title: 9. Configuración del PWM
type: docs
weight: 9
BookToC: false
---

# Configuración del PWM 
El CH552 es un microcontrolador USB que ofrece versatilidad en las Entradas/Salidas, incluida la capacidad de generar señales PWM. En este ejemplo, se te guiará a través de la configuración del CH552 para generar señales PWM con una frecuencia y ciclo de trabajo específicos.

## Conceptos Básicos del PWM

La Modulación de Ancho de Pulso (PWM) es una técnica utilizada para controlar la potencia entregada a un dispositivo. Se logra variando la duración de una señal digital de alta frecuencia, controlando así la cantidad de potencia entregada al dispositivo. Esto es útil en diversas aplicaciones, como el control de motores, ajuste de brillo de LED y generación de señales analógicas.

## Ejemplo de Código PWM

Para probar el ejemplo, es necesario seguir los siguientes estos pasos:

1. Descargar el archivo:

<div style="text-align: center;">
    <a href="/docs/9-Controlador_pwm/codes/CH552-PWM.zip" download="CH552-PWM.zip">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            CH552-PWM.zip
        </button>
    </a>
</div>

2. Abre el archivo `CH552-PWM.ino` con Arduino IDE.
3. Configura el entorno con las siguientes especificaciones:
```c
   - Reloj: 16 MHz.
   - Método de carga: USB.
   - Ajuste de carga a: "USER CODE /w 2866 USB RAM".

```

4. Completa la carga del código presionando el botón de boot mientras se conecta vía USB.

A continuación, se decribe el funcionamiento del codigo para generar señales PWM:

El IDE abre dos archivos, el primero es un interfaz de compilación:
```c
#ifndef USER_USB_RAM
#error "This firmware needs to be compiled with a USER USB setting"
#endif

unsigned char _sdcc_external_startup (void) __nonbanked {
  return 0;
}

```
El segundo abre el código que permite hacer la función deseada:

```c
/** @file CH552-PWM.c (SOURCE)
 *
 *  @brief CH552 PWM example
 *
 *  @author @CesarBautista 
 *
 *  @bug No known bugs.
 */

/******************************************************************************
 * INCLUDES
 *****************************************************************************/

#include <stdio.h>
#include "src/config.h"                   // user configurations
#include "src/system.h"                   // system functions
#include "src/gpio.h"                     // for GPIO
#include "src/delay.h"                    // for delays
#include "src/pwm.h"

/******************************************************************************
 * MACROS AND DEFINES
 *****************************************************************************/

#define MIN_COUNTER 10
#define MAX_COUNTER 254
#define STEP_SIZE   10

/******************************************************************************
 * TYPEDEFS
 *****************************************************************************/

/******************************************************************************
 * PUBLIC FUNCTION PROTOTYPES
 *****************************************************************************/

void change_pwm(int hex_value)
{
    PWM_write(PIN_PWM, hex_value);
}
void main(void) 
{
    PWM_set_freq(1000);                    
    PIN_output(PIN_PWM);       
    PWM_start(PIN_PWM);      
    PWM_write(PIN_PWM, 0);
    CLK_config();                          
    DLY_ms(5);                            

while (1) 
{
    for (int i = MIN_COUNTER; i < MAX_COUNTER; i+=STEP_SIZE) 
    {
        change_pwm(i);
        DLY_ms(10);
    }
    for (int i = MAX_COUNTER; i > MIN_COUNTER; i-=STEP_SIZE)
    {
        change_pwm(i);
        DLY_ms(10);
    }
    
}
}
```
Dado que arduino solo es nuestro compilador el codigo que se te presenta cambia su estructura, por lo que debes abrir el proyecto completo con tu editor de codigo favorito:

Se te recomienda el uso de <a href="https://code.visualstudio.com/" target="_blank">Visual Studio Code</a>



# Aplicaciones Prácticas del PWM

El código proporciona una implementación práctica de PWM utilizando el microcontrolador CH552 y Arduino IDE. Se incluye un bucle principal que realiza transiciones suaves de la salida PWM, aplicable en situaciones prácticas como el control de motores para lograr movimientos suaves o el ajuste gradual de la intensidad luminosa de una fuente de luz.

## Configuración para Arduino IDE

El código está diseñado para ser utilizado con el microcontrolador CH552 y se integra con el entorno de desarrollo Arduino IDE. Asegúrate de tener instalada la biblioteca ch55xduino y sigue las instrucciones proporcionadas para la compilación. Se especifican opciones de configuración del board, como la fuente de reloj, el método de carga y la configuración USB.

```c
// Configuración para Arduino IDE
// ...

#ifndef USER_USB_RAM
#error "This firmware needs to be compiled with a USER USB setting"
#endif

unsigned char _sdcc_external_startup (void) __nonbanked {
  return 0;
}
```

Descargar el código para Arduino IDE [AQUÍ](/).

## Código Fuente para CH552

Adicionalmente, se proporciona el código fuente en C para el microcontrolador CH552. Este código incluye funciones para cambiar la señal PWM y un bucle principal que realiza transiciones suaves.

```c
// Código fuente para CH552
// ...

void change_pwm(int hex_value) {
    PWM_write(PIN_PWM, hex_value);
}

void main(void) {
    // Configuración del PWM y otros ajustes
    // ...

    while (1) {
        // Bucle principal con transiciones suaves
        // ...
    }
}
```

Descargar el código fuente para CH552 [AQUÍ](/).

![](/docs/9-Controlador_pwm/images/pwm.gif)

<div style="text-align: right">
    <h1><a href="/docs/10-comunicacion_i2c/">Siguiente</a></h>
</div>



⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊
 
