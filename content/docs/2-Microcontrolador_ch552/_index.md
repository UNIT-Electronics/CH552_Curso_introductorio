---
title: 2. Microcontrolador CH552G
type: docs
weight: 2
BookToC: false
---
# Microcontrolador CH552G
## Introducción

La propuesta de prácticas para el microcontrolador CH552, diseñada para llevar a los usuarios a un aprendizaje básico-intermedio. Este programa busca facilitar la comprensión de los conceptos fundamentales de la tarjeta, así como el uso del microcontrolador y las diversas aplicaciones que pueden desarrollarse mediante su empleo.

El CH552, caracterizado por su tamaño compacto, conectividad USB nativa, y una memoria de 16 KB (con 14 KB utilizables), posibilita la creación de programas simples pero eficaces. Esto permite un mayor control en la implementación de diversas aplicaciones. La elección de este microcontrolador se basa en su asequibilidad, facilidad de conexión y compatibilidad con varios sistemas operativos.


<p align="center">
    <img src="/docs/3-Arduino_y_ch552/images/ch552_pinout.jpg" alt="ch552_pinout">
</p>

## Microcontrolador CH552G.

El CH552 es un MCU de núcleo E8051 mejorado, compatible con el conjunto de instrucciones MCS51. Admite una frecuencia de reloj de hasta 24 MHz. Tiene una memoria ROM de programa de 16K incorporada, iRAM interna de 256 bytes y xRAM interna de 1K byte. Y xRAM admite acceso directo a memoria (DMA). Además viene incorporado con ADC, detección de tecla táctil capacitiva, 3 temporizadores y captura de señal y PWM, 2 UART, SPI, controlador de dispositivo USB y transceptor de velocidad completa y otros módulos funcionales.

<p align="center">
    <img src="/docs/2-Microcontrolador_ch552/images/arquitectura.png" alt="arquitectura">
</p>


- Núcleo de CPU E8051 mejorado, la velocidad es de 8 a 15 veces más rápida que la del estándar MCS51, con instrucciones especiales de copia rápida de datos XRAM.

- Memoria de código Flash de 16KB incorporada, 1KB de XRAM y 256B de iRAM interna. 128B de DataFlash. Soporta lectura/escritura por bytes.

- BootLoader incorporado de 2KB. ISP a través de USB o UART. Se proporciona una biblioteca ISP.

- Controlador USB y transceptor USB incorporados que admiten el modo de dispositivo USB, detección maestro/esclavo USB tipo C, transferencia USB2.0 de velocidad completa (12Mbps) y baja velocidad (1.5Mbps). Soporta hasta 64 bytes de paquetes de datos, con FIFO incorporado y soporte para DMA.

- Controlador USB y transceptor USB incorporados que admiten el modo maestro/esclavo de USB2.0 a velocidad completa y baja velocidad, con soporte para hasta 64 bytes de paquetes de datos, FIFO incorporado y soporte para DMA.

- 3 temporizadores/contadores. 2 capturas de señal de canal y 2 salidas PWM.

- 2 UARTs full-dúplex que admiten comunicación de alta velocidad de baudios. UART0 es un puerto serie estándar MCS51.

- Una interfaz de comunicación SPI con FIFO incorporado que admite modo maestro/esclavo.

- ADC de 4 canales de 8 bits. Comparador de voltaje.

- Detección capacitiva de 6 canales, hasta 15 teclas táctiles. Soporte para interrupción de temporización independiente.

- 4 fuentes de señal de reinicio. Restablecimiento incorporado al encender. Restablecimiento por desbordamiento del software y del watchdog, y reinicio externo.

- Fuente de reloj incorporada de 24MHz y PLL. También se admite un oscilador de cristal externo `(CH552T)`.

- Regulador de voltaje bajo incorporado de 5V a 3.3V, compatible con voltajes de suministro de 5V, 3.3V e incluso 2.8V. Soporta modo de bajo consumo de energía y permite el despertar externo a través de USB, UART0, UART1, SPI0 y partes de GPIO.

- ID único.


## Registros Especiales de Memoria 
### Descripción General de los Registros de Funciones Especiales (SFRs) de CH554

El CH554 controla y gestiona el dispositivo, configurando el modo de funcionamiento a través de registros de funciones especiales (SFRs). Estos registros ocupan el rango de direcciones `80H-FFH` en el espacio de direcciones internas de datos y solo pueden accederse mediante comandos de dirección directa. Para evitar modificaciones no deseadas, los registros con direcciones que terminan en `x0h` y `x8h` pueden ser accedidos bit a bit, mientras que los demás, con direcciones que no son múltiplos de 8, solo son accesibles por bytes.

#### Acceso en Modo Seguro y No Seguro

Algunos SFRs tienen restricciones específicas de acceso:
- **Solo Escritura en Modo Seguro:** Solo se pueden escribir en modo seguro, por ejemplo: GLOBAL_CFG, CLOCK_CFG, WAKE_CTRL.
- **Solo Lectura en Modo No Seguro:** Solo se pueden leer en modo no seguro.

#### Alias

Varios SFRs tienen uno o más alias para facilitar su uso, como:
- SPI0_CK_SE / SPI0_S_PRE
- UDEV_CTRL / UHOST_CTRL
- UEP1_CTRL / UH_SETUP
- UEP2_CTRL / UH_RX_CTRL
- UEP2_T_LEN / UH_EP_PID
- UEP3_CTRL / UH_TX_CTRL
- UEP3_T_LEN / UH_TX_LEN
- UEP2_3_MOD / UH_EP_MOD
- UEP2_DMA_H / UH_RX_DMA_H
- UEP2_DMA_L / UH_RX_DMA_L
- UEP2_DMA / UH_RX_DMA
- UEP3_DMA_H / UH_TX_DMA_H
- UEP3_DMA_L / UH_TX_DMA_L
- UEP3_DMA / UH_TX_DMA

#### Múltiples SFRs Independientes en las Mismas Direcciones

Algunas direcciones corresponden a varios SFRs independientes, proporcionando funcionalidad versátil:
- SAFE_MOD / CHIP_ID
- ROM_CTRL / ROM_STATUS

### Tabla de SFRs de CH554 (Tabla 5)



<p align="center">
    <img src="/docs/2-Microcontrolador_ch552/images/SFR.png" alt="buttons_leds">
</p>

> (1) Aquellos en texto rojo pueden ser accedidos por bits;

> (2) La siguiente tabla muestra la descripción correspondiente de los recuadros de diferentes colores.

*Nota: Consulta la Tabla 5 para obtener una lista completa y detalles de los SFRs de CH554, que incluyen SFRs estándar de 8051 y registros adicionales de control de dispositivo.*



![](/docs/2-Microcontrolador_ch552/images/SFR2.png)




<div style="text-align: right;">
    <a href="" download=".ino">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            Download 
        </button>
    </a>
</div>

# Continua con el curso [](/)


⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊