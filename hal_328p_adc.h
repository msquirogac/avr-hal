#include "hal_328p_base.h"

typedef struct
{
	uint16_t DR;
	uint8_t CSRA;
	uint8_t CSRB;
	uint8_t MUX;
} adc_t;

#define ADC0_BASE (0x78)
#define ADC0      ((volatile adc_t*)ADC0_BASE)

#define ADCN0     0x00
#define ADCN1     0x01
#define ADCN2     0x02
#define ADCN3     0x03
#define ADCN4     0x04
#define ADCN5     0x05
#define ADCN6     0x06
#define ADCN7     0x07
#define ADCN8     0x08
#define ADCN14    0x0E
#define ADCN15    0x0F