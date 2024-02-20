#include <Serial.h>

void setup() {
  // No es necesario inicializar USBSerial

  pinMode(11, INPUT);
}

void loop() {
  // Leer la entrada en el pin analógico 0, P1.1:
  int sensorValue = analogRead(11);
  // Convertir la lectura analógica (que va de 0 a 255) a un voltaje (0 a 3.3V):
  float voltage = sensorValue * (3.3 / 255.0);
  // Imprimir el valor leído:
  USBSerial_println(voltage);
  // O con precisión:
  //USBSerial_println(voltage,1);

  delay(10);
}