---
title: 9. ConfiguraciÃ³n del PWM
type: docs
weight: 9
BookToC: false
---

# ConfiguraciÃ³n del PWM 
---
El CH552 es un microcontrolador USB que ofrece versatilidad en las Entradas/Salidas, incluida la capacidad de generar seÃ±ales PWM. En este ejemplo, se te guiarÃ¡ a travÃ©s de la configuraciÃ³n del CH552 para generar seÃ±ales PWM con una frecuencia y ciclo de trabajo especÃ­ficos.

### Conceptos BÃ¡sicos

La ModulaciÃ³n de Ancho de Pulso (PWM) es una tÃ©cnica utilizada para controlar la potencia entregada a un dispositivo. Se logra variando la duraciÃ³n de una seÃ±al digital de alta frecuencia, controlando asÃ­ la cantidad de potencia entregada al dispositivo. Esto es Ãºtil en diversas aplicaciones, como el control de motores, ajuste de brillo de LED y generaciÃ³n de seÃ±ales analÃ³gicas.

## Uso del proyecto

### Uso por Entorno 

Puedes acceder al cÃ³digo de ejemplo utilizando la siguiente ruta:
```arduino
  File -> Examples -> Unit_SketchLab_Advance -> PWM.ino
```

### Uso por Descarga del CÃ³digo

- Descarga el archivo haciendo clic en el siguiente enlace:


<div style="text-align: center;">
  <a href="/docs/9-controlador_pwm/code/PWM.zip" download="PWM.zip">
    <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
      PWM.zip
    </button>
  </a>
</div>


- Dentro de la carpeta **CH552-PWM** existe un archivo que lleva por nombre `CH552-PWM.ino` abre el archivo con Arduino IDE.

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

Presione cargar codigo y espere hasta que muestre el mensaje Resetok.
<p align="center">
    <img src="/docs/3-compilador_mcs51/images/ruin.png" alt="buttons_leds">
</p>


**A continuaciÃ³n, se describe el funcionamiento del cÃ³digo para generar seÃ±ales PWM:**

Al abrir el IDE, este despliega dos archivos. Dado que Arduino actÃºa simplemente como un compilador, la estructura del cÃ³digo presentado experimentarÃ¡ cambios al ser procesado. Por lo tanto, se sugiere abrir el proyecto completo utilizando un editor de cÃ³digo preferido.

En este contexto, se recomienda el uso de <a href="https://code.visualstudio.com/" target="_blank">Visual Studio Code</a>. El primer archivo corresponde a una interfaz de compilaciÃ³n. Este entorno de desarrollo proporciona una visiÃ³n integral del proyecto, permitiendo un manejo mÃ¡s eficiente y una comprensiÃ³n mÃ¡s profunda de la estructura del cÃ³digo.
```c
#ifndef USER_USB_RAM
#error "This firmware needs to be compiled with a USER USB setting"
#endif

unsigned char _sdcc_external_startup (void) __nonbanked {
  return 0;
}

```
El segundo abre el cÃ³digo que permite hacer la funciÃ³n deseada:

 Este cÃ³digo incluye funciones para cambiar la seÃ±al PWM y un bucle principal que realiza transiciones suaves.



```c
#include <stdio.h>
#include "src/config.h"
#include "src/system.h"
#include "src/gpio.h"
#include "src/delay.h"
#include "src/pwm.h"

#define MIN_COUNTER 10
#define MAX_COUNTER 254
#define STEP_SIZE   10

void change_pwm(int hex_value)
{
  PWM_write(PIN_PWM, hex_value);
}
void main(void) 
{
  PWM_set_freq(1000);                    
  PIN_output(PIN_PWM);       
  PWM_start(PIN_PWM);      
  PWM_write(PIN_PWM, 0);
  CLK_config();                          
  DLY_ms(5);                            

while (1) 
{
  for (int i = MIN_COUNTER; i < MAX_COUNTER; i+=STEP_SIZE) 
  {
    change_pwm(i);
    DLY_ms(10);
  }
  for (int i = MAX_COUNTER; i > MIN_COUNTER; i-=STEP_SIZE)
  {
    change_pwm(i);
    DLY_ms(10);
  }
  
}
}

```

El cÃ³digo proporciona una implementaciÃ³n prÃ¡ctica de PWM utilizando el microcontrolador CH552 y el entorno de desarrollo Arduino IDE. Se ha incorporado un bucle principal que ejecuta transiciones suaves en la salida PWM, lo cual resulta aplicable en diversas situaciones prÃ¡cticas. Entre estas aplicaciones, se destacan el control de motores para lograr movimientos suaves y el ajuste gradual de la intensidad luminosa de una fuente de luz.

De manera predeterminada, la tarjeta de desarrollo del CH552 cuenta con un LED conectado al pin `P3.4`, y la configuraciÃ³n especÃ­fica se encuentra en el archivo `scr\config.h`.
```html
// Pin definitions
#define PIN_BUZZER          P33       // buzzer pin
#define PIN_SDA             P31       // I2C SDA
#define PIN_SCL             P30       // I2C SCL
#define PIN_ADC             P11       // pin used as ADC input<--
#define PIN_PWM             P34       // PWM pin  -->
#define PIN_BUTTON          P15       // button pin
#define PIN_BUTTON2         P32      // button pin
#define PIN_BUT_START       P16      // button pin


```




## Resultado
---

<div style="text-align: center;">
  <img src="/docs/9-controlador_pwm/images/led.gif" alt="LED" />
</div>

<div style="text-align: center;">
  <img src="/docs/9-controlador_pwm/images/pwm.gif" alt="PWM" />
</div>

<div style="text-align: right">
    <h1><a href="/docs/10-comunicacion_i2c/">Siguiente</a></h>
</div>



âŒ¨ï¸ con â¤ï¸ por [UNIT-Electronics](https://github.com/UNIT-Electronics) ðŸ˜Š
 
