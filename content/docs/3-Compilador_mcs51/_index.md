---
title: 3. Compilador MCS51
type: docs
weight: 3
BookToC: false
---

# Configuración e instalación 
---
Una configuración rápida del entorno de programación para la tarjeta de desarrollo Cocket Nova CH552G puede lograrse aprovechando proyectos ya existentes que simplifican el proceso. Un ejemplo destacado es la <a href="https://github.com/DeqingSun/ch55xduino/tree/ch55xduino" target="_blank">API Ch55xduino</a> diseñada para el <a href="https://www.arduino.cc/" target="_blank">Arduino IDE</a>. Esta API está específicamente diseñada para facilitar la integración y configuración del microcontrolador perteneciente a la familia USB MCS51.

Esta iniciativa tiene como objetivo principal eliminar las complicaciones asociadas con la configuración de un entorno de compilación. Al utilizar la `API Ch55xduino`, los desarrolladores pueden agilizar el proceso de programación y aprovechar las capacidades del CH552G de manera más accesible. Esto permite a los usuarios concentrarse en el desarrollo de sus aplicaciones sin la carga de configuraciones tediosas.

### **Instalación**

La integración automática al IDE es compatible a través del `Arduino Boards Manager`. Esta es la forma recomendada por el desarrollador.

Inicie `Arduino-IDE. En Archivo->Preferencias`, pestaña Configuración, ingrese en el `Gestor de URLs Adicionales de Tarjetas` la siguiente URL:

---
```sh
https://raw.githubusercontent.com/UNIT-Electronics/Uelectronics-CH552-Arduino-Package/refs/heads/main/package_duino_mcs51_index.json
```
---
<p align="center">
    <img src="/docs/3-Compilador_mcs51/images/config.png" alt="Imagen de ch552">
</p>

* Abrir `*Herramientas->Placa:...->Gestor de tarjetas*`
* Encuentra `Cocket Nova` escribiendo `ch` en la línea de búsqueda
<p align="center">
    <img src="/docs/3-Compilador_mcs51/images/ch55x.png" alt="Imagen de ch552">
</p>

Haga clic en **`Instalar`**.


### Elegir la Placa Cocket Nova


Ahora debería encontrar una nueva entrada *Cocket Nova* en la lista en `*Herramientas->Placa:...*`.

<p align="center">
    <img src="/docs/3-Compilador_mcs51/images/menu_ch.png" alt="Imagen de ch552">
</p>


## Controlador

La herramienta de carga actual utiliza el controlador [CH375](https://www.wch-ic.com/search?q=CH375&t=downloads) predeterminado, en caso de que el controlador presente problemas es recomendable cambiar la versión del controlador a `libusb-win32`, mediante [Zadig](https://zadig.akeo.ie/).

<p align="center">
    <img src="/docs/3-Compilador_mcs51/images/driver.png" alt="Imagen de zadig">
</p>

Posteriormente instalar individualmente el controlador [CH375](https://www.wch-ic.com/downloads/CH372DRV_EXE.html).

## Compilar y correr un ejemplo

Abrir el ejemplo estándar Blink desde `Archivo->...->Ejemplos->Unit_SketchLab->Blink`

<p align="center">
    <img src="/docs/3-Compilador_mcs51/images/menu.png" alt="Imagen de ch552">
</p>

### Verificar y Compilar

`Ingrese al modo de BOOT (cargador de arranque). `

> Este método consiste en desconectar el cable USB, presionar el boton `BOOT` de la tarjeta de desarrollo y reconectar a la `PC`.

<p align="center">
    <img src="/docs/3-Compilador_mcs51/images/pc_ch.png" alt="Imagen de ch552">
</p>


<div style="width: 100%; max-width: 800px; border: 1px solid #000; padding: 20px; margin: 10px auto; background-color: peachpuff; border-radius: 15px; box-shadow: 5px 5px 10px rgba(0, 0, 0, 0.1); text-align: left;">
    <div style="font-weight: bold; font-size: 20px; color: #D2691E; margin-bottom: 20px;">Nota</div>
    <div style="font-size: 16px; line-height: 1.5; color: #D2691E;">
       No es necesario seleccionar algún puerto serial, ya que el controlador se encargará de subir el proyecto.
    </div>
</div>


Posteriormente y presionar Subir.

<p align="center">
    <img src="/docs/3-Compilador_mcs51/images/ruin.png" alt="buttons_leds">
</p>

### Controlador USB

Ch55xduino es compatible con los métodos de carga USB y Serial. Si el puerto USB del chip CH552 está conectado a una computadora directamente, se recomienda el método USB.

<div style="width: 100%; max-width: 800px; border: 1px solid #000; padding: 20px; margin: 10px auto; background-color: peachpuff; border-radius: 15px; box-shadow: 5px 5px 10px rgba(0, 0, 0, 0.1); text-align: left;">
    <div style="font-weight: bold; font-size: 20px; color: #D2691E; margin-bottom: 20px;">Advertencia</div>
    <div style="font-size: 16px; line-height: 1.5; color: #D2691E;">
         Existen situaciones en las que el IDE de Arduino no elije o permite elegir directamente el puerto serial, la recomendación es hacer la prueba de correr el ejemplo en caso de algún error verificar que el controlador del dispositivo se encuentre instalado. 
    </div>
</div>




### Prueba de soporte de versiones:

<div style="width: 100%; max-width: 800px; border: 1px solid #000; padding: 20px; margin: 10px auto; background-color: lightblue; border-radius: 15px; box-shadow: 5px 5px 10px rgba(0, 0, 0, 0.1); text-align: center;">
    <div style="font-size: 16px; line-height: 1.5; color: #333;">
        Arduino IDE versión 2.1.1, para versiones mayores >=1.8.19 debería trabajar.
    </div>
</div>
<div style="width: 100%; max-width: 800px; border: 1px solid #000; padding: 20px; margin: 10px auto; background-color: lightblue; border-radius: 15px; box-shadow: 5px 5px 10px rgba(0, 0, 0, 0.1); text-align: center;">
    <div style="font-size: 16px; line-height: 1.5; color: #333;">
        Windows: Pruebas en Windows 11 y 10.
    </div>
</div>
<div style="width: 100%; max-width: 800px; border: 1px solid #000; padding: 20px; margin: 10px auto; background-color: lightblue; border-radius: 15px; box-shadow: 5px 5px 10px rgba(0, 0, 0, 0.1); text-align: center;">
    <div style="font-size: 16px; line-height: 1.5; color: #333;">
        Versión de CH55xduino 0.0.20
    </div>
</div>






<div style="text-align: right">
    <h1><a href="/docs/4-salidas_digitales/">Siguiente</a></h>
</div>


---
⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊