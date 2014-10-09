#include "system.h"

int main(void)
{
	PeripheralInit();

    while(1)
    {
    	GPIO_SetBits(GPIOC,GPIO_Pin_9);
    	Delay_ms(100);
    	GPIO_ResetBits(GPIOC,GPIO_Pin_9);
    	Delay_ms(100);
    }
}
