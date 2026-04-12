---
title: 10. ComunicaciÃ³n I2C
type: docs
weight: 10
BookToC: false
---

# ComunicaciÃ³n I2C
---
En la intersecciÃ³n de la innovaciÃ³n tecnolÃ³gica y la creatividad visual, las pantallas OLED desempeÃ±an un papel central. Este repositorio se enfoca en el proceso de configuraciÃ³n de un modelo especÃ­fico: la pantalla OLED SSD1306. Hemos adaptado el cÃ³digo original de [Stefan Wagner](https://github.com/wagiminator) con el objetivo de lograr una comunicaciÃ³n eficiente y fluida en el chip ch552. Para lograrlo, utilizamos el protocolo I2C y el entorno de programaciÃ³n Arduino IDE.



<p align="center">
    <img src="/docs/10-comunicacion_i2c/images/oled.png" alt="frecuecy">
</p>

Exploraremos los pasos fundamentales para realizar esta configuraciÃ³n, haciendo especial hincapiÃ© en la obtenciÃ³n del archivo `SSD1306`, la precisa adaptaciÃ³n de los parÃ¡metros de datos en armonÃ­a con el entorno ch55xduino y la consecuente capacidad de presentar mensajes de manera efectiva en la pantalla. AcompÃ¡Ã±anos en esta travesÃ­a de integraciÃ³n tecnolÃ³gica y expresiÃ³n visual.



## Compilar proyecto
---

### Uso por Entorno

Puedes acceder al cÃ³digo de ejemplo utilizando la siguiente ruta:
```arduino
  File -> Examples -> Unit_SketchLab_Advance -> SSD1306.ino
```

### Uso por Descarga del CÃ³digo


- Descarga el archivo:

<div style="text-align: center;">
    <a href="/docs/10-comunicacion_i2c/code/SSD1306.zip" download="SSD1306.zip">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
          SSD1306.zip
        </button>
    </a>
</div>

- Dentro de la carpeta **SSD1306** existe un archivo que lleva por nombre `SSD1306.zip` abre el archivo con Arduino IDE.

### Configura el entorno con las siguientes especificaciones:
```c
   - Reloj: 16 MHz.
   - MÃ©todo de carga: USB.
   - Ajuste de carga a: "USER CODE w/ 266B USB ram".

```
<div style="text-align: center;">
  <img src="/docs/9-controlador_pwm/images/pwm1.png" alt="PWM" />
</div>

## Compilar y correr un programa
---

Carga un programa ingresando al modo de <strong>BOOT</strong> (cargador de arranque). Desconecte el cable USB, presione el botÃ³n <strong>BOOT</strong> en la tarjeta de desarrollo y luego vuelve a conectar a la PC.

<img src="/docs/3-compilador_mcs51/images/pc_ch.png" alt="Imagen de ch552">

Presione cargar codigo y espere hasta que muestre el mensaje Reset OK.

<p align="center">
    <img src="/docs/3-compilador_mcs51/images/ruin.png" alt="buttons_leds">
</p>



Para configurar nuestra pantalla OLED, hacemos uso del Arduino IDE para cargar los archivos. Por lo que para poder iniciar con nuestro despliesgue se necesita:


```c#
// Pin definitions
#define PIN_BUZZER          P33       // buzzer pin
#define PIN_SDA             P15       // I2C SDA
#define PIN_SCL             P32      // I2C SCL
```


El PIN BUZZER o de LED nos permite saber que la transmisiÃ³n de los datos se ejecutÃ³ correctamente. Como se menciona no es necesaria su conexiÃ³n a menos que se desee ocupar como alerta.

 


```js
// ConexiÃ³n CH552 a LED:
// -------                                 CH552
//                                       +--\/--+
//     OLED (SDA) ---------------- P32  1|Â°     |16  V33 -------------
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

![](/docs/10-comunicacion_i2c/images/oled2.png)


<div style="text-align: right">
    <h1><a href="/docs/11-comunicacion_neopixels/">Siguiente</a></h>
</div>



---
âŒ¨ï¸ con â¤ï¸ por [UNIT-Electronics](https://github.com/UNIT-Electronics) ðŸ˜Š