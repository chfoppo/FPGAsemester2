/*****************************************************************************
 *   An example illustrating how to control the 7-segment display
 *   using the Rotary switch
 *
 *   Copyright(C) 2010, Embedded Artists AB
 *   All rights reserved.
 *
 ******************************************************************************/

#include "lpc17xx_pinsel.h"
#include "lpc17xx_gpio.h"
#include "lpc17xx_ssp.h"
#include "led7seg.h"
#include "rotary.h"
#include <stdint.h>
#include "writeled.h"

/* Change the symbol of the path */
	uint8_t state = 0;

void rotary_process(void) {
	state = rotary_read();
	if (state!= ROTARY_WAIT) {
		if (state== ROTARY_RIGHT) {
			if (green_duty > 0) {
				green_duty ++;
			}
		} else if (state == ROTARY_LEFT) {
			if (green_duty < 100) {
				green_duty --;
			}
		}
	}
}

