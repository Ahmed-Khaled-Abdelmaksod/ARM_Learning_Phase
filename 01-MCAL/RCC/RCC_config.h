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
	Choose the source of the PLL using the following Macroes 
	
	- RCC_PLL_ENRTY_SRC_HSI_DIV_2     
	- RCC_PLL_ENRTY_SRC_HSE 
*/

#define RCC_PLL_ENRTY_SRC RCC_PLL_ENRTY_SRC_HSI_DIV_2


/*
	Choose the Mul of PLL value : 
	- RCC_PLL_MUL_2 
	- RCC_PLL_MUL_3 
	- RCC_PLL_MUL_4 
	- RCC_PLL_MUL_5 
	- RCC_PLL_MUL_6 
	- RCC_PLL_MUL_7 
	- RCC_PLL_MUL_8 
	- RCC_PLL_MUL_9 
	- RCC_PLL_MUL_10 
	- RCC_PLL_MUL_11
	- RCC_PLL_MUL_12
	- RCC_PLL_MUL_13
	- RCC_PLL_MUL_14
	- RCC_PLL_MUL_15
	- RCC_PLL_MUL_16
 */
#define RCC_PLL_MUL  RCC_PLL_MUL_2


/*
	Choose the source of the system clock using the following Macroes :
	- RCC_ENABLE_Clock_SECUIRTY_SYSTEM
	- RCC_DISABLE_Clock_SECUIRTY_SYSTEM
*/
#define RCC_CLOCK_SECUIRTY_SYSTEM RCC_ENABLE_Clock_SECUIRTY_SYSTEM



/*
	Choose one value for HSE input for PLL Value : 
	- RCC_HSE_PLL_ENTRY_DIV_2
	- RCC_HSE_PLL_ENTRY_DIV_1
 */

#define RCC_HSE_PLL_ENTRY  RCC_HSE_PLL_ENTRY_DIV_1

#endif