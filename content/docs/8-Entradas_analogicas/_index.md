---
title: 8. Entradas anÃ¡logicas
type: docs
weight: 8
BookToC: false
---

# Entradas anÃ¡logicas


El cÃ³digo se centra en la lectura de una entrada analÃ³gica utilizando el convertidor analÃ³gico a digital (ADC) del CH552.

El pin `P1.1` se configura como entrada analÃ³gica, y se utiliza la funciÃ³n `analogRead()` para obtener un valor digital proporcional al voltaje presente en ese pin.
<p align="center">
<img src="/docs/8-entradas_analogicas/images/adc.png" alt="adc">
</p>

## Esquema de conexiÃ³n
<p align="center">
    <img src="/docs/8-entradas_analogicas/images/pot_ch552.png" alt="frecuecy">
</p>


## CÃ³digo

Este tipo de cÃ³digo es Ãºtil para la lectura de sensores analÃ³gicos, como potenciÃ³metros o sensores de luz, donde la variaciÃ³n de voltaje proporciona informaciÃ³n sobre la cantidad medida.
Ejemplo: 
> Puedes acceder al cÃ³digo de ejemplo, siguiendo la ruta: `File -> Examples -> Unit_SketchLab -> AnalogInput.ino`

<div style="text-align: right;">
    <a href="/docs/8-entradas_analogicas/code/adc.ino" download="AnalogInput.ino">
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
## DescripciÃ³n de cÃ³digo

Se lee el valor analÃ³gico del pin P1.1 utilizando analogRead().

Se usa la lectura del ADC de 0 a 255, para controlar el tiempo del `delay()` para el parpadeo del led. 


## Resultado

Este cÃ³digo permite entender cÃ³mo funciona la entrada analÃ³gica en el CH552, desde la lectura de valores analÃ³gicos hasta la conversiÃ³n de esos valores en unidades de voltaje, lo que es fundamental al trabajar con sensores que proporcionan seÃ±ales analÃ³gicas.


<p align="center">
<img src="/docs/8-entradas_analogicas/images/cocket_nova.gif" alt="gif">
</p>

<div style="text-align: right">
    <h1><a href="/docs/9-controlador_pwm/">Siguiente</a></h>
</div>


---
âŒ¨ï¸ con â¤ï¸ por [UNIT-Electronics](https://github.com/UNIT-Electronics) ðŸ˜Š