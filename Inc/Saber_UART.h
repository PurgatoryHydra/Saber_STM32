#ifndef __SABER_UART_H
#define __SABER_UART_H

#include "stm32f4xx.h"

//All pins in the format of TX_RX
#define Saber_UART1_PA9_PA10					0
#define Saber_UART1_PB6_PB7						1
#define Saber_PIN_UART1								Saber_UART1_PA9_PA10

#define Saber_UART2_PA2_PA3						0
#define Saber_UART2_PD5_PD6						1
#define Saber_PIN_UART2								Saber_UART2_PA2_PA3

#define Saber_UART3_PB10_PB11					0
#define Saber_UART3_PD8_PD9						1
#define Saber_UART3_PC10_PC11					2
#define Saber_PIN_UART3								Saber_UART3_PB10_PB11

#define Saber_UART4_PA0_PA1						0
#define Saber_UART4_PC10_PC11					1
#define Saber_PIN_UART4								Saber_UART4_PA0_PA1

#define Saber_UART5_PC12_PD2					0
#define Saber_PIN_UART5								Saber_UART5_PC12_PD2

#define Saber_UART6_PC6_PC7						0
#define Saber_UART6_PG14_PG9					1
#define Saber_PIN_UART6								Saber_UART6_PC6_PC7

void AssertFailed(char *str);

#endif
