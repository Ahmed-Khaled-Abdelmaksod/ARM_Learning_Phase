/*************************************************/
/* @Author  : Ahmed Khaled Abdelmaksod Ebrahim   */
/* @Date    : 20 FEB 2024					     */
/* @version : V01 								 */
/*************************************************/
#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H

/********************** include section *********************/


#include"RCC_private.h"


/********************* defination section *******************/
/*          BUSES NAME               */ 
#define RCC_AHB_BUS     0
#define RCC_APB1_BUS    1
#define RCC_APB2_BUS    2

/*          AHB PERIFERALS           */

#define RCC_AHB_DMA1    0
#define RCC_AHB_DMA2	1
#define RCC_AHB_SRAM    2
#define RCC_AHB_FLITF   4
#define RCC_AHB_CRC     6
#define RCC_AHB_FSMC    8
#define RCC_AHB_SDIO    10

/*          APB1 PERIFERALS           */
/* this macroes will be useful in  RCC_voidEnablePeripheralClock and RCC_voidDisablePeripheralClock function */ 
#define RCC_APB1_TIM2         0
#define RCC_APB1_TIM3         1  
#define RCC_APB1_TIM4         2  
#define RCC_APB1_TIM5         3
#define RCC_APB1_TIM6  	      4
#define RCC_APB1_TIM7         5
#define RCC_APB1_TIM12        6
#define RCC_APB1_TIM13        7
#define RCC_APB1_TIM14        8
						     
#define RCC_APB1_WWDG         11  
#define RCC_APB1_SPI2         14  
#define RCC_APB1_SPI3         15
#define RCC_APB1_USART2       17   
#define RCC_APB1_USART3       18   
#define RCC_APB1_USART4       19  
#define RCC_APB1_USART5       20   
#define RCC_APB1_I2C1		  21  
#define RCC_APB1_I2C2  		  22
#define RCC_APB1_USB  		  23
#define RCC_APB1_CAN          25
#define RCC_APB1_BKP          27  
#define RCC_APB1_PWR          28  
#define RCC_APB1_DAC          29  


/*          APB2 PERIFERALS           */
#define RCC_APB2_AFIO         	0
#define RCC_APB2_IOPA         	2
#define RCC_APB2_IOPB			3
#define RCC_APB2_IOPC			4
#define RCC_APB2_IOPD			5
#define RCC_APB2_IOPE			6
#define RCC_APB2_IOPF           7
#define RCC_APB2_IOPG			8
#define RCC_APB2_ADC1			9
#define RCC_APB2_ADC2			10
#define RCC_APB2_TIM1			11
#define RCC_APB2_SPI1			12	
#define RCC_APB2_TIM8			13
#define RCC_APB2_USART1			14
#define RCC_APB2_ADC3			15
#define RCC_APB2_TIM9			19
#define RCC_APB2_TIM10			20
#define RCC_APB2_TIM11			21
/********************* sw functions sections ****************/
/* ->>>>> DOC it   */
void RCC_voidEnablePeripheralClock(u8 copy_u8PeripheralBus,u8 copy_u16Peripheral);
void RCC_voidDisablePeripheralClock(u8 copy_u8PeripheralBus,u8 copy_u16Peripheral);




#endif