#include "hal_328p.h"

typedef struct
{
	uint8_t TCCRA;
	uint8_t TCCRB;
	uint8_t TCNT;
	uint8_t OCRA;
	uint8_t OCRB;
} timer8_t;

typedef struct
{
	uint8_t TCCRA;
	uint8_t TCCRB;
	uint8_t TCCRC;
	uint8_t Reserved;
	uint16_t TCNT;
	uint16_t ICR;
	uint16_t OCRA;
	uint16_t OCRB;
} timer16_t;

#define TIM0_BASE (0x44)
#define TIM0      ((volatile timer8_t*)TIM0_BASE)
#define TIM1_BASE (0x80)
#define TIM1      ((volatile timer16_t*)TIM1_BASE)
#define TIM2_BASE (0xB0)
#define TIM2      ((volatile timer8_t*)TIM2_BASE)

