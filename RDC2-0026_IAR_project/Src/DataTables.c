/*
********************************************************************************
* COPYRIGHT(c) ��� ���� � ��ϻ, 2017
* 
* ����������� ����������� ��������������� �� �������� ���� ����� (as is).
* ��� ��������������� �������� ������ �����������.
********************************************************************************
*/


#include "RDC2_0026_board.h"


const uint32_t I2C_TIMINGR[] = 
{
   0xB0420F13, //100 ��� @ 48 MHz
   0x50330309, //400 ��� @ 48 MHz
   0x50100103, //1 ��� @ 48 MHz
};

const uint16_t I2C_TIMER_PCS[] = 
{
   12000, //100 ��� 
   3000, //400 ��� 
   2000, //1 ��� @ 
};


const uint8_t SPI_CHIP_SEL_OUT[] =
{
  1 << SPI_NSS1_PIN, //25xx/95xx soic-8, DIP-8
  1 << SPI_NSS2_PIN, //93xx soic-8, DIP-8
  1 << SPI_NSS3_PIN, //25xx soic-16
  1 << SPI_NSS4_PIN, //SPI connector
};


