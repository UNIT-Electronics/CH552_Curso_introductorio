---
title: 10. Comunicación I2C
type: docs
weight: 10
BookToC: false
---

# Comunicación I2C
---
En la intersección de la innovación tecnológica y la creatividad visual, las pantallas OLED desempeñan un papel central. Este repositorio se enfoca en el proceso de configuración de un modelo específico: la pantalla OLED SSD1306. Hemos adaptado el código original de [Stefan Wagner](https://github.com/wagiminator) con el objetivo de lograr una comunicación eficiente y fluida en el chip ch552. Para lograrlo, utilizamos el protocolo I2C y el entorno de programación Arduino IDE.



<p align="center">
    <img src="/docs/10-Comunicacion_I2C/images/oled.png" alt="frecuecy">
</p>

Exploraremos los pasos fundamentales para realizar esta configuración, haciendo especial hincapié en la obtención del archivo `SSD1306`, la precisa adaptación de los parámetros de datos en armonía con el entorno ch55xduino y la consecuente capacidad de presentar mensajes de manera efectiva en la pantalla. Acompáñanos en esta travesía de integración tecnológica y expresión visual.



## Compilar proyecto
---

### Uso por Entorno

Puedes acceder al código de ejemplo utilizando la siguiente ruta:
```arduino
  File -> Examples -> Unit_SketchLab_Advance -> SSD1306.ino
```

### Uso por Descarga del Código


- Descarga el archivo:

<div style="text-align: center;">
    <a href="/docs/10-Comunicacion_I2C/code/SSD1306.zip" download="SSD1306.zip">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
           oled_hola_mundo.zip
        </button>
    </a>
</div>

- Dentro de la carpeta **SSD1306** existe un archivo que lleva por nombre `SSD1306.zip` abre el archivo con Arduino IDE.

### Configura el entorno con las siguientes especificaciones:
```c
   - Reloj: 16 MHz.
   - Método de carga: USB.
   - Ajuste de carga a: "USER CODE w/ 266B USB ram".

```
<div style="text-align: center;">
  <img src="/docs/9-Controlador_pwm/images/pwm1.png" alt="PWM" />
</div>

## Compilar y correr un programa
---

Carga un programa ingresando al modo de <strong>BOOT</strong> (cargador de arranque). Desconecte el cable USB, presione el botón <strong>BOOT</strong> en la tarjeta de desarrollo y luego vuelve a conectar a la PC.

<img src="/docs/3-Compilador_mcs51/images/pc_ch.png" alt="Imagen de ch552">

Presione cargar codigo y espere hasta que muestre el mensaje Reset OK.

<p align="center">
    <img src="/docs/3-Compilador_mcs51/images/ruin.png" alt="buttons_leds">
</p>



Para configurar nuestra pantalla OLED, hacemos uso del Arduino IDE para cargar los archivos. Por lo que para poder iniciar con nuestro despliesgue se necesita:


```c#
// Pin definitions
#define PIN_BUZZER          P33       // buzzer pin
#define PIN_SDA             P15       // I2C SDA
#define PIN_SCL             P32      // I2C SCL
```


El PIN BUZZER o de LED nos permite saber que la transmisión de los datos se ejecutó correctamente. Como se menciona no es necesaria su conexión a menos que se desee ocupar como alerta.

 


```js
// Conexión CH552 a LED:
// -------                                 CH552
//                                       +--\/--+
//     OLED (SDA) ---------------- P32  1|°     |16  V33 -------------
//                ---------------- P14  2|      |15  Vcc -------------
//     OLED (SCL) ---------------- P15  3|      |14  GND -------------
//                ---------------- P16  4|      |13  P37 UDM --- USB D-
//                ---------------- P17  5|      |12  P36 UDP --- USB D+
//                ---------------- RST  6|      |11  P34 -------------
//                ---------------- P31  7|      |10  P33 BUZZER or LED
//                ---------------- P30  8|      |9   P11 -------------
//                                       +------+
//                                          
//                                        OLED I2C SSD1306
//                                       +---------------+
//                                       | +---------+   |
//                                       | |         |   |
//                ----------- (SDA) -----| |         |   |
//                ----------- (SCL) -----| |         |   |
//                ------------ VCC  -----| |         |   |
//                ------------ GND  -----| |         |   |
//                                       | |         |   |
//                                       | +---------+   |
//                                       +---------------+
```



## Resultado
---

![](/docs/10-Comunicacion_I2C/images/oled2.png)


<div style="text-align: right">
    <h1><a href="/docs/11-comunicacion_neopixels/">Siguiente</a></h>
</div>



---
⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊