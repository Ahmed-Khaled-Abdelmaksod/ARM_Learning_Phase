/*************************************************/
/* @Author  : Ahmed Khaled Abdelmaksod Ebrahim   */
/* @Date    : 20 FEB 2024					     */
/* @version : V01 								 */
/*************************************************/
#ifndef RCC_CONFIG_H
#define RCC_CONFIG_H

/*
	Choose the source of the system clock using the following Macroes 
	
	- RCC_CLK_SRC_HSI     
	- RCC_CLK_SRC_HSE     
	- RCC_CLK_SRC_PLL     
*/

#define RCC_CLK_SRC 	RCC_CLK_SRC_HSI


/*
	Choose the source of the system clock using the following Macroes :
	- RCC_ENABLE_Clock_SECUIRTY_SYSTEM
	- RCC_DISABLE_Clock_SECUIRTY_SYSTEM
*/

#define RCC_CLOCK_SECUIRTY_SYSTEM RCC_ENABLE_Clock_SECUIRTY_SYSTEM
#endif