---
title: 1. DescripciÃ³n general
type: docs
weight: 1
BookToC: false
---

<!-- # 8-bit enhanced USB microcontroller CH559 -->
# DescripciÃ³n general
-----------------------------
## IntroducciÃ³n a la Arquitectura 8051 

La <a href="/" target="_blank">tarjeta de desarrollo Cocket Nova</a> representa una plataforma versÃ¡til y potente que aprovecha la renombrada arquitectura 8051. Esta arquitectura, concebida originalmente por <a href="https://www.intel.com/" target="_blank">Intel</a> en la dÃ©cada de 1980, ha resistido la prueba del tiempo, destacÃ¡ndose por su eficiencia y confiabilidad. En el corazÃ³n del CH552, esta arquitectura proporciona una base robusta para la implementaciÃ³n de proyectos diversos y la creaciÃ³n de soluciones innovadoras. Este repositorio sirve como recurso central para explorar, comprender y aprovechar al mÃ¡ximo las capacidades de la tarjeta CH552 en el contexto de la arquitectura 8051. 

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
      <th>DescripciÃ³n</th>
   </tr>
   <tr>
      <td>Disponibilidad y costo</td>
      <td>Los microcontroladores basados en la arquitectura 8051 siguen siendo ampliamente utilizados y son asequibles.</td>
   </tr>
   <tr>
      <td>Compatibilidad y legado</td>
      <td>La amplia adopciÃ³n en el pasado ha creado un vasto ecosistema de herramientas de desarrollo y recursos, facilitando su uso.</td>
   </tr>
   <tr>
      <td>Robustez y fiabilidad</td>
      <td>La arquitectura 8051 es conocida por su robustez y estabilidad, haciÃ©ndola adecuada para aplicaciones industriales.</td>
   </tr>
   <tr>
      <td>Bajo consumo de energÃ­a</td>
      <td>La implementaciÃ³n de modos de bajo consumo sigue siendo relevante en aplicaciones que requieren eficiencia energÃ©tica.</td>
   </tr>
</table>


Aunque las tecnologÃ­as modernas han surgido, la arquitectura 8051 sigue siendo una opciÃ³n viable y efectiva para una variedad de aplicaciones, especialmente en proyectos donde la compatibilidad y la economÃ­a son consideraciones clave.


## DescripciÃ³n General de los Registros de Funciones Especiales (SFRs) 8051
______________
Estos son algunos de los registros de funciones especiales clave presentes en el nucleo de los microcontroladores 8051, utilizados para diversas funciones de control y manipulaciÃ³n de datos.


![](/docs/1-descripcion-general/images/bit-addressable-register.png)



<table>
   <tr>
      <th>Registros MatemÃ¡ticos o de la CPU</th>
      <td>B</td>
   </tr>
   <tr>
      <th>Registro de Estado</th>
      <td>PSW (Program Status Word)</td>
   </tr>
   <tr>
      <th>Registros de Punteros</th>
      <td>DPTR (Puntero de Datos â€“ DPL, DPH), SP (Puntero de Pila)</td>
   </tr>
   <tr>
      <th>Registros de Latch de Puertos de Entrada/Salida</th>
      <td>P0 (Puerto 0), P1 (Puerto 1), P2 (Puerto 2), P3 (Puerto 3)</td>
   </tr>
   <tr>
      <th>Registros de Control PerifÃ©rico</th>
      <td>PCON, SCON, TCON, TMOD, IE (Registro de HabilitaciÃ³n de Interrupciones), IP (Registro de Prioridad de Interrupciones)</td>
   </tr>
   <tr>
      <th>Registros de Datos PerifÃ©ricos</th>
      <td>TL0, TH0, TL1, TH1, SBUF (Buffer de Serie Universal)</td>
   </tr>
</table>


## Microcontrolador CH552G

El CH552 es un MCU de nÃºcleo E8051 mejorado, compatible con el conjunto de instrucciones MCS51. Admite una frecuencia de reloj de hasta 24 MHz. Tiene una memoria ROM de programa de 16K incorporada, iRAM interna de 256 bytes y xRAM interna de 1K byte. Y xRAM admite acceso directo a memoria (DMA). AdemÃ¡s viene incorporado con ADC, detecciÃ³n de tecla tÃ¡ctil capacitiva, 3 temporizadores y captura de seÃ±al y PWM, 2 UART, SPI, controlador de dispositivo USB y transceptor de velocidad completa y otros mÃ³dulos funcionales.

<p align="center">
    <img src="/docs/2-microcontrolador_ch552/images/arquitectura.png" alt="arquitectura">
</p>


- NÃºcleo de CPU E8051 mejorado, la velocidad es de 8 a 15 veces mÃ¡s rÃ¡pida que la del estÃ¡ndar MCS51, con instrucciones especiales de copia rÃ¡pida de datos XRAM.

- Memoria de cÃ³digo Flash de 16KB incorporada, 1KB de XRAM y 256B de iRAM interna. 128B de DataFlash. Soporta lectura/escritura por bytes.

- BootLoader incorporado de 2KB. ISP a travÃ©s de USB o UART. Se proporciona una biblioteca ISP.

- Controlador USB y transceptor USB incorporados que admiten el modo de dispositivo USB, detecciÃ³n maestro/esclavo USB tipo C, transferencia USB2.0 de velocidad completa (12Mbps) y baja velocidad (1.5Mbps). Soporta hasta 64 bytes de paquetes de datos, con FIFO incorporado y soporte para DMA.

- Controlador USB y transceptor USB incorporados que admiten el modo maestro/esclavo de USB2.0 a velocidad completa y baja velocidad, con soporte para hasta 64 bytes de paquetes de datos, FIFO incorporado y soporte para DMA.

- 3 temporizadores/contadores. 2 capturas de seÃ±al de canal y 2 salidas PWM.

- 2 UARTs full-dÃºplex que admiten comunicaciÃ³n de alta velocidad de baudios. UART0 es un puerto serie estÃ¡ndar MCS51.

- Una interfaz de comunicaciÃ³n SPI con FIFO incorporado que admite modo maestro/esclavo.

- ADC de 4 canales de 8 bits. Comparador de voltaje.

- DetecciÃ³n capacitiva de 6 canales, hasta 15 teclas tÃ¡ctiles. Soporte para interrupciÃ³n de temporizaciÃ³n independiente.

- 4 fuentes de seÃ±al de reinicio. Restablecimiento incorporado al encender. Restablecimiento por desbordamiento del software y del watchdog, y reinicio externo.

- Fuente de reloj incorporada de 24MHz y PLL. TambiÃ©n se admite un oscilador de cristal externo `(CH552T)`.

- Regulador de voltaje bajo incorporado de 5V a 3.3V, compatible con voltajes de suministro de 5V, 3.3V e incluso 2.8V. Soporta modo de bajo consumo de energÃ­a y permite el despertar externo a travÃ©s de USB, UART0, UART1, SPI0 y partes de GPIO.

- ID Ãºnico.


## DescripciÃ³n General de los Registros de Funciones Especiales (SFRs) de CH552 
---

El CH552 controla y gestiona el dispositivo, configurando el modo de funcionamiento a travÃ©s de registros de funciones especiales (SFRs). Estos registros ocupan el rango de direcciones `80H-FFH` en el espacio de direcciones internas de datos y solo pueden accederse mediante comandos de direcciÃ³n directa. Para evitar modificaciones no deseadas, los registros con direcciones que terminan en `x0h` y `x8h` pueden ser accedidos bit a bit, mientras que los demÃ¡s, con direcciones que no son mÃºltiplos de 8, solo son accesibles por bytes.

#### Acceso en Modo Seguro y No Seguro

Algunos SFRs tienen restricciones especÃ­ficas de acceso:
- **Solo Escritura en Modo Seguro:** Solo se pueden escribir en modo seguro, por ejemplo: `GLOBAL_CFG, CLOCK_CFG, WAKE_CTRL`.
- **Solo Lectura en Modo No Seguro:** Solo se pueden leer en modo no seguro.

#### Alias

Varios SFRs tienen uno o mÃ¡s alias para facilitar su uso, como:
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

#### MÃºltiples SFRs Independientes en las Mismas Direcciones

Algunas direcciones corresponden a varios SFRs independientes, proporcionando funcionalidad versÃ¡til:
- SAFE_MOD / CHIP_ID
- ROM_CTRL / ROM_STATUS

### Tabla de SFRs de CH552 


<p align="center">
    <img src="/docs/2-microcontrolador_ch552/images/SFR.png" alt="buttons_leds">
</p>

> (1) Aquellos en texto rojo pueden ser accedidos por bits;

> (2) La siguiente tabla muestra la descripciÃ³n correspondiente de los recuadros de diferentes colores.




![](/docs/2-microcontrolador_ch552/images/SFR2.png)

<div style="width: 100%; max-width: 800px; border: 1px solid #000; padding: 20px; margin: 0px; background-color: lightblue; border-radius: 15px; box-shadow: 5px 5px 10px rgba(0, 0, 0, 0.1);">
    <div style="font-size: 16px; line-height: 1.5; color: #333;">
         De auerdo a la Tabla anterior se decriben  los SFRs del CH552, que incluyen tanto el estÃ¡ndar de 8051 y registros adicionales de control del dispositivo.
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

âŒ¨ï¸ con â¤ï¸ por [UNIT-Electronics](https://github.com/UNIT-Electronics) ðŸ˜Š