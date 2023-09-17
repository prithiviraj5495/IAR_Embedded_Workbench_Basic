#include"stm32f4xx.h"
#include"stm32f4xx_rcc.h"
int pinc()
{
RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF,ENABLE);
GPIOF->MODER=0X00000055;
return 0;
}

void main()
{
pinc();
GPIOF->ODR=0X0000000F;
}