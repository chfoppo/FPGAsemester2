#include "lpc_types.h"
#include "joystick.h"
#include "writeled.h"

void Joystick_Init(void)
{
	joystick_init();
}

void Joystick_Update(void)
{
	uint8_t joy = joystick_read();

	if (joy & JOYSTICK_UP)
	{
		if(red_duty < 100){
		red_duty++;
		}
	}
	if (joy & JOYSTICK_DOWN)
	{
		if(red_duty > 0){
		red_duty--;
		}
	}
}
