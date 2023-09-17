#include"stm32f4xx.h"
#include"stm32f4xx_rcc.h"

int pin()
{
RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF,ENABLE);
RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG,ENABLE);
GPIOF->MODER=0X00000055;
GPIOG->MODER=0X00000000;
return 0;
}

void main()
{
pin();
while(1)
{
GPIOF->ODR=~(GPIOG->IDR);
}
}




