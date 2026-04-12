---
title: 12. Comunicación serial
type: docs
weight: 12
BookToC: false
---
# Comunicación serial

El microcontrolador CH552 ofrece una amplia gama de capacidades y aplicaciones, y una de sus características destacadas es la capacidad de comunicación USB. Esto te permite crear dispositivos que pueden ser controlados y monitoreados desde tu computadora, lo que es esencial en proyectos de desarrollo, prototipado y automatización.

**En esta sección se detalla la configuración paso a paso para establecer la conexión USB a TTL con el CH552**


<p align="center">
    <img src="/docs/12-comunicacion_serial/images/conexion2.png" alt="conexion_Serial1">
</p>

### Verificación de código

Abre el ejemplo **USBSerilalAdaptor.ino** desde   `File -> Examples -> Unit_SketchLab -> USBSerilalAdaptor.ino`


<div style="text-align: right;">
    <a href="/docs/12-comunicacion_serial/code/serial.ino" download="USBSerilalAdaptor.ino">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            USBSerilalAdaptor.ino
        </button>
    </a>
</div>

```c

extern __xdata uint8_t LineCoding[]; //lineCoding of CDC is located in this array
__xdata uint32_t oldBaudRate = 9600;

void setup() {
  Serial0_begin(9600);
}

void loop() {
  if (USBSerial_available()) {
    char serialChar = USBSerial_read();
    Serial0_write(serialChar);
  }
  if (Serial0_available()) {
    char serialChar = Serial0_read();
    USBSerial_write(serialChar);
  }

  __xdata uint32_t currentBaudRate = *((__xdata uint32_t *)LineCoding); //both linecoding and sdcc are little-endian

  if (oldBaudRate != currentBaudRate) {
    oldBaudRate = currentBaudRate;
    Serial0_begin(currentBaudRate);
  }

}
```
## Compilar y correr un programa
---
Para poder cargar el archivo, configura el entorno con las siguientes especificaciones:

```C
Reloj: 16 Mhz.

Método de carga: USB.

Ajuste de carga a:  "Default CDC".
```


<p align="center">
    <img src="/docs/4-salidas_digitales/images/config.png" alt="LED">
</p>


Carga un programa ingresando al modo de <strong>BOOT</strong> (cargador de arranque). Desconecte el cable USB, presione el botón <strong>BOOT</strong> en la tarjeta de desarrollo y luego vuelve a conectar a la PC.

<img src="/docs/3-compilador_mcs51/images/pc_ch.png" alt="Imagen de ch552">

## Comunicación uno a uno: Explorando la Comunicación entre Dispositivos Seriales

En el contexto de la comunicación uno a uno entre dispositivos seriales, se presenta un ejemplo ilustrativo que utiliza el CH552 en combinación con un convertidor USB TTL. Este enfoque resulta especialmente útil en situaciones donde no se disponga de otros dispositivos USB seriales para facilitar la comunicación, esta solución adquiere un valor significativo. Permite que dos dispositivos se comuniquen entre sí sin depender de recursos externos, facilitando el intercambio de información y datos de manera eficiente.

Por ello se propone el uso de una interfaz de comunicación para la verificación del funcionamiento, un chat a partir de la comunicación serial.



<p align="center">
    <img src="/docs/12-comunicacion_serial/images/py_code.png" alt="LED">
</p>



```

\\          _______________                            _______________  
\\         |  ___________  |                          |  ___________  |    
\\         | |           | | CH552            FTDI    | |           | |
\\         | | >Hola     | | ------+         +------- | | >Hola     | |
\\         | |           | |       |         |        | |           | |
\\         | |           | |     RX|___  ____|RX      | |           | |
\\         | |___     ___| |       |   \/    |        | |___________| |
\\         |_____|\_/|_____|     TX|___/\____|TX      |_______________|
\\           _|__|/ \|_|_          |         |            _|________|_
\\          / ********** \  ------+          +--------   / ********** \
\\         /  ************ \                           /  ************  \
```




### Prueba de Funcionamiento

<!-- <div style="text-align: right;">
    <a href="/docs/12-comunicacion_serial/code/interface_Serial.zip" download="interface_Serial.zip">
        <button style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 4px; cursor: pointer;">
            Interface_Serial.zip
        </button>
    </a>
</div> -->

Antes de adentrarse en la comunicación serial, es necesario configurar el entorno. Para ello, sigue los siguientes pasos:

1. **Instalar [Python](https://www.python.org/):** Verifica la instalación en una consola o shell con el siguiente comando:
   
    ```bash
    python --version
    ```

2. **Instalar el paquete de pruebas:** Este paquete contiene una interfaz para la comunicación serial. Instálalo con:

    ```bash 
    pip install chatos 
    ```


3. **Abrir una consola o shell y ejecutar el siguiente comando:**

    ```bash 
    python -m chatos
    ```


    <div style="text-align: center;">
       <img src="/docs/12-comunicacion_serial/images/chatos.png" alt="chatos">
    </div>


    La funcionalidad de la interfaz es simple: actualizar las conexiones disponibles y conectarse al dispositivo CH552, para lo cual necesitas conocer el puerto COM.

    <div style="text-align: center;">
       <img src="/docs/12-comunicacion_serial/images/chatos_connect.png" alt="chatos">
    </div>



**Nota:** Para usar otro "Chat" en el mismo dispositivo para pruebas, abre una nueva consola y escribe el comando `python -m chatos`. Esto abrirá una nueva interfaz que permitirá comunicar dos dispositivos COM.


  <div style="text-align: center;">
      <img src="/docs/12-comunicacion_serial/images/test_code.png" alt="chatos">
  </div>

Si bien no solo se puede usar como un convertidor USB a TTL, sino también puede introducir ciertas secciones de código para realizar ciertas funciones independientes.

Abre el ejemplo **USBSerilalAdaptor2.ino** desde   `File -> Examples -> Unit_SketchLab_Advance -> USBSerilalAdaptor2.ino`


## Agregando funcionalidad al CH552 adaptador
 

El convertidor USB a TTL CH552, permite elaborar rutinas internas como secuencia de encendido de led o respuesta de algún parámetro se desee visualizar, ejecutar internamente del microcontrolador.


El código de ch552-USB-TTL permite establecer las rutinas personalizadas realizando las adecuaciones necesarias al código ejemplo dado por el desarrollador.


[Instalación de PUTTY](https://putty.org/)

  <div style="text-align: center;">
      <img src="/docs/12-comunicacion_serial/images/test_code2.png" alt="chatos">
  </div>


> **Nota:** Ten en cuenta que este código es un ejemplo y puede que necesites ajustarlo según tu configuración específica y tus necesidades.







---
⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊