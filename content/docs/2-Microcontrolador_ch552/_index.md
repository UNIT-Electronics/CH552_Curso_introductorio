---
title: 2. Cocket Nova CH552G
type: docs
weight: 2
BookToC: false
---
# Cocket Nova [Microcontrolador CH552G]()
---
La propuesta de prÃ¡cticas para la tarjeta de desarrollo Cocket Nova, diseÃ±ada para llevar a los usuarios a un aprendizaje bÃ¡sico-intermedio. Este programa busca facilitar la comprensiÃ³n de los conceptos fundamentales de la tarjeta de desarrollo Cocket Nova CH552, asÃ­ como el uso del microcontrolador y las diversas aplicaciones que pueden desarrollarse mediante su empleo.

La Cocket Nova, caracterizada por su tamaÃ±o compacto, conectividad USB nativa, y una memoria de 16 KB (con 14 KB utilizables), posibilita la creaciÃ³n de programas simples pero eficaces. Lo que permite un mayor control en la implementaciÃ³n de diversas aplicaciones. La elecciÃ³n de este microcontrolador se basa en su asequibilidad, facilidad de conexiÃ³n y compatibilidad con varios sistemas operativos.

# Pinout de la tarjeta
---
<p align="center">
    <img src="/docs/2-microcontrolador_ch552/images/ch552_pinout.jpg" alt="ch552_pinout">
</p>
<div style="text-align: right;">
    <a href="/docs/2-microcontrolador_ch552/images/ch552_pinout.jpg" download="PinOut_CH552.jpg">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            Descargar PinOut
        </button>
    </a>
</div>

# Condiciones recomendadas de operaciÃ³n
---


| SÃ­mbolo | DescripciÃ³n                              | MÃ­nimo | TÃ­pico | MÃ¡ximo | Unidades |
|---------|------------------------------------------|--------|--------|--------|----------|
| VUSB    | Voltaje de alimentaciÃ³n vÃ­a USB           | 3.14   | 3.3/5  | 5.255  | V        |
| VIn     | Voltaje de alimentaciÃ³n desde los pines   | 2.7    | 3.3/5  | 5.5    | V        |
| Top     | Temperatura de operaciÃ³n                  | -40    | 25     | 85     | Â°C       |

# Modo de trabajo 

## Selector de Voltaje

La tarjeta de desarrollo utiliza un ingenioso sistema de selector de voltaje compuesto por tres pines y un jumper switch. La configuraciÃ³n de estos pines determina el voltaje de operaciÃ³n de la tarjeta. Al conectar el pin central al pin +5V a travÃ©s del jumper, la tarjeta funciona a 5V. Por otro lado, al conectar el pin central al pin +3.3V, se activa el regulador APK2112K, alimentando la tarjeta a 3.3V. Es crucial asegurarse de que el jumper switch estÃ© en la posiciÃ³n correcta segÃºn el voltaje deseado para evitar posibles daÃ±os a los mÃ³dulos, componentes y/o a la tarjeta misma.
<p align="center">
    <img src="/docs/2-microcontrolador_ch552/images/selector.png" alt="selector">
</p>


## Conectores JST

La tarjeta presenta dos conectores JST de 1 mm, vinculados a distintos pines. El primer conector se conecta directamente a los GPIO 3.0 y 3.1 del microcontrolador, mientras que el segundo se enlaza a los pines 3.2 y 1.5. Ambos conectores operan en paralelo al voltaje de alimentaciÃ³n seleccionado mediante el jumper switch. Estos conectores son compatibles con protocolos QWIIC, STEMMA QT u otros de distribuciÃ³n de pines similar. Es esencial verificar que el voltaje del selector coincida con el del sistema para evitar daÃ±os a los circuitos. AdemÃ¡s, estos conectores permiten la alimentaciÃ³n de la tarjeta y ofrecen funcionalidades como PWM y comunicaciÃ³n serial.
<p align="center">
    <img src="/docs/2-microcontrolador_ch552/images/jst.png" alt="jst">
</p>

## LEDs Built-IN

La tarjeta cuenta con dos LEDs directamente vinculados al microcontrolador. El primero se conecta al pin 3.4, mientras que el segundo es un LED Neopixel conectado al pin 3.3. Este Neopixel proporciona una salida con dos headers, uno conectado a la salida de datos y otro a la tierra de la tarjeta, permitiendo la conexiÃ³n externa de mÃ¡s LEDs. Para utilizar esta salida, simplemente conecta el pin DOUT al pin DIN del siguiente LED en la fila. En cuanto a la alimentaciÃ³n, puedes emplear el pin VCC, siempre y cuando los LEDs externos puedan funcionar con este voltaje. En caso contrario, serÃ¡ necesario alimentarlos mediante una fuente externa.

<p align="center">
    <img src="/docs/2-microcontrolador_ch552/images/neopixel.png" alt="jst">
</p>

<!-- # Continua con el curso [](/) -->

<div style="text-align: right">
    <h1><a href="/docs/3-compilador_mcs51/">Siguiente</a></h>
</div>

âŒ¨ï¸ con â¤ï¸ por [UNIT-Electronics](https://github.com/UNIT-Electronics) ðŸ˜Š