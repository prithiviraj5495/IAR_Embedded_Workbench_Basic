#include"stm32f4xx.h"
#include"stm32f4xx_rcc.h"

void delay(int n)
{
{
for(int j=0;j<n;j++)
{
  for(int j=0;j<10000;j++);
  }
}
}

int pin()
{
RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF,ENABLE);
GPIOF->MODER=0X00000055;
return 0;
}

void main()
{
pin();
while(1)
{
GPIOF->ODR=0X00000001;
delay(50);
GPIOF->ODR=0X00000002;
delay(50);
GPIOF->ODR=0X00000004;
delay(50);
GPIOF->ODR=0X00000008;
delay(50);
}
}

