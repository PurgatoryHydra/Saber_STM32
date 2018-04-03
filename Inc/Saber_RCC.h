#ifndef __SABER_RCC_H
#define __SABER_RCC_H

#include "stm32f4xx.h"

//AHB1.
#define Saber_RCC_OTGHSULPI		0x00000000
#define Saber_RCC_OTGHS				0x00000001
#define Saber_RCC_ETHMACPTP		0x00000002
#define Saber_RCC_ETHMACRX		0x00000003
#define Saber_RCC_ETHMACTX		0x00000004
#define Saber_RCC_ETHMAC			0x00000005
#define Saber_RCC_DMA2D				0x00000006
#define Saber_RCC_DMA2				0x00000007
#define Saber_RCC_DMA1				0x00000008
#define Saber_RCC_CCMDATARAM	0x00000009
#define Saber_RCC_BKPSRAM			0x0000000A
#define Saber_RCC_CRC					0x0000000B
#define Saber_RCC_GPIOK				0x0000000C
#define Saber_RCC_GPIOJ				0x0000000D
#define Saber_RCC_GPIOI				0x0000000E
#define Saber_RCC_GPIOH				0x0000000F
#define Saber_RCC_GPIOG				0x00000010
#define Saber_RCC_GPIOF				0x00000011
#define Saber_RCC_GPIOE				0x00000012
#define Saber_RCC_GPIOD				0x00000013
#define Saber_RCC_GPIOC				0x00000014
#define Saber_RCC_GPIOB				0x00000015
#define Saber_RCC_GPIOA				0x00000016
//AHB2.
#define Saber_RCC_OTGFS				0x00000017
#define Saber_RCC_RNG					0x00000018
#define Saber_RCC_HASH				0x00000019
#define Saber_RCC_CRYP				0x0000001A
#define Saber_RCC_DCMI				0x0000001B
//AHB3.
#define Saber_RCC_FMC					0x0000001C
//APB1.
#define Saber_RCC_UART8				0x0000001D
#define Saber_RCC_UART7				0x0000001E
#define Saber_RCC_DAC					0x0000001F
#define Saber_RCC_PWR					0x00000020
#define Saber_RCC_CAN2				0x00000021
#define Saber_RCC_CAN1				0x00000022
#define Saber_RCC_I2C3				0x00000023
#define Saber_RCC_I2C2				0x00000024
#define Saber_RCC_I2C1				0x00000025
#define Saber_RCC_UART5				0x00000026
#define Saber_RCC_UART4				0x00000027
#define Saber_RCC_UART3				0x00000028
#define Saber_RCC_UART2				0x00000029
#define Saber_RCC_SPI3				0x0000002A
#define Saber_RCC_SPI2				0x0000002B
#define Saber_RCC_WWDG				0x0000002C
#define Saber_RCC_TIM14				0x0000002D
#define Saber_RCC_TIM13				0x0000002E
#define Saber_RCC_TIM12				0x0000002F
#define Saber_RCC_TIM7				0x00000030
#define Saber_RCC_TIM6				0x00000031
#define Saber_RCC_TIM5				0x00000032
#define Saber_RCC_TIM4				0x00000033
#define Saber_RCC_TIM3				0x00000034
#define Saber_RCC_TIM2				0x00000035
//APB2.
#define Saber_RCC_LTDC				0x00000036
#define Saber_RCC_SAI1				0x00000037
#define Saber_RCC_SPI6				0x00000038
#define Saber_RCC_SPI5				0x00000039
#define Saber_RCC_TIM11				0x0000003A
#define Saber_RCC_TIM10				0x0000003B
#define Saber_RCC_TIM9				0x0000003C
#define Saber_RCC_SYSCFG			0x0000003D
#define Saber_RCC_SPI4				0x0000003E
#define Saber_RCC_SPI1				0x0000003F
#define Saber_RCC_SDIO				0x00000040
#define Saber_RCC_ADC3				0x00000041
#define Saber_RCC_ADC2				0x00000042
#define Saber_RCC_ADC1				0x00000043
#define Saber_RCC_UART6				0x00000044
#define Saber_RCC_UART1				0x00000045
#define Saber_RCC_TIM8				0x00000046
#define Saber_RCC_TIM1				0x00000047

void Saber_RCC_Init(uint32_t Device);

#endif
