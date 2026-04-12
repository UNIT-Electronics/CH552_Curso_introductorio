---
title: 6. Entradas digitales
type: docs
weight: 6
BookToC: false
---

# Entradas digitales

---
Este cÃ³digo permite interactuar con una entrada digital, en este caso, un botÃ³n conectado al pin `P1.1`. La lectura de este pin se realiza para determinar si el botÃ³n estÃ¡ presionado o no.

Se utiliza un botÃ³n fÃ­sico conectado al pin `P1.1` y un LED conectado al pin `P3.3` para representar la salida de la acciÃ³n del botÃ³n. 

<p align="center">
    <img src="/docs/6-entradas_digitales/images/input_res.png" alt="esquema">
</p>


La lÃ³gica del cÃ³digo implica que, cuando el botÃ³n estÃ¡ presionado (pin `P1.1` leÃ­do como LOW), se enciende el LED (HIGH), y cuando el botÃ³n estÃ¡ suelto, se apaga el LED (LOW).

## CÃ³digo
---

> Puedes acceder al cÃ³digo de ejemplo, siguiendo la ruta: `File -> Examples -> Unit_SketchLab -> DigitalReadInput.ino`

Se utiliza una estructura de control if-else para evaluar el estado del botÃ³n y tomar decisiones en consecuencia.
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
  // Leer el valor del botÃ³n en una variable
  int sensorVal = digitalRead(11);
  // Imprimir el valor del botÃ³n en el monitor serial
  USBSerial_println(sensorVal);
  if (sensorVal == HIGH) {
    digitalWrite(33, LOW);
  } else {
    digitalWrite(33, HIGH);
  }

  delay(10);
}
```
Este cÃ³digo sirve como una introducciÃ³n prÃ¡ctica a la lectura de entradas digitales y la aplicaciÃ³n de lÃ³gica condicional en el entorno CH552 y Arduino. La relaciÃ³n entre la entrada del botÃ³n y la salida del LED demuestra la capacidad de interactuar con el entorno fÃ­sico mediante la programaciÃ³n.

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

## Resultados
---
<p align="center">
    <img src="/docs/6-entradas_digitales/images/input.gif" alt="frecuecy">
</p>

<div style="text-align: right">
    <h1><a href="/docs/7-entradas_open_drain/">Siguiente</a></h>
</div>



---
âŒ¨ï¸ con â¤ï¸ por [UNIT-Electronics](https://github.com/UNIT-Electronics) ðŸ˜Š


