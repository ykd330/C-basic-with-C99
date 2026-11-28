#include "device_driver.h"

void Key_Poll_Init(void)
{
	Macro_Set_Bit(RCC->AHB1ENR, 2); 
	Macro_Write_Block(GPIOC->MODER, 0x3, 0x0, 26);
}

int Key_Get_Pressed(void)
{
	return Macro_Check_Bit_Clear(GPIOC->IDR, 13);	
}

void Key_Wait_Key_Pressed(void)
{
	while(!Macro_Check_Bit_Clear(GPIOC->IDR, 13));
}

void Key_Wait_Key_Released(void)
{
	while(!Macro_Check_Bit_Set(GPIOC->IDR, 13));
}

void Key_ISR_Enable(int en)
{
	if(en)
	{
		Macro_Set_Bit(RCC->AHB1ENR, 2); 
		Macro_Write_Block(GPIOC->MODER, 0x3, 0x0, 26);

		// SYSCFG 장치 Clock On
		RCC->APB2ENR |= 0x1 << 14;

		// PC13을 EXTI 13의 소스가 되도록 설정
		SYSCFG->EXTICR[3] |= 0x1 << 5;
		
		// EXTI 13을 Falling Edge Trigger로 설정
		EXTI->FTSR |= 0x1 << 13;
		
		// EXTI 13 Pending Clear
		EXTI->PR = 0x1 << 13;


		NVIC_ClearPendingIRQ((IRQn_Type)40);
		EXTI->IMR |= 0x1 << 13;
		NVIC_EnableIRQ((IRQn_Type)40);
		// NVIC EXTI15_9 Interrupt Pending Clear
		// EXTI 13 Interrupt Enable
		// NVIC EXTI15_9 Interrupt Enable

	}

	else
	{
		NVIC_DisableIRQ((IRQn_Type)40);
	}
}
