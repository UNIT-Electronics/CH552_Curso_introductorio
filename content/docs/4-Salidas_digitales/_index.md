---
title: 4. Salidas Digitales
type: docs
weight: 4
BookToC: false
---

# Salidas Digitales

A continuación se presenta una descripción para el código que maneja las salidas digitales del CH552 utilizando la plataforma Arduino. Este código se enfoca en el control de pines de salida digital para encender y apagar LEDs, así como la implementación de secuencias lógicas sencillas.

### Configuración Inicial:

Se incluyen las bibliotecas necesarias para la comunicación con el CH552 en el entorno Arduino.

Se establecen las definiciones de pines, indicando qué pines del CH552 se utilizarán como salidas digitales.

```c#
#define LED_PIN 33   // Ejemplo: Pin 1 como salida digital
```

<p align="center">
    <img src="/docs/4-Salidas_digitales/images/a764d1bb-b3cf-442c-a767-f7a168104e75.png" alt="LED">
</p>

<div style="text-align: right;">
    <a href="/docs/4-Salidas_digitales/code/blink.ino" download="blink.ino">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            Download 
        </button>
    </a>
</div>


```c
#define LED_BUILTIN 33

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
                     // wait for a second
}
```
<p align="center">
    <img src="/docs/4-Salidas_digitales/images/frecuency.png" alt="frecuency">
</p>


![](/docs/4-Salidas_digitales/images/osci.png)

Para poder cargar el archivo, configura el entorno con las siguientes especificaciones:

```C
Reloj: 16 Mhz.

Método de carga: USB.

Ajuste de carga a:  "Default CDC".
```
<p align="center">
    <img src="/docs/4-Salidas_digitales/images/config.png" alt="LED">
</p>

**Función setup():** 

En la función setup(), se inicializan los pines de salida digital.
```c
void setup() {
  pinMode(LED_PIN, OUTPUT);
}
```
**Función loop():** 
La función loop() contiene el código principal que se ejecuta continuamente.

Se enciende y apaga el LED conectado al pin de salida digital en un ciclo.
```c

void loop() {
  digitalWrite(LED_PIN, HIGH);  // Encender el LED
  delay(1000);                   // Esperar 1 segundo
  digitalWrite(LED_PIN, LOW);   // Apagar el LED
  delay(1000);                   // Esperar 1 segundo
}
```
**Implementación de Secuencias Lógicas:**


```c
void loop() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    digitalWrite(LED_PIN, LOW);
    delay(500);
  }
  delay(1000);
}
```
**Observaciones Adicionales:**
```c
void loop() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    digitalWrite(LED_PIN, LOW);
    delay(500);
  }
  delay(1000);
}
```
**Observaciones Adicionales:** 

- Este código proporciona una introducción básica al manejo de salidas digitales en el CH552 con Arduino.

- Ajusta los valores de delay y las secuencias según sea necesario para cumplir con los requisitos específicos.

Este código simple puede servir como punto de partida para explorar y entender el control de salidas digitales en el CH552 mediante Arduino.




<p align="center">
    <img src="/docs/4-Salidas_digitales/images/blink.gif" alt="LED">
</p>
# Continua con el curso [](/) 




---
⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊