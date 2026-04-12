---
title: 1. Descripción general
type: docs
weight: 1
BookToC: false
---

<!-- # 8-bit enhanced USB microcontroller CH559 -->
# Descripción general
-----------------------------
## Introducción a la Arquitectura 8051 

La <a href="/" target="_blank">tarjeta de desarrollo Cocket Nova</a> representa una plataforma versátil y potente que aprovecha la renombrada arquitectura 8051. Esta arquitectura, concebida originalmente por <a href="https://www.intel.com/" target="_blank">Intel</a> en la década de 1980, ha resistido la prueba del tiempo, destacándose por su eficiencia y confiabilidad. En el corazón del CH552, esta arquitectura proporciona una base robusta para la implementación de proyectos diversos y la creación de soluciones innovadoras. Este repositorio sirve como recurso central para explorar, comprender y aprovechar al máximo las capacidades de la tarjeta CH552 en el contexto de la arquitectura 8051. 

![](/docs/1-descripcion-general/images/8051_5.png)


### Ventajas Actuales de la Arquitectura 8051

<style>
   table {
      width: 100%;
      border-collapse: collapse;
   }
   th, td {
      border: 1px solid #ddd;
      padding: 8px;
   }
   th {
      background-color: #f2f2f2;
      color: black;
   }
</style>
<table>
   <tr>
      <th>Ventaja</th>
      <th>Descripción</th>
   </tr>
   <tr>
      <td>Disponibilidad y costo</td>
      <td>Los microcontroladores basados en la arquitectura 8051 siguen siendo ampliamente utilizados y son asequibles.</td>
   </tr>
   <tr>
      <td>Compatibilidad y legado</td>
      <td>La amplia adopción en el pasado ha creado un vasto ecosistema de herramientas de desarrollo y recursos, facilitando su uso.</td>
   </tr>
   <tr>
      <td>Robustez y fiabilidad</td>
      <td>La arquitectura 8051 es conocida por su robustez y estabilidad, haciéndola adecuada para aplicaciones industriales.</td>
   </tr>
   <tr>
      <td>Bajo consumo de energía</td>
      <td>La implementación de modos de bajo consumo sigue siendo relevante en aplicaciones que requieren eficiencia energética.</td>
   </tr>
</table>


Aunque las tecnologías modernas han surgido, la arquitectura 8051 sigue siendo una opción viable y efectiva para una variedad de aplicaciones, especialmente en proyectos donde la compatibilidad y la economía son consideraciones clave.


## Descripción General de los Registros de Funciones Especiales (SFRs) 8051
______________
Estos son algunos de los registros de funciones especiales clave presentes en el nucleo de los microcontroladores 8051, utilizados para diversas funciones de control y manipulación de datos.


![](/docs/1-descripcion-general/images/bit-addressable-register.png)



<table>
   <tr>
      <th>Registros Matemáticos o de la CPU</th>
      <td>B</td>
   </tr>
   <tr>
      <th>Registro de Estado</th>
      <td>PSW (Program Status Word)</td>
   </tr>
   <tr>
      <th>Registros de Punteros</th>
      <td>DPTR (Puntero de Datos – DPL, DPH), SP (Puntero de Pila)</td>
   </tr>
   <tr>
      <th>Registros de Latch de Puertos de Entrada/Salida</th>
      <td>P0 (Puerto 0), P1 (Puerto 1), P2 (Puerto 2), P3 (Puerto 3)</td>
   </tr>
   <tr>
      <th>Registros de Control Periférico</th>
      <td>PCON, SCON, TCON, TMOD, IE (Registro de Habilitación de Interrupciones), IP (Registro de Prioridad de Interrupciones)</td>
   </tr>
   <tr>
      <th>Registros de Datos Periféricos</th>
      <td>TL0, TH0, TL1, TH1, SBUF (Buffer de Serie Universal)</td>
   </tr>
</table>


## Microcontrolador CH552G

El CH552 es un MCU de núcleo E8051 mejorado, compatible con el conjunto de instrucciones MCS51. Admite una frecuencia de reloj de hasta 24 MHz. Tiene una memoria ROM de programa de 16K incorporada, iRAM interna de 256 bytes y xRAM interna de 1K byte. Y xRAM admite acceso directo a memoria (DMA). Además viene incorporado con ADC, detección de tecla táctil capacitiva, 3 temporizadores y captura de señal y PWM, 2 UART, SPI, controlador de dispositivo USB y transceptor de velocidad completa y otros módulos funcionales.

<p align="center">
    <img src="/docs/2-microcontrolador_ch552/images/arquitectura.png" alt="arquitectura">
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


## Descripción General de los Registros de Funciones Especiales (SFRs) de CH552 
---

El CH552 controla y gestiona el dispositivo, configurando el modo de funcionamiento a través de registros de funciones especiales (SFRs). Estos registros ocupan el rango de direcciones `80H-FFH` en el espacio de direcciones internas de datos y solo pueden accederse mediante comandos de dirección directa. Para evitar modificaciones no deseadas, los registros con direcciones que terminan en `x0h` y `x8h` pueden ser accedidos bit a bit, mientras que los demás, con direcciones que no son múltiplos de 8, solo son accesibles por bytes.

#### Acceso en Modo Seguro y No Seguro

Algunos SFRs tienen restricciones específicas de acceso:
- **Solo Escritura en Modo Seguro:** Solo se pueden escribir en modo seguro, por ejemplo: `GLOBAL_CFG, CLOCK_CFG, WAKE_CTRL`.
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

### Tabla de SFRs de CH552 


<p align="center">
    <img src="/docs/2-microcontrolador_ch552/images/SFR.png" alt="buttons_leds">
</p>

> (1) Aquellos en texto rojo pueden ser accedidos por bits;

> (2) La siguiente tabla muestra la descripción correspondiente de los recuadros de diferentes colores.




![](/docs/2-microcontrolador_ch552/images/SFR2.png)

<div style="width: 100%; max-width: 800px; border: 1px solid #000; padding: 20px; margin: 0px; background-color: lightblue; border-radius: 15px; box-shadow: 5px 5px 10px rgba(0, 0, 0, 0.1);">
    <div style="font-size: 16px; line-height: 1.5; color: #333;">
         De auerdo a la Tabla anterior se decriben  los SFRs del CH552, que incluyen tanto el estándar de 8051 y registros adicionales de control del dispositivo.
    </div>
</div>

<!-- 
<div style="text-align: right;">
    <a href="" download=".ino">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            Download 
        </button>
    </a>
</div> -->

<div style="text-align: right">
    <h1><a href="/docs/2-microcontrolador_ch552/">Siguiente</a></h>
</div>

⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊