#include "stm32f10x.h"                  // Device header
#include "delay.h"

void LED_Init()
{
	RCC_APB2PeriphClockCmd (RCC_APB2Periph_GPIOA ,ENABLE );
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_1 | GPIO_Pin_2 ;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init (GPIOA ,&GPIO_InitStructure);
	
}


void LED_ON()
{
	GPIO_ResetBits (GPIOA ,GPIO_Pin_0 );
}

void LED_OFF()
{
	GPIO_SetBits (GPIOA ,GPIO_Pin_0 );
}

void  RED ()
{
	GPIO_ResetBits (GPIOA ,GPIO_Pin_1 );
	GPIO_ResetBits (GPIOA ,GPIO_Pin_2 );
	
	GPIO_SetBits (GPIOA ,GPIO_Pin_0 );
	Delay_ms(5000);
	GPIO_ResetBits (GPIOA ,GPIO_Pin_0 );
	Delay_ms (5);
}

void Green()
{
	GPIO_ResetBits (GPIOA ,GPIO_Pin_0 );
	GPIO_ResetBits (GPIOA ,GPIO_Pin_2 );
	
	GPIO_SetBits (GPIOA ,GPIO_Pin_1 );
	Delay_ms(5000);
	GPIO_ResetBits (GPIOA ,GPIO_Pin_1 );
	Delay_ms (5);
}

void Yellow ()
{
	GPIO_ResetBits (GPIOA ,GPIO_Pin_0 );
	GPIO_ResetBits (GPIOA ,GPIO_Pin_1 );
	
	GPIO_SetBits (GPIOA ,GPIO_Pin_2 );
	Delay_ms(2000);
	GPIO_ResetBits (GPIOA ,GPIO_Pin_2 );
	Delay_ms (5);
}

void Light_Blow(){
	
	GPIO_ResetBits (GPIOA ,GPIO_Pin_0 );
	GPIO_ResetBits (GPIOA ,GPIO_Pin_1 );
	GPIO_ResetBits (GPIOA ,GPIO_Pin_2 );
	
}


