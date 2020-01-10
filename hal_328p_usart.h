#include "hal_328p.h"

typedef struct
{
	uint8_t UCSRA;
	uint8_t UCSRB;
	uint8_t UCSRC;
	uint8_t Reserved;
	uint16_t UBRR;
	uint8_t UDR;
} usart_t;

#define USART0_BASE (0xC0)
#define USART0      ((volatile usart_t*)USART0_BASE)
