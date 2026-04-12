---
title: 7. Entradas con drenaje abierto 
type: docs
weight: 7
BookToC: false
---

# Entradas con drenaje abierto 
---
La configuraciÃ³n de drenaje abierto es una tÃ©cnica en la que la salida digital no estÃ¡ conectada directamente a Vcc o tierra, sino a travÃ©s de un transistor que se activa para conducir a tierra. 

En el cÃ³digo, se configura el pin `P1.1` como entrada con la opciÃ³n **INPUT_PULLUP**, lo que activa internamente una resistencia pull-up de 70K-ohm conectada a 5V. Esto significa que el pin se lee como **HIGH** cuando estÃ¡ abierto y **LOW** cuando estÃ¡ cerrado.



<p align="center">
    <img src="/docs/7-entradas_open_drain/images/open_drain.png" alt="frecuecy">
</p>


Se implementa un ejemplo prÃ¡ctico utilizando un interruptor momentÃ¡neo conectado desde el pin `P1.1` a tierra.


<p align="center">
    <img src="/docs/7-entradas_open_drain/images/squema_push_led.png" alt="frecuecy">
</p>


Cuando el interruptor estÃ¡ abierto, el valor de sensorVal serÃ¡ **HIGH**, indicando que el interruptor no estÃ¡ presionado. Cuando estÃ¡ cerrado, el valor serÃ¡ **LOW**, indicando que el interruptor estÃ¡ presionado.

## Uso de Resistencias de Pull-up y Pull-down en Conjunto con Salidas de Drenaje Abierto:

<p align="center">
    <img src="/docs/7-entradas_open_drain/images/fz_ch552.png" alt="frecuecy">
</p>

Se utiliza el pin `P3.3` como salida para un LED.



<div style="width: 100%; max-width: 800px; border: 1px solid #000; padding: 20px; margin: 10px auto; background-color: lightblue; border-radius: 15px; box-shadow: 5px 5px 10px rgba(0, 0, 0, 0.1); text-align: left;">
    <div style="font-weight: bold; font-size: 20px; color: #333; margin-bottom: 20px;">Nota</div>
    <div style="font-size: 16px; line-height: 1.5; color: #333;">
       Dado que la configuraciÃ³n de drenaje abierto puede invertir la lÃ³gica, el LED se enciende (HIGH) cuando el interruptor estÃ¡ presionado (cerrado) y se apaga (LOW) cuando estÃ¡ abierto.
    </div>
</div>

## CÃ³digo
---
> Puedes acceder al cÃ³digo de ejemplo, siguiendo la ruta: `File -> Examples -> Unit_SketchLab -> DigitalOpenDrain.ino`

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
  // Leer el valor del botÃ³n en una variable
  int sensorVal = digitalRead(11);
  // Imprimir el valor del botÃ³n en el monitor serial
  USBSerial_println(sensorVal);

  // Dado que el pull-up significa que la lÃ³gica del botÃ³n estÃ¡ invertida,
  // encender el LED cuando el botÃ³n estÃ¡ presionado y apagarlo cuando estÃ¡ abierto:
  if (sensorVal == HIGH) {
    digitalWrite(33, LOW);
  } else {
    digitalWrite(33, HIGH);
  }

  delay(10);
}

```
Este cÃ³digo ilustra el uso de salidas digitales con configuraciÃ³n de drenaje abierto y cÃ³mo se puede integrar con entradas digitales utilizando la opciÃ³n **INPUT_PULLUP**. La salida del LED se invierte lÃ³gicamente debido a la configuraciÃ³n de drenaje abierto, lo que resalta la necesidad de entender cÃ³mo afecta esta configuraciÃ³n a la lÃ³gica del sistema.



**Mensajes en el Monitor Serial**

Para visualizar informaciÃ³n en el Monitor Serial, sigue estos pasos:

1. DirÃ­gete a `Herramientas -> Puerto`, como se muestra en la siguiente imagen:

    <p align="center">
        <img src="/docs/6-entradas_digitales/images/com.png" alt="comserial">
    </p>

2. Se abrirÃ¡ una interfaz donde podrÃ¡s observar el estado del LED, dependiendo de si se ha presionado o no. En la siguiente imagen, se muestra un ejemplo de cÃ³mo se visualiza:

    <p align="center">
        <img src="/docs/6-entradas_digitales/images/in.png" alt="frecuecy">
    </p>

Esta interfaz en el Monitor Serial te proporciona informaciÃ³n detallada sobre el estado del LED, permitiÃ©ndote monitorear fÃ¡cilmente las interacciones y eventos asociados al botÃ³n. Utiliza esta herramienta para depurar y entender mejor el comportamiento de tu sistema en tiempo real.


<p align="center">
    <img src="/docs/7-entradas_open_drain/images/input4.gif" alt="frecuecy">
</p>


<div style="text-align: right">
    <h1><a href="/docs/8-entradas_analogicas/">Siguiente</a></h>
</div>


---
âŒ¨ï¸ con â¤ï¸ por [UNIT-Electronics](https://github.com/UNIT-Electronics) ðŸ˜Š

