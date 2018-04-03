#include "Saber_RCC.h"

void Saber_RCC_Init(uint32_t Device)
{
	switch(Device)
	{
		if(Device == Saber_RCC_OTGHSULPI)//AHB1
			RCC->AHB1ENR |= RCC_AHB1ENR_OTGHSULPIEN;
		else if(Device == Saber_RCC_OTGHS)
			RCC->AHB1ENR |= RCC_AHB1ENR_OTGHSEN;
		else if(Device == Saber_RCC_ETHMACPTP)
			RCC->AHB1ENR |= RCC_AHB1ENR_ETHMACPTPEN;
		else if(Device == Saber_RCC_ETHMACRX)
			RCC->AHB1ENR |= RCC_AHB1ENR_ETHMACRXEN;
		else if(Device == Saber_RCC_ETHMACRX)
			RCC->AHB1ENR |= RCC_AHB1ENR_ETHMACTXEN;
		else if(Device == Saber_RCC_ETHMAC)
			RCC->AHB1ENR |= RCC_AHB1ENR_ETHMACEN;
		else if(Device == Saber_RCC_DMA2D)
			RCC->AHB1ENR |= RCC_AHB1ENR_DMA2DEN;
		else if(Device == Saber_RCC_DMA2)
			RCC->AHB1ENR |= RCC_AHB1ENR_DMA2EN;
		else if(Device == Saber_RCC_DMA1)
			RCC->AHB1ENR |= RCC_AHB1ENR_DMA1EN;
		else if(Device == Saber_RCC_CCMDATARAM)
			RCC->AHB1ENR |= RCC_AHB1ENR_CCMDATARAMEN;
		else if(Device == Saber_RCC_BKPSRAM)
			RCC->AHB1ENR |= RCC_AHB1ENR_BKPSRAMEN;
		else if(Device == Saber_RCC_CRC)
			RCC->AHB1ENR |= RCC_AHB1ENR_CRCEN;
		else if(Device == Saber_RCC_GPIOK)
			RCC->AHB1ENR |= RCC_AHB1ENR_GPIOKEN;
		else if(Device == Saber_RCC_GPIOJ)
			RCC->AHB1ENR |= RCC_AHB1ENR_GPIOJEN;
		else if(Device == Saber_RCC_GPIOI)
			RCC->AHB1ENR |= RCC_AHB1ENR_GPIOIEN;
		else if(Device == Saber_RCC_GPIOH)
			RCC->AHB1ENR |= RCC_AHB1ENR_GPIOHEN;
		else if(Device == Saber_RCC_GPIOG)
			RCC->AHB1ENR |= RCC_AHB1ENR_GPIOGEN;
		else if(Device == Saber_RCC_GPIOF)
			RCC->AHB1ENR |= RCC_AHB1ENR_GPIOFEN;
		else if(Device == Saber_RCC_GPIOE)
			RCC->AHB1ENR |= RCC_AHB1ENR_GPIOEEN;
		else if(Device == Saber_RCC_GPIOD)
			RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
		else if(Device == Saber_RCC_GPIOC)
			RCC->AHB1ENR |= RCC_AHB1ENR_GPIOCEN;
		else if(Device == Saber_RCC_GPIOB)
			RCC->AHB1ENR |= RCC_AHB1ENR_GPIOBEN;
		else if(Device == Saber_RCC_GPIOA)
			RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;
		else if(Device == Saber_RCC_OTGFS)//AHB2
			RCC->AHB2ENR |= RCC_AHB2ENR_OTGFSEN;
		else if(Device == Saber_RCC_RNG)
			RCC->AHB2ENR |= RCC_AHB2ENR_RNGEN;
		else if(Device == Saber_RCC_HASH)
			RCC->AHB2ENR |= RCC_AHB2ENR_HASHEN;
		else if(Device == Saber_RCC_CRYP)
			RCC->AHB2ENR |= RCC_AHB2ENR_CRYPEN;
		else if(Device == Saber_RCC_DCMI)
			RCC->AHB2ENR |= RCC_AHB2ENR_DCMIEN;//AHB3 not exist.
		else if(Device == Saber_RCC_UART8)//APB1
			RCC->APB1ENR |= RCC_APB1ENR_UART8EN;
		else if(Device == Saber_RCC_UART7)
			RCC->APB1ENR |= RCC_APB1ENR_UART7EN;
		else if(Device == Saber_RCC_DAC)
			RCC->APB1ENR |= RCC_APB1ENR_DACEN;
		else if(Device == Saber_RCC_PWR)
			RCC->APB1ENR |= RCC_APB1ENR_PWREN;
		else if(Device == Saber_RCC_CAN2)
			RCC->APB1ENR |= RCC_APB1ENR_CAN2EN;
		else if(Device == Saber_RCC_CAN1)
			RCC->APB1ENR |= RCC_APB1ENR_CAN1EN;
		else if(Device == Saber_RCC_I2C3)
			RCC->APB1ENR |= RCC_APB1ENR_I2C3EN;
		else if(Device == Saber_RCC_I2C2)
			RCC->APB1ENR |= RCC_APB1ENR_I2C2EN;
		else if(Device == Saber_RCC_I2C1)
			RCC->APB1ENR |= RCC_APB1ENR_I2C1EN;
		else if(Device == Saber_RCC_UART5)
			RCC->APB1ENR |= RCC_APB1ENR_UART5EN;
		else if(Device == Saber_RCC_UART4)
			RCC->APB1ENR |= RCC_APB1ENR_UART4EN;
		else if(Device == Saber_RCC_UART3)
			RCC->APB1ENR |= RCC_APB1ENR_USART3EN;
		else if(Device == Saber_RCC_UART2)
			RCC->APB1ENR |= RCC_APB1ENR_USART2EN;
		else if(Device == Saber_RCC_SPI3)
			RCC->APB1ENR |= RCC_APB1ENR_SPI3EN;
		else if(Device == Saber_RCC_SPI2)
			RCC->APB1ENR |= RCC_APB1ENR_SPI2EN;
		else if(Device == Saber_RCC_WWDG)
			RCC->APB1ENR |= RCC_APB1ENR_WWDGEN;
		else if(Device == Saber_RCC_TIM14)
			RCC->APB1ENR |= RCC_APB1ENR_TIM14EN;
		else if(Device == Saber_RCC_TIM13)
			RCC->APB1ENR |= RCC_APB1ENR_TIM13EN;
		else if(Device == Saber_RCC_TIM12)
			RCC->APB1ENR |= RCC_APB1ENR_TIM12EN;
		else if(Device == Saber_RCC_TIM7)
			RCC->APB1ENR |= RCC_APB1ENR_TIM7EN;
		else if(Device == Saber_RCC_TIM6)
			RCC->APB1ENR |= RCC_APB1ENR_TIM6EN;
		else if(Device == Saber_RCC_TIM5)
			RCC->APB1ENR |= RCC_APB1ENR_TIM5EN;
		else if(Device == Saber_RCC_TIM4)
			RCC->APB1ENR |= RCC_APB1ENR_TIM14EN;
		else if(Device == Saber_RCC_TIM4)
			RCC->APB1ENR |= RCC_APB1ENR_TIM14EN;
		else if(Device == Saber_RCC_TIM3)
			RCC->APB1ENR |= RCC_APB1ENR_TIM3EN;
		else if(Device == Saber_RCC_TIM2)
			RCC->APB1ENR |= RCC_APB1ENR_TIM2EN;
		else if(Device == Saber_RCC_LTDC)//APB2
			RCC->APB2ENR |= RCC_APB2ENR_LTDCEN;
		else if(Device == Saber_RCC_SAI1)
			RCC->APB2ENR |= RCC_APB2ENR_SAI1EN;
		else if(Device == Saber_RCC_SPI6)
			RCC->APB2ENR |= RCC_APB2ENR_SPI6EN;
		else if(Device == Saber_RCC_SPI5)
			RCC->APB2ENR |= RCC_APB2ENR_SPI5EN;
		else if(Device == Saber_RCC_TIM11)
			RCC->APB2ENR |= RCC_APB2ENR_TIM11EN;
		else if(Device == Saber_RCC_TIM10)
			RCC->APB2ENR |= RCC_APB2ENR_TIM10EN;
		else if(Device == Saber_RCC_TIM9)
			RCC->APB2ENR |= RCC_APB2ENR_TIM9EN;
		else if(Device == Saber_RCC_SYSCFG)
			RCC->APB2ENR |= RCC_APB2ENR_SYSCFGEN;
		else if(Device == Saber_RCC_SPI4)
			RCC->APB2ENR |= RCC_APB2ENR_SPI4EN;
		else if(Device == Saber_RCC_SPI1)
			RCC->APB2ENR |= RCC_APB2ENR_SPI1EN;
		else if(Device == Saber_RCC_SDIO)
			RCC->APB2ENR |= RCC_APB2ENR_SDIOEN;
		else if(Device == Saber_RCC_ADC3)
			RCC->APB2ENR |= RCC_APB2ENR_ADC3EN;
		else if(Device == Saber_RCC_ADC2)
			RCC->APB2ENR |= RCC_APB2ENR_ADC2EN;
		else if(Device == Saber_RCC_ADC1)
			RCC->APB2ENR |= RCC_APB2ENR_ADC1EN;
		else if(Device == Saber_RCC_UART6)
			RCC->APB2ENR |= RCC_APB2ENR_USART6EN;
		else if(Device == Saber_RCC_UART1)
			RCC->APB2ENR |= RCC_APB2ENR_USART1EN;
		else if(Device == Saber_RCC_TIM8)
			RCC->APB2ENR |= RCC_APB2ENR_TIM8EN;
		else if(Device == Saber_RCC_TIM1)
			RCC->APB2ENR |= RCC_APB2ENR_TIM1EN;
	}
}
