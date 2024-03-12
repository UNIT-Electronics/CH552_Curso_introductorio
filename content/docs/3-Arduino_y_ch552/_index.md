---
title: 3. Compilador MCS51
type: docs
weight: 3
BookToC: false
---

# Configuración e instalación 
---
Una configuración eficiente para la tarjeta de desarrollo CH552G puede lograrse aprovechando proyectos ya existentes que simplifican el proceso. Un ejemplo destacado es la <a href="https://github.com/DeqingSun/ch55xduino/tree/ch55xduino" target="_blank">API Ch55xduino</a> diseñada para el <a href="https://www.arduino.cc/" target="_blank">Arduino IDE</a>. Esta API está específicamente diseñada para facilitar la integración y configuración del microcontrolador perteneciente a la familia USB MCS51.

Esta iniciativa tiene como objetivo principal eliminar las complicaciones asociadas con la configuración de un entorno de compilación. Al utilizar la API Ch55xduino, los desarrolladores pueden agilizar el proceso de programación y aprovechar las capacidades del CH552G de manera más accesible. Esto permite a los usuarios concentrarse en el desarrollo de sus aplicaciones sin la carga de configuraciones tediosas.

### **Instalación**

La integración automática al IDE es compatible a través del Arduino Boards Manager. Esta es la forma recomendada por el desarrollador.

Inicie `Arduino-IDE. En Archivo->Preferencias`, pestaña Configuración, ingrese en el `Gestor de URLs Adicionales de Tarjetas` la siguiente URL:

---
```sh
https://raw.githubusercontent.com/DeqingSun/ch55xduino/ch55xduino/package_ch55xduino_mcs51_index.json
```
---
<p align="center">
    <img src="/docs/3-Arduino_y_ch552/images/config.png" alt="Imagen de ch552">
</p>

* Abrir `*Herramientas->Placa:...->Gestor de tarjetas*`
* Encuentra Ch55xduino escribiendo `ch` en la línea de búsqueda
<p align="center">
    <img src="/docs/3-Arduino_y_ch552/images/ch55x.png" alt="Imagen de ch552">
</p>

Haga clic en **`Instalar`**.

Ahora debería encontrar una nueva entrada *CH55x Boards* en la lista en `*Herramientas->Placa:...*`.

<p align="center">
    <img src="/docs/3-Arduino_y_ch552/images/menu_ch.png" alt="Imagen de ch552">
</p>

### Controlador USB

Ch55xduino es compatible con los métodos de carga USB y Serial. Si el puerto USB del chip CH552 está conectado a una computadora directamente, se recomienda el método USB.

> Existen situaciones en las que el IDE de Arduino no elije o permite elegir directamente el puerto serial, la recomendación es hacer la prueba de correr el ejemplo en caso de algún error verificar que el controlador del dispositivo se encuentre instalado. 


### Controlador

La herramienta de carga actual puede usar el controlador [CH375](https://www.wch-ic.com/search?q=CH375&t=downloads) predeterminado y coexistir con la [WCHISPTool](http://www.wch.cn/downloads/WCHISPTool_Setup_exe.html) oficial, en caso de que el controlador presente problemas es recomendable cambiar la versión del controlador a WinUSB o libusb-win32, mediante [Zadig](https://zadig.akeo.ie/).

<p align="center">
    <img src="/docs/3-Arduino_y_ch552/images/driver.png" alt="Imagen de zadig">
</p>

Posteriormente instalar individualmente el controlador [CH375](https://www.wch-ic.com/downloads/CH372DRV_EXE.html).

### Prueba de soporte de versiones:

<div style="width: 100%; max-width: 800px; border: 1px solid #000; padding: 20px; margin: 10px; background-color: lightblue; border-radius: 15px; box-shadow: 5px 5px 10px rgba(0, 0, 0, 0.1);">
    <div style="font-size: 16px; line-height: 1.5; color: #333;">
        Arduino IDE versión 2.1.1, para versiones mayores >=1.8.19 debería trabajar.
    </div>
</div>
<div style="width: 100%; max-width: 800px; border: 1px solid #000; padding: 20px; margin: 10px; background-color: lightblue; border-radius: 15px; box-shadow: 5px 5px 10px rgba(0, 0, 0, 0.1);">
    <div style="font-size: 16px; line-height: 1.5; color: #333;">
        Windows: Pruebas en Windows 11 y 10.
    </div>
</div>
<div style="width: 100%; max-width: 800px; border: 1px solid #000; padding: 20px; margin: 10px; background-color: lightblue; border-radius: 15px; box-shadow: 5px 5px 10px rgba(0, 0, 0, 0.1);">
    <div style="font-size: 16px; line-height: 1.5; color: #333;">
        Versión de CH55xduino 0.0.16
    </div>
</div>


### Elegir la Placa CH552 de la lista

Abrir el ejemplo estándar Blink desde `Archivo->Ejemplos->01. Básico->Blink`

Por defecto el led se encuentra configurado en el pin 33, si el LED se encuentra configurado en otro puerto, cambiar por el pin comentado reconectar para realizar la prueba.

### Compilar

Si su microcontrolador nunca se usó con ch55xduino antes, debe hacer que el chip ch552 ingrese al modo de BOOT(cargador de arranque). Este método consiste en desconectar el USB y apagar el CH552, conectar la resistencia pull-up en la línea D+ (generalmente una resistencia de 10K entre D+ y 5V, controlada por un botón o pads adyacentes).
<p align="center">
    <img src="/docs/3-Arduino_y_ch552/images/button_leds.png" alt="buttons_leds">
</p>


Posteriormente conectar el USB. y presionar Subir.

<p align="center">
    <img src="/docs/3-Arduino_y_ch552/images/ruin.png" alt="buttons_leds">
</p>

<div style="width: 100%; max-width: 800px; border: 1px solid #000; padding: 20px; margin: 10px; background-color: lightgreen; border-radius: 15px; box-shadow: 5px 5px 10px rgba(0, 0, 0, 0.1);">
    <div style="font-weight: bold; font-size: 20px; color: #333; margin-bottom: 20px;">Nota</div>
    <div style="font-size: 16px; line-height: 1.5; color: #333;">
       Un chip  nuevo ingresará automáticamente al gestor de arranque.
    </div>
</div>






# Continua con el curso [](/)


---
⌨️ con ❤️ por [UNIT-Electronics](https://github.com/UNIT-Electronics) 😊