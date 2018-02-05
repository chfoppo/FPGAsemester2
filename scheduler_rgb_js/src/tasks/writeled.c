#include "lpc17xx_pinsel.h"
#include "lpc17xx_gpio.h"
#include "lpc17xx_ssp.h"
#include "led7seg.h"
#include "rotary_controller.h"
#include "writeled.h"

/*Initial value*/
uint8_t red_counter = 0;
uint8_t green_duty = 1;



void Red_Update(void) {
	
    static uint16_t counter = 0x00;
    static uint16_t on = 0x0001;
    uint16_t   off = ~on & 0x00FF;

    if(counter == r_counter)
    {

	pca9532_setLeds(on, off);
	on <<= 1;
	if (on == 0x0100) on = 0x0001;
	counter=0;
    }

    else {counter++;}
}

void Green_Update(void)
{
	static int8_t   increment = 1;
	static uint16_t duty = 0;
	pca9532_setBlink0Duty(duty);
	pca9532_setBlink1Duty(100-duty);

	duty += increment;
	if ((duty == green_duty) || (duty == 0)) increment *= -1;
}




