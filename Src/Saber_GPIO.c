#include "Saber_GPIO.h"
#include "Saber_RCC.h"
#include "Saber_UART.h"

uint8_t portMode[11][15] = {255};

uint8_t Saber_GPIO_GetIndex(GPIO_TypeDef *GPIOx)
{
	uint8_t index;
	
	if(GPIOx == GPIOA)
		index = 0;
	else if(GPIOx == GPIOB)
		index = 1;
	else if(GPIOx == GPIOC)
		index = 2;
	else if(GPIOx == GPIOD)
		index = 3;
	else if(GPIOx == GPIOE)
		index = 4;
	else if(GPIOx == GPIOF)
		index = 5;
	else if(GPIOx == GPIOG)
		index = 6;
	else if(GPIOx == GPIOH)
		index = 7;
	else if(GPIOx == GPIOI)
		index = 8;
	else if(GPIOx == GPIOJ)
		index = 9;
	else if(GPIOx == GPIOK)
		index = 10;
	else
		AssertFailed("GPIO Port not exist in function 'Saber_GPIO_GetIndex'");
	
	return index;
}

void Saber_GPIO_Init(GPIO_TypeDef *GPIOx, uint8_t Pinx, uint32_t IO)
{
	uint8_t mode;
	uint8_t oTyper;
	uint8_t pupd;
	uint8_t index;
	
	index = Saber_GPIO_GetIndex(GPIOx);
	
	if(GPIOx == GPIOA)
		Saber_RCC_Init(Saber_RCC_GPIOA);
	else if(GPIOx == GPIOB)
		Saber_RCC_Init(Saber_RCC_GPIOB);
	else if(GPIOx == GPIOC)
		Saber_RCC_Init(Saber_RCC_GPIOC);
	else if(GPIOx == GPIOD)
		Saber_RCC_Init(Saber_RCC_GPIOD);
	else if(GPIOx == GPIOE)
		Saber_RCC_Init(Saber_RCC_GPIOE);
	else if(GPIOx == GPIOF)
		Saber_RCC_Init(Saber_RCC_GPIOF);
	else if(GPIOx == GPIOG)
		Saber_RCC_Init(Saber_RCC_GPIOG);
	else if(GPIOx == GPIOH)
		Saber_RCC_Init(Saber_RCC_GPIOH);
	else if(GPIOx == GPIOI)
		Saber_RCC_Init(Saber_RCC_GPIOI);
	else if(GPIOx == GPIOJ)
		Saber_RCC_Init(Saber_RCC_GPIOJ);
	else if(GPIOx == GPIOK)
		Saber_RCC_Init(Saber_RCC_GPIOK);
	else
		AssertFailed("RCC GPIO device not exist. Function 'Saber_GPIO_Init'");
	
	if(IO == Saber_GPIO_MODE_GPIA)
	{
		mode = 0x03;
	}
	else if(IO == Saber_GPIO_MODE_GPIF)
	{
		mode = 0x00;
	}
	else if(IO == Saber_GPIO_MODE_GPIU)
	{
		mode = 0x00;
		pupd = 0x01;
	}
	else if(IO == Saber_GPIO_MODE_GPID)
	{
		mode = 0x00;
		pupd = 0x02;
	}
	else if(IO == Saber_GPIO_MODE_GPOGPP)
	{
		mode = 0x01;
		oTyper = 0;
	}
	else if(IO == Saber_GPIO_MODE_GPOGOD)
	{
		mode = 0x01;
		oTyper = 1;
	}
	else if(IO == Saber_GPIO_MODE_GPOAPP)
	{
		mode = 0x02;
		oTyper = 0;
	}
	else if(IO == Saber_GPIO_MODE_GPOAOD)
	{
		mode = 0x02;
		oTyper = 1;
	}
	else
		AssertFailed("GPIO Mode not exist. Function 'Saber_GPIO_Init'");
	
	GPIOx->MODER &=~ 0x03 << (Pinx * 2);
	GPIOx->MODER |=  mode << (Pinx * 2);
	
	GPIOx->OTYPER &=~ 0x01 << Pinx;
	GPIOx->OTYPER |= oTyper << Pinx;
	
	GPIOx->OSPEEDR |= 0x11 << (Pinx * 2);
	
	GPIOx->PUPDR &=~ 0x03 << (Pinx * 2);
	GPIOx->PUPDR |=  pupd << (Pinx * 2);
	//Regist. 
	portMode[index][Pinx] = IO;
}

uint8_t Saber_GPIO_Get(GPIO_TypeDef *GPIOx, uint8_t Pinx)
{
#ifdef Saber_GPIO_Assert
	if(portMode[Saber_GPIO_GetIndex][Pinx] > 0x00000003)
		AssertFailed("Port is not in input mode. Function: Saber_GPIO_Get")
#endif
	return (GPIOx->IDR & (1 << Pinx));
}

void Saber_GPIO_Set(GPIO_TypeDef *GPIOx, uint8_t Pinx, uint8_t State)
{
#ifdef Saber_GPIO_Assert
	if(portMode[Saber_GPIO_GetIndex][Pinx] != Saber_GPIO_MODE_GPOGPP && portMode[Saber_GPIO_GetIndex][Pinx] != Saber_GPIO_MODE_GPOGOD)
		AssertFailed("Port is not in output mode");
#endif
	if(State)
		GPIOx->ODR |= 1 << Pinx;
	else
		GPIOx->ODR &=~ 1 << Pinx;
}

void Saber_GPIO_Turn(GPIO_TypeDef *GPIOx, uint8_t Pinx)
{
#ifdef Saber_GPIO_Assert
	if(portMode[Saber_GPIO_GetIndex][Pinx] != Saber_GPIO_MODE_GPOGPP && portMode[Saber_GPIO_GetIndex][Pinx] != Saber_GPIO_MODE_GPOGOD)
		AssertFailed("Port is not in output mode");
#endif
	if(GPIOx->ODR & (1 << Pinx))
		GPIOx->ODR &=~ 1 << Pinx;
	else
		GPIOx->ODR |=  1 << Pinx;
}
