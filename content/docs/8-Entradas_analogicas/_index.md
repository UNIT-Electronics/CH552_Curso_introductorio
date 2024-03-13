---
title: 8. Entradas análogicas
type: docs
weight: 8
BookToC: false
---

# Entradas análogicas


El código se centra en la lectura de una entrada analógica utilizando el convertidor analógico a digital (ADC) del CH552.

El pin `P1.1` se configura como entrada analógica, y se utiliza la función `analogRead()` para obtener un valor digital proporcional al voltaje presente en ese pin.
<p align="center">
<img src="/docs/8-Entradas_analogicas/images/adc.png" alt="adc">
</p>

## Esquema de conexión
<p align="center">
    <img src="/docs/8-Entradas_analogicas/images/pot_ch552.png" alt="frecuecy">
</p>


## Código

Este tipo de código es útil para la lectura de sensores analógicos, como potenciómetros o sensores de luz, donde la variación de voltaje proporciona información sobre la cantidad medida.

<div style="text-align: right;">
    <a href="/docs/8-Entradas_analogicas/code/adc.ino" download="adc.ino">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            Descarga adc.ino 
        </button>
    </a>
</div>

```c
#include <Serial.h>

void setup() {
  // No es necesario inicializar USBSerial

  pinMode(11, INPUT);
}

void loop() {
  // Leer la entrada en el pin analógico 0, P1.1:
  int sensorValue = analogRead(11);
  // Convertir la lectura analógica (que va de 0 a 255) a un voltaje (0 a 3.3V):
  float voltage = sensorValue * (3.3 / 255.0);
  // Imprimir el valor leído:
  USBSerial_println(voltage);
  // O con precisión:
  //USBSerial_println(voltage,1);

  delay(10);
}
```
## Descripción de código

Se lee el valor analógico del pin P1.1 utilizando analogRead().

Se convierte este valor (que va de 0 a 255) a un voltaje en el rango de 0 a 3.3V utilizando una simple fórmula. 

## Resultado
Se muestra en la interfaz de visualización plotter.
<p align="center">
    <img src="/docs/8-Entradas_analogicas/images/potter.png" alt="plotter">
</p>

![](/docs/8-Entradas_analogicas/images/adc.gif)

Este código permite entender cómo funciona la entrada analógica en el CH552, desde la lectura de valores analógicos hasta la conversión de esos valores en unidades de voltaje, lo que es fundamental al trabajar con sensores que proporcionan señales analógicas.


<div style="text-align: right">
    <h1><a href="/docs/9-controlador_pwm/">Siguiente</a></h>
</div>


---
⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊