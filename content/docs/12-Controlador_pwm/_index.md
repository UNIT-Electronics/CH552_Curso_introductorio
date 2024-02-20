---
title: 12. Configuración del PWM
type: docs
weight: 10
BookToC: false
---

# Configuración del PWM con CH552

El CH552 es un microcontrolador USB que ofrece versatilidad en las Entradas/Salidas, incluida la capacidad de generar señales PWM. En este ejemplo, te guiaré a través de la configuración del CH552 para generar señales PWM con una frecuencia y ciclo de trabajo específicos.

## Conceptos Básicos del PWM

La Modulación de Ancho de Pulso (PWM) es una técnica utilizada para controlar la potencia entregada a un dispositivo. Se logra variando la duración de una señal digital de alta frecuencia, controlando así la cantidad de potencia entregada al dispositivo. Esto es útil en diversas aplicaciones, como el control de motores, ajuste de brillo de LED y generación de señales analógicas.

## Ejemplo de Código PWM

Para probar el ejemplo, se recomienda el uso del Arduino IDE para cargar los archivos. Sigue estos pasos:

1. Descargar el archivo PWM.
2. Abre el archivo "pwm.ino" con Arduino IDE.
3. Configura el entorno con las siguientes especificaciones:
   - Reloj: 16 MHz.
   - Método de carga: USB.
   - Ajuste de carga a: "USER CODE /w 2866 USB RAM".
4. Completa la carga del código presionando el botón de boot mientras se conecta vía USB.

A continuación, se muestra un ejemplo de código que configura el CH552 para generar señales PWM:

```c
#include <Serial.h>

void setup() {
  // No es necesario inicializar USBSerial
  pinMode(11, OUTPUT);
}

void loop() {
  // Generar una señal PWM en el pin 11, P1.1:
  analogWrite(11, 127); // 50% de ciclo de trabajo
}
```



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
![](/docs/12-Controlador_pwm/images/pwm.gif)

## Continua con el curso [AQUI](/)
---


Descargar el código [AQUÍ](/).

## Continuación del Curso

Puedes continuar con el curso [AQUÍ](/).


⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊
 
