---
title: 5. Salidas de conmutación rápida
type: docs
weight: 5
BookToC: false
---
# Salidas de Conmutación Rápida
---
A diferencia de las [Salidas Digitales](/), el siguiente ejemplo mejora la conmutación logrando una velocidad superior. Algunos cambios en el código, como las definiciones de los pines, son necesarios:

```c#
// P33
#define LED_BUILTIN_PORT 3
#define LED_BUILTIN_PIN 3
```

Este código para el CH552 se enfoca en la implementación de la conmutación rápida de un LED en el pin P3.3.

## Diagrama de Conexión
---
<p align="center">
    <img src="/docs/4-Salidas_digitales/images/ouput_led.png" alt="frecuecy">
</p>

## Código
---

Ejemplo: 
> Puedes acceder al código de ejemplo, siguiendo la ruta: `Archivo -> Ejemplos -> Unit_SketchLab -> BlinkFastFuntion`

<div style="text-align: right;">
    <a href="/docs/5-Salidas_conmutacion_rapida/code/blinkfast.ino" download="blinkfast.ino">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            Descarga Blinkfast.ino
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
  digitalWriteFast(LED_BUILTIN_PORT, LED_BUILTIN_PIN, HIGH);   // Encender el LED (HIGH es el nivel de voltaje)
  delay(1000);                       // Esperar un segundo
  digitalWriteFast(LED_BUILTIN_PORT, LED_BUILTIN_PIN, LOW);    // Apagar el LED al hacer que el voltaje sea LOW
  delay(1000);                       // Esperar un segundo
}
```
## Compilar y correr un programa
---
Para poder cargar el archivo, configura el entorno con las siguientes especificaciones:

```C
Reloj: 16 Mhz.

Método de carga: USB.

Ajuste de carga a:  "Default CDC".
```


<p align="center">
    <img src="/docs/4-Salidas_digitales/images/config.png" alt="LED">
</p>


Carga un programa ingresando al modo de <strong>BOOT</strong> (cargador de arranque). Desconecte el cable USB, presione el botón <strong>BOOT</strong> en la tarjeta de desarrollo y luego vuelve a conectar a la PC.

<img src="/docs/3-Compilador_mcs51/images/pc_ch.png" alt="Imagen de ch552">

## Resultados
---
<p align="center">
    <img src="/docs/4-Salidas_digitales/images/blink.gif" alt="LED">
</p>

## Explicación
---
- Se definen el puerto `(LED_BUILTIN_PORT)` y el pin `(LED_BUILTIN_PIN)` del LED integrado en la placa.

- En la función `setup()`, se configura el pin del LED como salida utilizando `pinModeFast()`.

- En la función `loop()`, se utiliza `digitalWriteFast()` para alternar rápidamente entre encender y apagar el LED con intervalos de 1 segundo usando `delay(1000)`.

### Notas Adicionales:

La frecuencia de conmutación está determinada por el tiempo de espera (`delay`). Puedes ajustar el tiempo de espera según tus necesidades.

Este código es un ejemplo básico de cómo lograr una conmutación rápida en un pin digital en el CH552 utilizando las funciones de manipulación de pines rápidas disponibles.

```cpp
#define LED_BUILTIN_PORT 3
#define LED_BUILTIN_PIN 3

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

## Visualización con Osciloscopio
---
Similar a la práctica anterior, se ilustra la conexión de la salida del `pin 3.3` al osciloscopio.

<p align="center">
    <img src="/docs/5-Salidas_conmutacion_rapida/images/led.png" alt="LED">
</p>

Sin embargo, al considerar que se trabaja con una frecuencia de mayor velocidad, alcanza aproximadamente los 400 kHz.

<p align="center">
    <img src="/docs/5-Salidas_conmutacion_rapida/images/spped_frequency.png" alt="frecuecy">
</p>

Como se puede apreciar en esta imagen:

![Osciloscopio](/docs/5-Salidas_conmutacion_rapida/images/osci.png)


<div style="text-align: right">
    <h1><a href="/docs/6-entradas_digitales/">Siguiente</a></h>
</div>

---
⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊


