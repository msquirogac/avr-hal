#include "hal_328p_base.h"

typedef struct
{
	uint8_t IT0;
	uint8_t IT1;
	uint8_t IT2;
} ittim_t;

#define ITTIM_BASE (0x6E)
#define ITTIM      ((volatile ittim_t*)ITTIM_BASE)

