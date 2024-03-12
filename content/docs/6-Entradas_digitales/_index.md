---
title: 6. Entradas digitales
type: docs
weight: 6
BookToC: false
---

# Entradas digitales

### Introducción a la Lectura de Pines de Entrada Digital:

Este código permite interactuar con una entrada digital, en este caso, un botón conectado al pin `P1.1`. La lectura de este pin se realiza para determinar si el botón está presionado o no.


<p align="center">
    <img src="/docs/6-Entradas_digitales/images/input_res.png" alt="frecuecy">
</p>


### Ejercicios para Leer y Procesar Señales Digitales de Diferentes Fuentes:

Se utiliza un botón físico conectado al pin `P1.1` y un LED conectado al pin `P3.3` para representar la salida de la acción del botón. 

![](/docs/6-Entradas_digitales/images/squema_push_led.png)


La lógica del código implica que, cuando el botón está presionado (pin `P1.1` leído como LOW), se enciende el LED (HIGH), y cuando el botón está suelto, se apaga el LED (LOW).

### Aplicación de Lógica Condicional para el Manejo de Entradas Digitales:

Se utiliza una estructura de control if-else para evaluar el estado del botón y tomar decisiones en consecuencia.
<div style="text-align: right;">
    <a href="/docs/6-Entradas_digitales/code/input_digital.ino" download="input_digital.ino">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            Download 
        </button>
    </a>
</div>

```c
#include <Serial.h>

void setup() {
  // No need to init USBSerial
  pinMode(11, INPUT);
  pinMode(33, OUTPUT);
}

void loop() {
  // Leer el valor del botón en una variable
  int sensorVal = digitalRead(11);
  // Imprimir el valor del botón en el monitor serial
  USBSerial_println(sensorVal);
  if (sensorVal == HIGH) {
    digitalWrite(33, LOW);
  } else {
    digitalWrite(33, HIGH);
  }

  delay(10);
}
```
Este código sirve como una introducción práctica a la lectura de entradas digitales y la aplicación de lógica condicional en el entorno CH552 y Arduino. La relación entre la entrada del botón y la salida del LED demuestra la capacidad de interactuar con el entorno físico mediante la programación.


<p align="center">
    <img src="/docs/6-Entradas_digitales/images/com.png" alt="frecuecy">
</p>


<p align="center">
    <img src="/docs/6-Entradas_digitales/images/in.png" alt="frecuecy">
</p>


<p align="center">
    <img src="/docs/6-Entradas_digitales/images/input.gif" alt="frecuecy">
</p>

# Continua con el curso [](/)





---
⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊


