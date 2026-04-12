---
title: 2. Cocket Nova CH552G
type: docs
weight: 2
BookToC: false
---
# Cocket Nova [Microcontrolador CH552G]()
---
La propuesta de prácticas para la tarjeta de desarrollo Cocket Nova, diseñada para llevar a los usuarios a un aprendizaje básico-intermedio. Este programa busca facilitar la comprensión de los conceptos fundamentales de la tarjeta de desarrollo Cocket Nova CH552, así como el uso del microcontrolador y las diversas aplicaciones que pueden desarrollarse mediante su empleo.

La Cocket Nova, caracterizada por su tamaño compacto, conectividad USB nativa, y una memoria de 16 KB (con 14 KB utilizables), posibilita la creación de programas simples pero eficaces. Lo que permite un mayor control en la implementación de diversas aplicaciones. La elección de este microcontrolador se basa en su asequibilidad, facilidad de conexión y compatibilidad con varios sistemas operativos.

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

# Condiciones recomendadas de operación
---


| Símbolo | Descripción                              | Mínimo | Típico | Máximo | Unidades |
|---------|------------------------------------------|--------|--------|--------|----------|
| VUSB    | Voltaje de alimentación vía USB           | 3.14   | 3.3/5  | 5.255  | V        |
| VIn     | Voltaje de alimentación desde los pines   | 2.7    | 3.3/5  | 5.5    | V        |
| Top     | Temperatura de operación                  | -40    | 25     | 85     | °C       |

# Modo de trabajo 

## Selector de Voltaje

La tarjeta de desarrollo utiliza un ingenioso sistema de selector de voltaje compuesto por tres pines y un jumper switch. La configuración de estos pines determina el voltaje de operación de la tarjeta. Al conectar el pin central al pin +5V a través del jumper, la tarjeta funciona a 5V. Por otro lado, al conectar el pin central al pin +3.3V, se activa el regulador APK2112K, alimentando la tarjeta a 3.3V. Es crucial asegurarse de que el jumper switch esté en la posición correcta según el voltaje deseado para evitar posibles daños a los módulos, componentes y/o a la tarjeta misma.
<p align="center">
    <img src="/docs/2-microcontrolador_ch552/images/selector.png" alt="selector">
</p>


## Conectores JST

La tarjeta presenta dos conectores JST de 1 mm, vinculados a distintos pines. El primer conector se conecta directamente a los GPIO 3.0 y 3.1 del microcontrolador, mientras que el segundo se enlaza a los pines 3.2 y 1.5. Ambos conectores operan en paralelo al voltaje de alimentación seleccionado mediante el jumper switch. Estos conectores son compatibles con protocolos QWIIC, STEMMA QT u otros de distribución de pines similar. Es esencial verificar que el voltaje del selector coincida con el del sistema para evitar daños a los circuitos. Además, estos conectores permiten la alimentación de la tarjeta y ofrecen funcionalidades como PWM y comunicación serial.
<p align="center">
    <img src="/docs/2-microcontrolador_ch552/images/jst.png" alt="jst">
</p>

## LEDs Built-IN

La tarjeta cuenta con dos LEDs directamente vinculados al microcontrolador. El primero se conecta al pin 3.4, mientras que el segundo es un LED Neopixel conectado al pin 3.3. Este Neopixel proporciona una salida con dos headers, uno conectado a la salida de datos y otro a la tierra de la tarjeta, permitiendo la conexión externa de más LEDs. Para utilizar esta salida, simplemente conecta el pin DOUT al pin DIN del siguiente LED en la fila. En cuanto a la alimentación, puedes emplear el pin VCC, siempre y cuando los LEDs externos puedan funcionar con este voltaje. En caso contrario, será necesario alimentarlos mediante una fuente externa.

<p align="center">
    <img src="/docs/2-microcontrolador_ch552/images/neopixel.png" alt="jst">
</p>

<!-- # Continua con el curso [](/) -->

<div style="text-align: right">
    <h1><a href="/docs/3-compilador_mcs51/">Siguiente</a></h>
</div>

⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊