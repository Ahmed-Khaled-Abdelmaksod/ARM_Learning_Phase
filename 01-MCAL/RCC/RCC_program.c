/*************************************************/
/* @Author  : Ahmed Khaled Abdelmaksod Ebrahim   */
/* @Date    : 20 FEB 2024					     */
/* @version : V01 								 */
/*************************************************/

/******************** Include Section *********************/
#include"../../LIB/BIT_MATH.h"
#include"../../LIB/STD_TYPES.h"
#include "RCC_interface.h"
#include "RCC_config.h"
void RCC_voidEnablePeripheralClock(u8 copy_u8PeripheralBus,u8 copy_u8Peripheral)
{
	if(copy_u8PeripheralBus > 2)
	{
		#error("Wrong choice for the bus ");
	}
	else
	{
		switch(copy_u8PeripheralBus) /* Check which bus the user need */
		{
			case RCC_AHB_BUS:
				/* Enable the clock on the specified peripheral */
				
				SET_BIT(RCC_AHBENR,copy_u8Peripheral); 
				break;
			case RCC_APB1_BUS:
				/* Enable the clock on the specified peripheral */
				
				SET_BIT(RCC_APB1ENR,copy_u8Peripheral); 
				break;
			case RCC_APB2_BUS:
				/* Enable the clock on the specified peripheral */
				
				SET_BIT(RCC_APB2ENR,copy_u8Peripheral);
				break;
		}
	}
}
void RCC_voidDisablePeripheralClock(u8 copy_u8PeripheralBus,u8 copy_u16Peripheral)
{
	if(copy_u8PeripheralBus > 2)
	{
		#error("Wrong choice for the bus ");
	}
	else
	{
		switch(copy_u8PeripheralBus) /* Check which bus the user need */
		{
			case RCC_AHB_BUS:
				/* Enable the clock on the specified peripheral */
				
				CLR_BIT(RCC_AHBENR,copy_u8Peripheral); 
				break;
			case RCC_APB1_BUS:
				/* Enable the clock on the specified peripheral */
				
				CLR_BIT(RCC_APB1ENR,copy_u8Peripheral); 
				break;
			case RCC_APB2_BUS:
				/* Enable the clock on the specified peripheral */
				
				CLR_BIT(RCC_APB2ENR,copy_u8Peripheral);
				break;
		}
	}
}


void RCC_voidInitSystemClock(void)
{
	#if RCC_CLK_SRC == RCC_CLK_SRC_HSI
		/*  SET the HSION bit         */
		RCC_CR = 0x00000081;
		/*  Set by hardware to indicate that internal 8 MHz RC oscillator is stable */	
		while(!GET_BIT(RCC_CR,1));
		/*	00: HSI selected as system clock */
		RCC_CFGR |= 0X00000003;
		RCC_CFGR &= 0XFFFFFFFC;
		
		
	#elif RCC_CLK_SRC == RCC_CLK_SRC_HSE
	
	
		/*  SET the HSEON bit         */
		RCC_CR = 0x00010080;
		/* Set by hardware to indicate that the HSE oscillator is stable. */
		while(!GET_BIT(RCC_CR,17));
		
		/* HSE selected as system clock */
		RCC_CFGR |= 0X00000003;
		RCC_CFGR &= 0XFFFFFFFD;
		
		
	#elif RCC_CLK_SRC == RCC_CLK_SRC_PLL
	
	#endif
}