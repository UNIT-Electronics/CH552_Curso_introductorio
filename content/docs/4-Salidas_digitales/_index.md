---
title: 4. Salidas Digitales
type: docs
weight: 4
BookToC: false
---

# Salidas Digitales
---
El desarrollo de este ejemplo se enfoca en el control de pines de salida digital para encender y apagar LEDs, asÃ­ como la implementaciÃ³n de secuencias lÃ³gicas sencillas.


## Esquema de conexiÃ³n
---
<p align="center">
    <img src="/docs/4-salidas_digitales/images/ouput_led.png" alt="salida led">
</p>

## CÃ³digo
---
Ejemplo: 
> Puedes acceder al cÃ³digo de ejemplo, siguiendo la ruta: `Archivo -> Ejemplos -> Unit_SketchLab -> Blink`


<div style="text-align: right;">
    <a href="/docs/4-salidas_digitales/code/blink.ino" download="blink.ino">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            Descarga BLINK.ino
        </button>
    </a>
</div>

> **Nota:** El cÃ³digo mostrado funciona para el LED integrado en la tarjeta de desarrollo, ubicado en el pin 34. Para entender el funcionamiento de las salidas, cambia LED_BUILTIN a 33.

```c
#define LED_BUILTIN 34 // 34 to 33



// the setup function runs once when you press reset or power the board
void setup() {
Â  // initialize digital pin LED_BUILTIN as an output.
Â  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
Â  digitalWrite(LED_BUILTIN, HIGH); Â  // turn the LED on (HIGH is the voltage level)
Â  Â  Â  Â  Â  Â  Â  Â  Â  Â  Â  // wait for a second
Â  digitalWrite(LED_BUILTIN, LOW); Â  Â // turn the LED off by making the voltage LOW
Â  Â  Â  Â  Â  Â  Â  Â  Â  Â  Â // wait for a second
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

## Estructura del programa
---
**FunciÃ³n setup():** 

En la funciÃ³n setup(), se inicializan los pines de salida digital.
```c
void setup() {
  pinMode(LED_PIN, OUTPUT);
}
```
**FunciÃ³n loop():** 

La funciÃ³n loop() contiene el cÃ³digo principal que se ejecuta continuamente.

Se enciende y apaga el LED conectado al pin de salida digital en un ciclo.
```c

void loop() {
  digitalWrite(LED_PIN, HIGH);  // Encender el LED
  delay(1000);                   // Esperar 1 segundo
  digitalWrite(LED_PIN, LOW);   // Apagar el LED
  delay(1000);                   // Esperar 1 segundo
}
```
**ImplementaciÃ³n de Secuencias LÃ³gicas:**


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



Este cÃ³digo simple puede servir como punto de partida para explorar y entender el control de salidas digitales en el CH552 mediante Arduino.

## Resultados
<p align="center">
    <img src="/docs/4-salidas_digitales/images/blink.gif" alt="LED">
</p>

**VisualizaciÃ³n con Osciloscopio**

En el proceso de exploraciÃ³n y anÃ¡lisis de las salidas digitales, se emplea un osciloscopio para obtener una representaciÃ³n visual precisa. El diagrama siguiente ilustra la conexiÃ³n de la salida del `pin 3.3` al osciloscopio.

<p align="center">
    <img src="/docs/4-salidas_digitales/images/a764d1bb-b3cf-442c-a767-f7a168104e75.png" alt="LED">
</p>

Este diagrama captura la frecuencia base, configurada en el cÃ³digo, alcanzando aproximadamente 70 kHz. La representaciÃ³n grÃ¡fica revela el intercambio constante entre cambios de instrucciones, proporcionando una visiÃ³n clara de la dinÃ¡mica de la seÃ±al.

<p align="center">
    <img src="/docs/4-salidas_digitales/images/frecuency.png" alt="frecuency">
</p>

La Ãºltima imagen destaca el papel fundamental del osciloscopio como herramienta central para la observaciÃ³n y mediciÃ³n precisa de las seÃ±ales digitales. Su capacidad para ofrecer una representaciÃ³n visual detallada contribuye de manera significativa a un anÃ¡lisis minucioso y eficaz de las salidas digitales en el entorno de desarrollo.

![Osciloscopio](/docs/4-salidas_digitales/images/osci.png)

<div style="text-align: right">
    <h1><a href="/docs/5-salidas_conmutacion_rapida/">Siguiente</a></h>
</div>



---
âŒ¨ï¸ con â¤ï¸ por [UNIT-Electronics](https://github.com/UNIT-Electronics) ðŸ˜Š