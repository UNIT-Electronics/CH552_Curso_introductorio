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
Ejemplo: 
> Puedes acceder al código de ejemplo, siguiendo la ruta: `File -> Examples -> Unit_SketchLab -> AnalogInput.ino`

<div style="text-align: right;">
    <a href="/docs/8-Entradas_analogicas/code/adc.ino" download="AnalogInput.ino">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            Descarga AnalogInput.ino 
        </button>
    </a>
</div>

```c
#define LED_BUILTIN 34

int sensorPin = 11;    // select the input pin for the potentiometer. You may use P1.1, P1.4, P1.5 and P3.2
int ledPin = LED_BUILTIN; // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
  //By default 8051 enable every pin's pull up resistor. Disable pull-up to get full input range.
  pinMode(sensorPin, INPUT);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  // turn the ledPin on
  digitalWrite(ledPin, HIGH);
  // stop the program for <sensorValue> milliseconds:
  delay(sensorValue);
  // turn the ledPin off:
  digitalWrite(ledPin, LOW);
  // stop the program for for <sensorValue> milliseconds:
  delay(sensorValue);
}
```
## Descripción de código

Se lee el valor analógico del pin P1.1 utilizando analogRead().

Se usa la lectura del ADC de 0 a 255, para controlar el tiempo del `delay()` para el parpadeo del led. 


## Resultado

Este código permite entender cómo funciona la entrada analógica en el CH552, desde la lectura de valores analógicos hasta la conversión de esos valores en unidades de voltaje, lo que es fundamental al trabajar con sensores que proporcionan señales analógicas.


<p align="center">
<img src="/docs/8-Entradas_analogicas/images/cocket_nova.gif" alt="gif">
</p>

<div style="text-align: right">
    <h1><a href="/docs/9-controlador_pwm/">Siguiente</a></h>
</div>


---
⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊