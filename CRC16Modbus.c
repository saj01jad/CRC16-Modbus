#include "CRC16Modbus.h"

void calculate_crc(uint8_t *data, uint16_t length, uint16_t *crct, uint8_t *crcLow, uint8_t *crcHigh) {
    uint16_t crc = 0xFFFF;

    for (uint8_t i = 0; i < length; i++) {
        crc ^= data[i];
        for (uint8_t j = 0; j < 8; j++) {
            if (crc & 0x0001) {
                crc >>= 1;
                crc ^= 0xA001;
            } else {
                crc >>= 1;
            }
        }
    }
    *crcLow = crc;
    *crcHigh = crc>>8;
    *crct = crc;
}