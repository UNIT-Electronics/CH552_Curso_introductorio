---
title: 1. Arquitectura 8051
type: docs
weight: 1
BookToC: false
---

<!-- # 8-bit enhanced USB microcontroller CH559 -->
# Descripción general
-----------------------------
## Introducción a la Arquitectura 8051


La arquitectura 8051 es un conjunto de instrucciones de microcontrolador que fue diseñado originalmente por Intel en la década de 1980. Esta arquitectura presenta las siguientes características clave:


| Característica                   | Descripción                                                                                               |
|----------------------------------|-----------------------------------------------------------------------------------------------------------|
| Núcleo de 8 bits                 | El microcontrolador 8051 opera en un espacio de datos de 8 bits, procesando datos de 8 bits a la vez.       |
| Memoria integrada                | Incluye RAM, ROM y, en algunos casos, memoria EEPROM para facilitar la implementación de sistemas embebidos.|
| Puertos de entrada/salida (I/O)  | Ofrece una variedad de puertos I/O para conectar periféricos externos y realizar operaciones de entrada/salida.|
| Temporizadores/Contadores        | Incorpora temporizadores/contadores útiles para tareas de temporización y control de eventos.                 |
| Modos de bajo consumo            | Presenta modos de bajo consumo de energía para maximizar la eficiencia energética.                           |

### Ventajas Actuales de la Arquitectura 8051

| Ventaja                              | Descripción                                                                                                               |
|--------------------------------------|---------------------------------------------------------------------------------------------------------------------------|
| Disponibilidad y costo                | Los microcontroladores basados en la arquitectura 8051 siguen siendo ampliamente utilizados y son asequibles.               |
| Compatibilidad y legado               | La amplia adopción en el pasado ha creado un vasto ecosistema de herramientas de desarrollo y recursos, facilitando su uso.|
| Robustez y fiabilidad                 | La arquitectura 8051 es conocida por su robustez y estabilidad, haciéndola adecuada para aplicaciones industriales.        |
| Bajo consumo de energía               | La implementación de modos de bajo consumo sigue siendo relevante en aplicaciones que requieren eficiencia energética.    |


Aunque las tecnologías modernas han surgido, la arquitectura 8051 sigue siendo una opción viable y efectiva para una variedad de aplicaciones, especialmente en proyectos donde la compatibilidad y la economía son consideraciones clave.


## Lista de Registros de Funciones Especiales del  8051
______________

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
      <th>Registros Matemáticos o de la CPU</th>
      <td>A, B</td>
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
Estos son algunos de los registros de funciones especiales clave presentes en el microcontrolador 8051, utilizados para diversas funciones de control y manipulación de datos.

![](/docs/1-Descripcion-general/images/bit-addressable-register.png)
<div style="text-align: right;">
    <a href="" download=".ino">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            Download 
        </button>
    </a>
</div>


⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊