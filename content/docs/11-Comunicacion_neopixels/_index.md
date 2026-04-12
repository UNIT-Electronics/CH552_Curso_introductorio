---
title: 11. Comunicación con neopixels
type: docs
weight: 11
BookToC: false
---

# Comunicación con neopixels 

La tarjeta de desarrollo cuenta con capacidades de E/S versátiles en esta ocasión control de tiras de LED RGB programables individualmente conocidas como Neopixels. Hemos adaptado el código original de [Stefan Wagner](https://github.com/wagiminator) con el objetivo de lograr una comunicación eficiente y fluida en el chip ch552.

Los Neopixels utilizan el protocolo WS2812, que implica enviar una serie de bits que representan los valores de color para cada LED en la cadena. Se debe generar la secuencia de bits de acuerdo con las especificaciones del protocolo.

Aquí hay una guía general sobre cómo podrías conectar el chip CH552 a las tiras de Neopixels:

  <p align="center">
    <img src="/docs/11-comunicacion_neopixels/images/neopixel.png" alt="neopixel">
</p>

## Compilar proyecto
---

### Uso por Entorno

Puedes acceder al código de ejemplo utilizando la siguiente ruta:
```arduino
  File -> Examples -> Unit_SketchLab_Advance -> WS2812.ino
```

### Uso por Descarga del Código
Para probar el ejemplo, es necesario seguir los siguientes pasos:

- Descarga el archivo:

  <div style="text-align: center;">
      <a href="/docs/11-comunicacion_neopixels/code/WS2812.zip" download="WS2812.zip">
       <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            WS2812.zip
       </button>
      </a>
  </div>

- Dentro de la carpeta **WS2812** existe un archivo que lleva por nombre `WS2812.ino` abre el archivo con Arduino IDE.

### Configura el entorno con las siguientes especificaciones:

```c
   - Reloj: 16 MHz.
   - Método de carga: USB.
   - Ajuste de carga a: "USER CODE w/ 266B USB ram".
```

<div style="text-align: center;">
  <img src="/docs/9-controlador_pwm/images/pwm1.png" alt="PWM" />
</div>

## Compilar y correr un programa
---

Carga un programa ingresando al modo de <strong>BOOT</strong> (cargador de arranque). Desconecte el cable USB, presione el botón <strong>BOOT</strong> en la tarjeta de desarrollo y luego vuelve a conectar a la PC.

<img src="/docs/3-compilador_mcs51/images/pc_ch.png" alt="Imagen de ch552">

Presione cargar código y espere hasta que muestre el mensaje Reset `ok`.

<p align="center">
    <img src="/docs/3-compilador_mcs51/images/ruin.png" alt="buttons_leds">
</p>


**Conexiones físicas:** Conecta la salida de datos del Neopixel a un pin de salida del chip CH552 para este ejemplo usaremos el PIN P33. 

**Fuente de Alimentación:** Asegúrate de tener una fuente de alimentación adecuada para los Neopixels. Pueden requerir más corriente de la que el chip CH552 puede proporcionar directamente, regularmente un led WS2812 a su máximo brillo puede llegar a consumir hasta 60 mA.


## Resultado
---

<div style="text-align: center;">
  <img src="/docs/11-comunicacion_neopixels/images/NEO.gif" alt="GIF">
</div>

Puedes cambiar la configuración de velocidad y número Neopixels, así como nivel de iluminación.

```c

#define delay 100

#define NeoPixel 16 // Number Neopixel conect

#define level 64 // Ilumination level 0 to 255
```


Para completar la carga del código, presiona el botón de boot mientras se conecta vía USB.

<div style="text-align: right">
    <h1><a href="/docs/12-comunicacion_serial/">Siguiente</a></h>
</div>


⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊
 
