#include <stdio.h>
#include <stdint.h>
#include "CRC16Modbus.c"

int main(){
    uint8_t crcLow; uint8_t crcHigh; uint16_t crc;
    uint8_t data[] = {0x01, 0x03, 0x00, 0x01, 0x00, 0x03};
    calculate_crc(data, sizeof(data), &crc, &crcLow, &crcHigh);
    printf("CRC-16: 0x%X\n", crc);
    printf("CRC low byte: 0x%X\n", crcLow);
    printf("CRC high byte: 0x%X\n", crcHigh);
    return 0;
}