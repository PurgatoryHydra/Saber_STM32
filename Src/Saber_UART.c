#include "Saber_UART.h"
#include "Saber_RCC.h"
#include "Saber_GPIO.h"

void Saber_UART_Init(USART_TypeDef *UARTx, uint32_t pclk2, uint32_t bound)
{
	float temp;
	u16 mantissa;
	u16 fraction;
	temp = (float)(pclk2*1000000) / (bound*16);
	mantissa = temp;
	fraction = (temp-mantissa) * 16;
  mantissa<<=4;
	mantissa+=fraction;
	if(UARTx == USART1)
	{
		Saber_RCC_Init(Saber_RCC_UART1);
		if(Saber_PIN_UART1 == Saber_UART1_PA9_PA10)
		{
			Saber_RCC_Init(Saber_RCC_GPIOA);
			Saber_GPIO_Init(GPIOA,  9, Saber_GPIO_MODE_GPOAPP);
			Saber_GPIO_Init(GPIOA, 10, Saber_GPIO_MODE_GPOAPP);
			GPIOA->AFR[1] |= Saber_GPIO_AF_USART1 << (1 * 4);
			GPIOA->AFR[1] |= Saber_GPIO_AF_USART1 << (2 * 4);
		}
		else if(Saber_PIN_UART1 == Saber_UART1_PB6_PB7)
		{
			Saber_RCC_Init(Saber_RCC_GPIOB);
			Saber_GPIO_Init(GPIOB,  6, Saber_GPIO_MODE_GPOAPP);
			Saber_GPIO_Init(GPIOB,  7, Saber_GPIO_MODE_GPOAPP);
			GPIOB->AFR[0] |= Saber_GPIO_AF_USART1 << (6 * 4);
			GPIOB->AFR[0] |= Saber_GPIO_AF_USART1 << (7 * 4);
		}
		else
			AssertFailed("UART1 pin configuration error. Function: Saber_UART_Init");
	}
	else if(UARTx == USART2)
	{
		Saber_RCC_Init(Saber_RCC_UART2);
		if(Saber_PIN_UART2 == Saber_UART2_PA2_PA3)
		{
			Saber_RCC_Init(Saber_RCC_GPIOA);
			Saber_GPIO_Init(GPIOA,  2, Saber_GPIO_MODE_GPOAPP);
			Saber_GPIO_Init(GPIOA,  3, Saber_GPIO_MODE_GPOAPP);
			GPIOA->AFR[0] |= Saber_GPIO_AF_USART2 << (2 * 4);
			GPIOA->AFR[0] |= Saber_GPIO_AF_USART2 << (3 * 4);
		}
		else if(Saber_PIN_UART2 == Saber_UART2_PD5_PD6)
		{
			Saber_RCC_Init(Saber_RCC_GPIOD);
			Saber_GPIO_Init(GPIOD,  5, Saber_GPIO_MODE_GPOAPP);
			Saber_GPIO_Init(GPIOD,  6, Saber_GPIO_MODE_GPOAPP);
			GPIOD->AFR[0] |= Saber_GPIO_AF_USART2 << (5 * 4);
			GPIOD->AFR[0] |= Saber_GPIO_AF_USART2 << (6 * 4);
		}
		else
			AssertFailed("UART2 pin configuration error. Function: Saber_UART_Init");
	}
	else if(UARTx == USART3)
	{
		Saber_RCC_Init(Saber_RCC_UART3);
		if(Saber_PIN_UART3 == Saber_UART3_PB10_PB11)
		{
			Saber_RCC_Init(Saber_RCC_GPIOA);
			Saber_GPIO_Init(GPIOB, 10, Saber_GPIO_MODE_GPOAPP);
			Saber_GPIO_Init(GPIOB, 11, Saber_GPIO_MODE_GPOAPP);
			GPIOB->AFR[1] |= Saber_GPIO_AF_USART3 << (2 * 4);
			GPIOB->AFR[1] |= Saber_GPIO_AF_USART3 << (3 * 4);
		}
		else if(Saber_PIN_UART3	== Saber_UART3_PD8_PD9)
		{
			Saber_RCC_Init(Saber_RCC_GPIOD);
			Saber_GPIO_Init(GPIOD,  8, Saber_GPIO_MODE_GPOAPP);
			Saber_GPIO_Init(GPIOD,  9, Saber_GPIO_MODE_GPOAPP);
			GPIOD->AFR[1] |= Saber_GPIO_AF_USART3 << (0 * 4);
			GPIOD->AFR[1] |= Saber_GPIO_AF_USART3 << (1 * 4);
		}
		else if(Saber_PIN_UART3 == Saber_UART3_PC10_PC11)
		{
			Saber_RCC_Init(Saber_RCC_GPIOC);
			Saber_GPIO_Init(GPIOC, 10, Saber_GPIO_MODE_GPOAPP);
			Saber_GPIO_Init(GPIOC, 11, Saber_GPIO_MODE_GPOAPP);
			GPIOC->AFR[1] |= Saber_GPIO_AF_USART3 << (2 * 4);
			GPIOC->AFR[1] |= Saber_GPIO_AF_USART3 << (3 * 4);
		}
		else
			AssertFailed("UART3 pin configuration error. Function: Saber_UART_Init");
	}
	else if(UARTx == UART4)
	{
		Saber_RCC_Init(Saber_RCC_UART4);
		if(Saber_PIN_UART4 == Saber_UART4_PA0_PA1)
		{
			Saber_RCC_Init(Saber_RCC_GPIOA);
			Saber_GPIO_Init(GPIOA,  0, Saber_GPIO_MODE_GPOAPP);
			Saber_GPIO_Init(GPIOA,  1, Saber_GPIO_MODE_GPOAPP);
			GPIOA->AFR[0] |= Saber_GPIO_AF_USART4 << (0 * 4);
			GPIOA->AFR[0] |= Saber_GPIO_AF_USART4 << (1 * 4);
		}
		else if(Saber_PIN_UART4 == Saber_UART4_PC10_PC11)
		{
			Saber_RCC_Init(Saber_RCC_GPIOC);
			Saber_GPIO_Init(GPIOC, 10, Saber_GPIO_MODE_GPOAPP);
			Saber_GPIO_Init(GPIOC, 11, Saber_GPIO_MODE_GPOAPP);
			GPIOC->AFR[1] |= Saber_GPIO_AF_USART4 << (2 * 4);
			GPIOC->AFR[1] |= Saber_GPIO_AF_USART4 << (3 * 4);
		}
		else
			AssertFailed("UART4 pin configuration error. Function: Saber_UART_Init");
	}
	else if(UARTx == UART5)
	{
		Saber_RCC_Init(Saber_RCC_UART5);
		if(Saber_PIN_UART5 == Saber_UART5_PC12_PD2)
		{
			Saber_RCC_Init(Saber_RCC_GPIOC);
			Saber_RCC_Init(Saber_RCC_GPIOD);
			Saber_GPIO_Init(GPIOC, 12, Saber_GPIO_MODE_GPOAPP);
			Saber_GPIO_Init(GPIOD,  2, Saber_GPIO_MODE_GPOAPP);
			GPIOC->AFR[1] |= Saber_GPIO_AF_USART5 << (3 * 4);
			GPIOD->AFR[0] |= Saber_GPIO_AF_USART5 << (2 * 4);
		}
		else
			AssertFailed("UART5 pin configuration error. Function: Saber_UART_Init");
	}
	else if(UARTx == USART6)
	{
		Saber_RCC_Init(Saber_RCC_UART6);
		if(Saber_PIN_UART6 == Saber_UART6_PC6_PC7)
		{
			Saber_RCC_Init(Saber_RCC_GPIOC);
			Saber_GPIO_Init(GPIOC,  6, Saber_GPIO_MODE_GPOAPP);
			Saber_GPIO_Init(GPIOC,  7, Saber_GPIO_MODE_GPOAPP);
			GPIOC->AFR[0] |= Saber_GPIO_AF_USART6 << (6 * 4);
			GPIOC->AFR[0] |= Saber_GPIO_AF_USART6 << (7 * 4);
		}
		else if(Saber_PIN_UART6 == Saber_UART6_PG14_PG9)
		{
			Saber_RCC_Init(Saber_RCC_GPIOG);
			Saber_GPIO_Init(GPIOG, 14, Saber_GPIO_MODE_GPOAPP);
			Saber_GPIO_Init(GPIOG,  9, Saber_GPIO_MODE_GPOAPP);
			GPIOG->AFR[1] |= Saber_GPIO_AF_USART6 << (6 * 4);
			GPIOG->AFR[1] |= Saber_GPIO_AF_USART6 << (1 * 4);
		}
		else
			AssertFailed("UART6 pin configuration error. Function: Saber_UART_Init");
	}
 	UARTx->BRR = mantissa;
	USART1->CR1 &=~ USART_CR1_OVER8;
	USART1->CR1 |= USART_CR1_TE;
#if EN_USART1_RX		  	//如果使能了接收
	//使能接收中断 
	USART1->CR1|=1<<2;  	//串口接收使能
	USART1->CR1|=1<<5;    	//接收缓冲区非空中断使能	    	
	MY_NVIC_Init(3,3,USART1_IRQn,2);//组2，最低优先级 
#endif
	USART1->CR1|=1<<13;  	//串口使能
}
