---
title: 7. Entradas con drenaje abierto 
type: docs
weight: 7
BookToC: false
---

# Entradas con drenaje abierto 
---
La configuración de drenaje abierto es una técnica en la que la salida digital no está conectada directamente a Vcc o tierra, sino a través de un transistor que se activa para conducir a tierra. 

En el código, se configura el pin `P1.1` como entrada con la opción **INPUT_PULLUP**, lo que activa internamente una resistencia pull-up de 70K-ohm conectada a 5V. Esto significa que el pin se lee como **HIGH** cuando está abierto y **LOW** cuando está cerrado.



<p align="center">
    <img src="/docs/7-entradas_open_drain/images/open_drain.png" alt="frecuecy">
</p>


Se implementa un ejemplo práctico utilizando un interruptor momentáneo conectado desde el pin `P1.1` a tierra.


<p align="center">
    <img src="/docs/7-entradas_open_drain/images/squema_push_led.png" alt="frecuecy">
</p>


Cuando el interruptor está abierto, el valor de sensorVal será **HIGH**, indicando que el interruptor no está presionado. Cuando está cerrado, el valor será **LOW**, indicando que el interruptor está presionado.

## Uso de Resistencias de Pull-up y Pull-down en Conjunto con Salidas de Drenaje Abierto:

<p align="center">
    <img src="/docs/7-entradas_open_drain/images/fz_ch552.png" alt="frecuecy">
</p>

Se utiliza el pin `P3.3` como salida para un LED.



<div style="width: 100%; max-width: 800px; border: 1px solid #000; padding: 20px; margin: 10px auto; background-color: lightblue; border-radius: 15px; box-shadow: 5px 5px 10px rgba(0, 0, 0, 0.1); text-align: left;">
    <div style="font-weight: bold; font-size: 20px; color: #333; margin-bottom: 20px;">Nota</div>
    <div style="font-size: 16px; line-height: 1.5; color: #333;">
       Dado que la configuración de drenaje abierto puede invertir la lógica, el LED se enciende (HIGH) cuando el interruptor está presionado (cerrado) y se apaga (LOW) cuando está abierto.
    </div>
</div>

## Código
---
> Puedes acceder al código de ejemplo, siguiendo la ruta: `File -> Examples -> Unit_SketchLab -> DigitalOpenDrain.ino`

<div style="text-align: right;">
    <a href="/docs/7-entradas_open_drain/code/open_drain.ino" download="DigitalOpenDrain.ino">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            Descarga DigitalOpenDrain.ino
        </button>
    </a>
</div>

```c
#include <Serial.h>

void setup() {
  // No need to init USBSerial

  // Configurar el pin 2 como entrada y habilitar la resistencia pull-up interna
  pinMode(11, INPUT_PULLUP);
  pinMode(33, OUTPUT);
}

void loop() {
  // Leer el valor del botón en una variable
  int sensorVal = digitalRead(11);
  // Imprimir el valor del botón en el monitor serial
  USBSerial_println(sensorVal);

  // Dado que el pull-up significa que la lógica del botón está invertida,
  // encender el LED cuando el botón está presionado y apagarlo cuando está abierto:
  if (sensorVal == HIGH) {
    digitalWrite(33, LOW);
  } else {
    digitalWrite(33, HIGH);
  }

  delay(10);
}

```
Este código ilustra el uso de salidas digitales con configuración de drenaje abierto y cómo se puede integrar con entradas digitales utilizando la opción **INPUT_PULLUP**. La salida del LED se invierte lógicamente debido a la configuración de drenaje abierto, lo que resalta la necesidad de entender cómo afecta esta configuración a la lógica del sistema.



**Mensajes en el Monitor Serial**

Para visualizar información en el Monitor Serial, sigue estos pasos:

1. Dirígete a `Herramientas -> Puerto`, como se muestra en la siguiente imagen:

    <p align="center">
        <img src="/docs/6-entradas_digitales/images/com.png" alt="comserial">
    </p>

2. Se abrirá una interfaz donde podrás observar el estado del LED, dependiendo de si se ha presionado o no. En la siguiente imagen, se muestra un ejemplo de cómo se visualiza:

    <p align="center">
        <img src="/docs/6-entradas_digitales/images/in.png" alt="frecuecy">
    </p>

Esta interfaz en el Monitor Serial te proporciona información detallada sobre el estado del LED, permitiéndote monitorear fácilmente las interacciones y eventos asociados al botón. Utiliza esta herramienta para depurar y entender mejor el comportamiento de tu sistema en tiempo real.


<p align="center">
    <img src="/docs/7-entradas_open_drain/images/input4.gif" alt="frecuecy">
</p>


<div style="text-align: right">
    <h1><a href="/docs/8-entradas_analogicas/">Siguiente</a></h>
</div>


---
⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊

