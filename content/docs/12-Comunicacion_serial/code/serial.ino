
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