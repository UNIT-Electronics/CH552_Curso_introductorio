---
title: 7. Entradas con drenaje abierto 
type: docs
weight: 7
BookToC: false
---

# Entradas con drenaje abierto 
Descripción del Código para Salidas Digitales con Configuración de Drenaje Abierto (OPEN DRAIN):


La configuración de drenaje abierto es una técnica en la que la salida digital no está conectada directamente a Vcc o tierra, sino a través de un transistor que se activa para conducir a tierra. 

En el código, se configura el pin `P1.1` como entrada con la opción **INPUT_PULLUP**, lo que activa internamente una resistencia pull-up de 70K-ohm conectada a 5V. Esto significa que el pin se lee como **HIGH** cuando está abierto y **LOW** cuando está cerrado.



<p align="center">
    <img src="/docs/7-Entradas_open_drain/images/open_drain.png" alt="frecuecy">
</p>


Se implementa un ejemplo práctico utilizando un interruptor momentáneo conectado desde el pin `P1.1` a tierra.

![](/docs/7-Entradas_open_drain/images/squema_push_led.png)

Cuando el interruptor está abierto, el valor de sensorVal será **HIGH**, indicando que el interruptor no está presionado. Cuando está cerrado, el valor será **LOW**, indicando que el interruptor está presionado.

c. Uso de Resistencias de Pull-up y Pull-down en Conjunto con Salidas de Drenaje Abierto:

Se utiliza el pin P3.3 como salida para un LED.

Dado que la configuración de drenaje abierto puede invertir la lógica, el LED se enciende (HIGH) cuando el interruptor está presionado (cerrado) y se apaga (LOW) cuando está abierto.
<div style="text-align: right;">
    <a href="/docs/7-Entradas_open_drain/code/open_drain.ino" download="open_drain.ino">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            Download 
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



<p align="center">
    <img src="/docs/6-Entradas_digitales/images/com.png" alt="frecuecy">
</p>


<p align="center">
    <img src="/docs/6-Entradas_digitales/images/in.png" alt="frecuecy">
</p>

\
<p align="center">
    <img src="/docs/7-Entradas_open_drain/images/input4.gif" alt="frecuecy">
</p>



# Continua con el curso [](/)


#### Referencias

---
⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊

