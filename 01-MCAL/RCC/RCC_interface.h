/*************************************************/
/* @Author  : Ahmed Khaled Abdelmaksod Ebrahim   */
/* @Date    : 20 FEB 2024					     */
/* @version : V01 								 */
/*************************************************/
#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H

/********************** include section *********************/


#include"RCC_private.h"


/********************* sw functions sections ****************/
/****
	this Doc will be helpful on RCC_voidEnablePeripheralClock and RCC_voidDisablePeripheralClock
	#if you choose RCC_AHB_BUS for copy_u8PeripheralBus
		this is values are avaliable for copy_u8Peripheral
		- RCC_AHB_DMA1    
		- RCC_AHB_DMA2	
		- RCC_AHB_SRAM    
		- RCC_AHB_FLITF   
		- RCC_AHB_CRC     
		- RCC_AHB_FSMC    
		- RCC_AHB_SDIO
	#if you choose RCC_APB1_BUS for copy_u8PeripheralBus
		this is values are avaliable for copy_u8Peripheral	
		- RCC_APB1_TIM2         
		- RCC_APB1_TIM3          
		- RCC_APB1_TIM4          
		- RCC_APB1_TIM5        
		- RCC_APB1_TIM6  	     
		- RCC_APB1_TIM7        
		- RCC_APB1_TIM12       
		- RCC_APB1_TIM13       
		- RCC_APB1_TIM14      					 
		- RCC_APB1_WWDG        
		- RCC_APB1_SPI2        
		- RCC_APB1_SPI3         
		- RCC_APB1_USART2         
		- RCC_APB1_USART3         
		- RCC_APB1_USART4        
		- RCC_APB1_USART5         
		- RCC_APB1_I2C1		   
		- RCC_APB1_I2C2  		  
		- RCC_APB1_USB  		  
		- RCC_APB1_CAN          
		- RCC_APB1_BKP            
		- RCC_APB1_PWR            
		- RCC_APB1_DAC           
	#if you choose RCC_APB2_BUS for copy_u8PeripheralBus
		this is values are avaliable for copy_u8Peripheral
		
		- RCC_APB2_AFIO        
		- RCC_APB2_IOPA        
		- RCC_APB2_IOPB			
		- RCC_APB2_IOPC			
		- RCC_APB2_IOPD			
		- RCC_APB2_IOPE			
		- RCC_APB2_IOPF        
		- RCC_APB2_IOPG			
		- RCC_APB2_ADC1			
		- RCC_APB2_ADC2			
		- RCC_APB2_TIM1			
		- RCC_APB2_SPI1			
		- RCC_APB2_TIM8			
		- RCC_APB2_USART1		
		- RCC_APB2_ADC3			
		- RCC_APB2_TIM9			
		- RCC_APB2_TIM10		
		- RCC_APB2_TIM11		
*/
/*
 * Function: RCC_voidEnablePeripheralClock
 * Description: Enables the clock for a specific peripheral.
 * Parameters:
 *    - copy_u8PeripheralBus: The bus to which the peripheral is connected (e.g., AHB, APB1, APB2).
 *    - copy_u8Peripheral: The specific peripheral to enable its clock.
 * Returns:
 *    None
 * Example:
 *    RCC_voidEnablePeripheralClock(RCC_AHB, RCC_APB2_IOPA,RCC_APB2_BUS); // Enables the clock for GPIOA connected to APB2 bus.
 */
void RCC_voidEnablePeripheralClock(u8 copy_u8PeripheralBus,u8 copy_u8Peripheral);

/*
 * Function: RCC_voidDisablePeripheralClock
 * Description: Disables the clock for a specific peripheral.
 * Parameters:
 *    - copy_u8PeripheralBus: The bus to which the peripheral is connected (e.g., AHB, APB1, APB2).
 *    - copy_u8Peripheral: The specific peripheral to disable its clock.
 * Returns:
 *    None
 * Example:
 *    RCC_voidDisablePeripheralClock(RCC_AHB, RCC_APB2_IOPA,RCC_APB2_BUS); // Disables the clock for GPIOA connected to APB2 bus.
 */
void RCC_voidDisablePeripheralClock(u8 copy_u8PeripheralBus,u8 copy_u8Peripheral);

/*
 * Function: RCC_voidInitSystemClock
 * Description: Initializes the system clock configuration.
 * Parameters: None
 * Returns: None
 * Note: This function configures the microcontroller's system clock settings.
 *       Specific configurations may include setting the source, frequency, and dividers for the system clock.
 *       Ensure that the required configurations are properly set based on the microcontroller's datasheet and reference manual.
 * Example:
 *    RCC_voidInitSystemClock(); // Initializes the system clock with default or predefined settings.
 */
void RCC_voidInitSystemClock(void);



#endif