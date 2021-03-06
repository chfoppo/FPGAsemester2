#include "LPC17xx.h"
#include "lpc_types.h"

#include "../scheduler/ttc_scheduler_o.h"
#include "../tasks/writeled.h"
#include "../tasks/joystick_controller.h"
#include "../tasks/rotary_controller.h"

#include "lpc17xx_pinsel.h"
#include "lpc17xx_i2c.h"
#include "pca9532.h"

int main (void)
{
	PINSEL_CFG_Type PinCfg;

	/* Initialize I2C2 pin connect */
	PinCfg.Funcnum = 2;
	PinCfg.Pinnum = 10;
	PinCfg.Portnum = 0;
	PINSEL_ConfigPin(&PinCfg);
	PinCfg.Pinnum = 11;
	PINSEL_ConfigPin(&PinCfg);

	// Initialize I2C peripheral
	I2C_Init(LPC_I2C2, 100000);

	/* Enable I2C1 operation */
	I2C_Cmd(LPC_I2C2, ENABLE);

	pca9532_setBlink0Leds(0xAA00);
	pca9532_setBlink0Period(0x01);
	pca9532_setBlink1Leds(0x5500);
	pca9532_setBlink1Period(0x01);

	pca9532_init();

    Joystick_Init();
    rotary_init();
    SCH_Init();


    SCH_Add_Task(rotary_process, 20, 100);
    SCH_Add_Task(Joystick_Update, 1, 200);
    SCH_Add_Task(Led_Update, 0, 5);


    SCH_Start();

    while(1)
    {
       SCH_Dispatch_Tasks();
    }

    return 0;
}

void check_failed(uint8_t *file, uint32_t line)
{
	/* User can add his own implementation to report the file name and line number,
	 ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

	/* Infinite loop */
	while(1);
}
