---
title: 6. Entradas digitales
type: docs
weight: 6
BookToC: false
---

# Entradas digitales

---
Este código permite interactuar con una entrada digital, en este caso, un botón conectado al pin `P1.1`. La lectura de este pin se realiza para determinar si el botón está presionado o no.

Se utiliza un botón físico conectado al pin `P1.1` y un LED conectado al pin `P3.3` para representar la salida de la acción del botón. 

<p align="center">
    <img src="/docs/6-entradas_digitales/images/input_res.png" alt="esquema">
</p>


La lógica del código implica que, cuando el botón está presionado (pin `P1.1` leído como LOW), se enciende el LED (HIGH), y cuando el botón está suelto, se apaga el LED (LOW).

## Código
---

> Puedes acceder al código de ejemplo, siguiendo la ruta: `File -> Examples -> Unit_SketchLab -> DigitalReadInput.ino`

Se utiliza una estructura de control if-else para evaluar el estado del botón y tomar decisiones en consecuencia.
<div style="text-align: right;">
    <a href="/docs/6-entradas_digitales/code/input_digital.ino" download="DigitalReadInput.ino">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            Descarga DigitalReadInput.ino 
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

## Resultados
---
<p align="center">
    <img src="/docs/6-entradas_digitales/images/input.gif" alt="frecuecy">
</p>

<div style="text-align: right">
    <h1><a href="/docs/7-entradas_open_drain/">Siguiente</a></h>
</div>



---
⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊


