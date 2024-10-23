## 16 bit CRC Modbus protocol
In this file, 16-bit crc protocol of Modbus is implemented.

## code explain
```c
void calculate_crc(uint8_t *data, uint16_t length, uint16_t *crct, uint8_t *crcLow, uint8_t *crcHigh);
```
in this function data is data buffer that you want calculate CRC and length is size of that,
crct and crcLow and crcHigh are pointer that results will save on them.
for more info refer to explain.c file 