#include "hal_328p.h"

typedef struct
{
	uint8_t PIN;
	uint8_t DDR;
	uint8_t PORT;
} gpio_t;

#define GPIOB_BASE (0x23)
#define GPIOB      ((volatile gpio_t*)GPIOB_BASE)
#define GPIOC_BASE (0x26)
#define GPIOC      ((volatile gpio_t*)GPIOC_BASE)
#define GPIOD_BASE (0x29)
#define GPIOD      ((volatile gpio_t*)GPIOD_BASE)

#define IO0  _BV(0)
#define IO1  _BV(1)
#define IO2  _BV(2)
#define IO3  _BV(3)
#define IO4  _BV(4)
#define IO5  _BV(5)
#define IO6  _BV(6)
#define IO7  _BV(7)
