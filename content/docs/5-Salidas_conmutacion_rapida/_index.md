---
title: 5. Salidas de conmutación rápida
type: docs
weight: 5
BookToC: false
---

# Salidas de conmutación rápida



Descripción del Código para mejorar la conmutación de mayor velocidad.
```c#
// P33
#define LED_BUILTIN_PORT 3
#define LED_BUILTIN_PIN 3
```


Este código para el CH552 se enfoca en la implementación de conmutación rápida de un LED en el pin P3.3.


<p align="center">
    <img src="/docs/5-Salidas_conmutacion_rapida/images/led.png" alt="LED">
</p>



<div style="text-align: right;">
    <a href="/docs/5-Salidas_conmutacion_rapida/code/blinkfast.ino" download="blinkfast.ino">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            Download 
        </button>
    </a>
</div>

 
```c
// La función de configuración se ejecuta una vez al presionar el botón de reinicio o encender la placa
void setup() {
  // Inicializar el pin digital LED_BUILTIN como salida.
  pinModeFast(LED_BUILTIN_PORT, LED_BUILTIN_PIN, OUTPUT);
}

// La función de loop se ejecuta una y otra vez infinitamente
void loop() {
  digitalWriteFast(LED_BUILTIN_PORT, LED_BUILTIN_PIN, HIGH);   // encender el LED (HIGH es el nivel de voltaje)
  delay(1000);                       // esperar un segundo
  digitalWriteFast(LED_BUILTIN_PORT, LED_BUILTIN_PIN, LOW);    // apagar el LED al hacer que el voltaje sea LOW
  delay(1000);                       // esperar un segundo
}
```
<p align="center">
    <img src="/docs/4-Salidas_digitales/images/blink.gif" alt="LED">
</p>

## Explicación:

- Se define el puerto `(LED_BUILTIN_PORT)` y el pin `(LED_BUILTIN_PIN)` del LED integrado en la placa.

- En la función `setup()`, se configura el pin del LED como salida utilizando `pinModeFast()`.

- En la función `loop()`, se utiliza digitalWriteFast() para alternar rápidamente entre encender y apagar el LED con intervalos de 1 segundo usando delay(1000).

### Notas Adicionales:

Se emplea la versión rápida de digitalWrite (`digitalWriteFast`) para lograr conmutaciones más eficientes y rápidas.

La frecuencia de conmutación está determinada por el tiempo de espera (delay). Puedes ajustar el tiempo de espera según tus necesidades.

Este código es un ejemplo básico de cómo lograr una conmutación rápida en un pin digital en el CH552 utilizando las funciones de manipulación de pines rápidas disponibles.


```cpp
#define LED_BUILTIN_PORT 1
#define LED_BUILTIN_PIN 1

// La función de configuración se ejecuta una vez al presionar el botón de reinicio o encender la placa
void setup() {
  // Inicializar el pin digital LED_BUILTIN como salida.
  pinModeFast(LED_BUILTIN_PORT, LED_BUILTIN_PIN, OUTPUT);
}

// La función de loop se ejecuta una y otra vez infinitamente
void loop() {
  digitalWriteFast(LED_BUILTIN_PORT, LED_BUILTIN_PIN, HIGH);   // encender el LED (HIGH es el nivel de voltaje)
//   delay(1000);                       // esperar un segundo
  digitalWriteFast(LED_BUILTIN_PORT, LED_BUILTIN_PIN, LOW);    // apagar el LED al hacer que el voltaje sea LOW
//   delay(1000);                       // esperar un segundo
}

```

<p align="center">
    <img src="/docs/5-Salidas_conmutacion_rapida/images/spped_frequency.png" alt="frecuecy">
</p>




![](/docs/5-Salidas_conmutacion_rapida/images/osci.png)



---
⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊


