#include "stm8s.h"

//create delay function
void delay (int ms)
{
    int i =0 ;
    int j=0;
    for (i=0; i<=ms; i++)
    {
        for (j=0; j<120; j++) // Nop = Fosc/4
        _asm("nop"); // just an assembly code. 
    }
}


void main(void)
{
    // Configures clock: Fmaster = 16MHz
    CLK_HSIPrescalerConfig(CLK_PRESCALER_HSIDIV1);

    // GPIOD reset
    GPIO_DeInit(GPIOD);

    // Configure PD0 (LED1) as output push-pull low (led switched on)
    GPIO_Init(GPIOD, GPIO_PIN_0, GPIO_MODE_OUT_PP_LOW_FAST);

    while(1)
    {
        // toggle pin
        GPIO_WriteReverse(GPIOD, GPIO_PIN_0);

        // delay this many clocks
        delay(5000);
    }
}
