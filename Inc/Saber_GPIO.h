#ifndef __SABER_GPIO_H
#define __SABER_GPIO_H

#include "stm32f4xx.h"

#define Saber_GPIO_MODE_GPIA			0x00000000
#define Saber_GPIO_MODE_GPIF			0x00000001
#define Saber_GPIO_MODE_GPIU			0x00000002
#define Saber_GPIO_MODE_GPID			0x00000003
#define Saber_GPIO_MODE_GPOGPP		0x00000004
#define Saber_GPIO_MODE_GPOGOD		0x00000005
#define Saber_GPIO_MODE_GPOAPP		0x00000006
#define Saber_GPIO_MODE_GPOAOD		0x00000007

#define Saber_GPIO_GPIOA					0x00000000
#define Saber_GPIO_GPIOB					0x00000001
#define Saber_GPIO_GPIOC					0x00000002
#define Saber_GPIO_GPIOD					0x00000003
#define Saber_GPIO_GPIOE					0x00000004
#define Saber_GPIO_GPIOF					0x00000005
#define Saber_GPIO_GPIOG					0x00000006
#define Saber_GPIO_GPIOH					0x00000007
#define Saber_GPIO_GPIOI					0x00000008
#define Saber_GPIO_GPIOJ		 			0x00000009
#define Saber_GPIO_GPIOK					0x0000000A

#define Saber_GPIO_AF_system			0x00000000
#define Saber_GPIO_AF_TIM1				0x00000001
#define Saber_GPIO_AF_TIM2				0x00000001
#define Saber_GPIO_AF_TIM3				0x00000002
#define Saber_GPIO_AF_TIM4				0x00000002
#define Saber_GPIO_AF_TIM5				0x00000002
#define Saber_GPIO_AF_TIM8				0x00000003
#define Saber_GPIO_AF_TIM9				0x00000003
#define Saber_GPIO_AF_TIM10				0x00000003
#define Saber_GPIO_AF_TIM11				0x00000003
#define Saber_GPIO_AF_I2C1				0x00000004
#define Saber_GPIO_AF_I2C2				0x00000004
#define Saber_GPIO_AF_I2C3				0x00000004
#define Saber_GPIO_AF_SPI1				0x00000005
#define Saber_GPIO_AF_SPI2				0x00000005
#define Saber_GPIO_AF_SPI3				0x00000006
#define Saber_GPIO_AF_USART1			0x00000007
#define Saber_GPIO_AF_USART2			0x00000007
#define Saber_GPIO_AF_USART3			0x00000007
#define Saber_GPIO_AF_USART4			0x00000008
#define Saber_GPIO_AF_USART5			0x00000008
#define Saber_GPIO_AF_USART6			0x00000008
#define Saber_GPIO_AF_CAN1				0x00000009
#define Saber_GPIO_AF_CAN2				0x00000009
#define Saber_GPIO_AF_TIM12				0x00000009
#define Saber_GPIO_AF_TIM13				0x00000009
#define Saber_GPIO_AF_TIM14				0x00000009
#define Saber_GPIO_AF_OTG_FS			0x00000010
#define Saber_GPIO_AF_OTG_HS			0x00000010
#define Saber_GPIO_AF_ETH					0x00000011
#define Saber_GPIO_AF_FSMC				0x00000012
#define Saber_GPIO_AF_SDIO				0x00000012
#define Saber_GPIO_AF_DCMI				0x00000013
#define Saber_GPIO_AF_EVENTOUT		0x00000015

void Saber_GPIO_Init(GPIO_TypeDef *GPIOx, uint8_t Pinx, uint32_t IO);
uint8_t Saber_GPIO_Get(GPIO_TypeDef *GPIOx, uint8_t Pinx);
void Saber_GPIO_Set(GPIO_TypeDef *GPIOx, uint8_t Pinx, uint8_t State);
void Saber_GPIO_Turn(GPIO_TypeDef *GPIOx, uint8_t Pinx);

#endif
