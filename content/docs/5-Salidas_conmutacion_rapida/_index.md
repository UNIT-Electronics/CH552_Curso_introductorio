---
title: 5. Salidas de conmutaciÃ³n rÃ¡pida
type: docs
weight: 5
BookToC: false
---
# Salidas de ConmutaciÃ³n RÃ¡pida
---
A diferencia de las [Salidas Digitales](/), el siguiente ejemplo mejora la conmutaciÃ³n logrando una velocidad superior. Algunos cambios en el cÃ³digo, como las definiciones de los pines, son necesarios:

```c#
// P33
#define LED_BUILTIN_PORT 3
#define LED_BUILTIN_PIN 3
```

Este cÃ³digo para el CH552 se enfoca en la implementaciÃ³n de la conmutaciÃ³n rÃ¡pida de un LED en el pin P3.3.

## Diagrama de ConexiÃ³n
---
<p align="center">
    <img src="/docs/4-salidas_digitales/images/ouput_led.png" alt="frecuecy">
</p>

## CÃ³digo
---

Ejemplo: 
> Puedes acceder al cÃ³digo de ejemplo, siguiendo la ruta: `Archivo -> Ejemplos -> Unit_SketchLab -> BlinkFastFuntion`

<div style="text-align: right;">
    <a href="/docs/5-salidas_conmutacion_rapida/code/blinkfast.ino" download="blinkfast.ino">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            Descarga Blinkfast.ino
        </button>
    </a>
</div>

```c
// La funciÃ³n de configuraciÃ³n se ejecuta una vez al presionar el botÃ³n de reinicio o encender la placa
void setup() {
  // Inicializar el pin digital LED_BUILTIN como salida.
  pinModeFast(LED_BUILTIN_PORT, LED_BUILTIN_PIN, OUTPUT);
}

// La funciÃ³n de loop se ejecuta una y otra vez infinitamente
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

MÃ©todo de carga: USB.

Ajuste de carga a:Â  "Default CDC".
```


<p align="center">
    <img src="/docs/4-salidas_digitales/images/config.png" alt="LED">
</p>


Carga un programa ingresando al modo de <strong>BOOT</strong> (cargador de arranque). Desconecte el cable USB, presione el botÃ³n <strong>BOOT</strong> en la tarjeta de desarrollo y luego vuelve a conectar a la PC.

<img src="/docs/3-compilador_mcs51/images/pc_ch.png" alt="Imagen de ch552">

## Resultados
---
<p align="center">
    <img src="/docs/4-salidas_digitales/images/blink.gif" alt="LED">
</p>

## ExplicaciÃ³n
---
- Se definen el puerto `(LED_BUILTIN_PORT)` y el pin `(LED_BUILTIN_PIN)` del LED integrado en la placa.

- En la funciÃ³n `setup()`, se configura el pin del LED como salida utilizando `pinModeFast()`.

- En la funciÃ³n `loop()`, se utiliza `digitalWriteFast()` para alternar rÃ¡pidamente entre encender y apagar el LED con intervalos de 1 segundo usando `delay(1000)`.

### Notas Adicionales:

La frecuencia de conmutaciÃ³n estÃ¡ determinada por el tiempo de espera (`delay`). Puedes ajustar el tiempo de espera segÃºn tus necesidades.

Este cÃ³digo es un ejemplo bÃ¡sico de cÃ³mo lograr una conmutaciÃ³n rÃ¡pida en un pin digital en el CH552 utilizando las funciones de manipulaciÃ³n de pines rÃ¡pidas disponibles.

```cpp
#define LED_BUILTIN_PORT 3
#define LED_BUILTIN_PIN 3

// La funciÃ³n de configuraciÃ³n se ejecuta una vez al presionar el botÃ³n de reinicio o encender la placa
void setup() {
Â  // Inicializar el pin digital LED_BUILTIN como salida.
Â  pinModeFast(LED_BUILTIN_PORT, LED_BUILTIN_PIN, OUTPUT);
}

// La funciÃ³n de loop se ejecuta una y otra vez infinitamente
void loop() {
  digitalWriteFast(LED_BUILTIN_PORT, LED_BUILTIN_PIN, HIGH);   // encender el LED (HIGH es el nivel de voltaje)
//   delay(1000);                       // esperar un segundo
  digitalWriteFast(LED_BUILTIN_PORT, LED_BUILTIN_PIN, LOW);    // apagar el LED al hacer que el voltaje sea LOW
//   delay(1000);                       // esperar un segundo
}
```

## VisualizaciÃ³n con Osciloscopio
---
Similar a la prÃ¡ctica anterior, se ilustra la conexiÃ³n de la salida del `pin 3.3` al osciloscopio.

<p align="center">
    <img src="/docs/5-salidas_conmutacion_rapida/images/led.png" alt="LED">
</p>

Sin embargo, al considerar que se trabaja con una frecuencia de mayor velocidad, alcanza aproximadamente los 400 kHz.

<p align="center">
    <img src="/docs/5-salidas_conmutacion_rapida/images/spped_frequency.png" alt="frecuecy">
</p>

Como se puede apreciar en esta imagen:

![Osciloscopio](/docs/5-salidas_conmutacion_rapida/images/osci.png)


<div style="text-align: right">
    <h1><a href="/docs/6-entradas_digitales/">Siguiente</a></h>
</div>

---
âŒ¨ï¸ con â¤ï¸ por [UNIT-Electronics](https://github.com/UNIT-Electronics) ðŸ˜Š


