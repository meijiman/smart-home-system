#include "main.h"

void Delay(uint32_t TimingDelay);

int main(void)
{
	// Enable Peripheral Clocks
	RCC->APB2ENR |= (1 << 4);

	// Configure Pins
	GPIOC->CRH |= (1 << 21);
	GPIOC->CRH &= ~(1 << 20);
	GPIOC->CRH &= ~((1 << 23) | (1 << 22));

	// Configure System Timer
	SysTick_Config(SystemCoreClock / 1000);

	while(1)
	{
		static int ledval = 0;
		// Toggle led

		if(ledval == 1)
		{
			GPIOC->ODR |= (1 << 13);
		}
		else
		{
			GPIOC->ODR &= ~(1 << 13);
		}
		ledval = 1 - ledval;

		Delay(250); // Wait 250ms
	}
	return 0;
}

static __IO uint32_t TimingDelay;

void Delay(uint32_t nTime)
{
	TimingDelay = nTime;
	while(TimingDelay != 0);
}

void SysTick_Handler(void)
{
	if(TimingDelay != 0)
		TimingDelay--;
}

