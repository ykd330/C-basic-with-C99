#include "device_driver.h"

void TIM2_Stopwatch_Start(void)
{
	Macro_Set_Bit(RCC->APB1ENR, 0);

	Macro_Set_Bit(RCC->APB1ENR, 0);
	TIM2->CR1 = (0 << 7) | (1 << 4) | (1 << 3);
	TIM2->PSC = (CPU_CLOCK / PSC_CLOCK) - 1;
	TIM2->ARR = 0xFFFFFFFF;
	TIM2->EGR |= 0x1 << 0;
	TIM2->CR1 |= 0x1 << 0;

}

unsigned int TIM2_Stopwatch_Stop(void)
{
	unsigned int time;

	unsigned int time;
	TIM2->CR1 &= ~(0x1 << 0);
	time = (TIM2->ARR - TIM2->CNT) * 20;
	return time;

}

void TIM2_Delay(int time)
{
	Macro_Set_Bit(RCC->APB1ENR, 0);

	TIM2->CR1 = (0x0 << 7) | (0x1 << 4) | (0x1 << 3);
	TIM2->PSC = ((int)((CPU_CLOCK /TIM_FREQ) + 0.5) - 1);
	TIM2->ARR = time * TIM2_PLS_1ms;
	TIM2->EGR |= 0x1 << 0;

	// UIF(Update Interrupt Pending) Clear
	TIM2->SR &= ~(0x1 << 0);
	
	// TIM2 start
	TIM2->CR1 |= 0x1 << 0;

	// Wait timeout
	while(!Macro_Check_Bit_Set(TIM2->SR, 0));

	// TIM2 Stop
	Macro_Clear_Bit(TIM2->CR1, 0);
}

void TIM4_Repeat(int time)
{
	Macro_Set_Bit(RCC->APB1ENR, 2);

	TIM4->CR1 = (0x0 << 7) | (0x1 << 4) | (0x0 << 3);
	TIM4->PSC = ((int)((CPU_CLOCK /TIM_FREQ) + 0.5) - 1);
	TIM4->ARR = time * ((int)(TIM2_PLS_1ms));
	TIM4->EGR |= 0x1 << 0;
	TIM4->SR &= ~(0x1 << 0);
	TIM4->CR1 |= (0x1 << 0);

}

int TIM4_Check_Timeout(void)
{
	// 타이머가 timeout 이면 1 리턴, 아니면 0 리턴
	int i = ((TIM4->SR >> 0) & 0x1) ? 1 : 0;
	TIM4->SR &= ~(0x1 << 0);
	return i;
}

void TIM4_Stop(void)
{
	Macro_Clear_Bit(TIM4->CR1, 0);
}

void TIM4_Change_Value(int time)
{
	TIM4->ARR = 50 * time;
}
