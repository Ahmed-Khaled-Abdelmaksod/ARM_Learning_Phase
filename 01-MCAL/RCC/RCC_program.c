/*************************************************/
/* @Author  : Ahmed Khaled Abdelmaksod Ebrahim   */
/* @Date    : 20 FEB 2024					     */
/* @version : V01 								 */
/*************************************************/
/*V02 will contain prescaler config for all Buses (AHB - APB1 - APB2) */
/******************** Include Section *********************/
#include"../../LIB/BIT_MATH.h"
#include"../../LIB/STD_TYPES.h"

#include "RCC_interface.h"
#include "RCC_config.h"
void RCC_voidEnablePeripheralClock(u8 copy_u8PeripheralBus,u8 copy_u8Peripheral)
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
void RCC_voidDisablePeripheralClock(u8 copy_u8PeripheralBus,u8 copy_u8Peripheral)
{
	if(copy_u8PeripheralBus < 2)
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
		/*	00: HSI selected as system clock */
		RCC_CFGR |= 0X00000003;
		RCC_CFGR &= 0XFFFFFFFC;
		
		/*  SET the HSION bit         */
		RCC_CR = 0x00000081;
		/*  Set by hardware to indicate that internal 8 MHz RC oscillator is stable */	
		while(!GET_BIT(RCC_CR,1));
		
		

	#elif RCC_CLK_SRC == RCC_CLK_SRC_HSE
	
	
		
		/* HSE selected as system clock */
		RCC_CFGR |= 0X00000003;
		RCC_CFGR &= 0XFFFFFFFD;
		/*  SET the HSEON bit         */
		RCC_CR = 0x00010080;
		/* Set by hardware to indicate that the HSE oscillator is stable. */
		while(!GET_BIT(RCC_CR,17));
		
		
	#elif RCC_CLK_SRC == RCC_CLK_SRC_PLL
		
		/*  SET the PLLON bit  */
		CLR_BIT(RCC_CR,24);
		
		/* PLL clock ready flag */
		while(!GET_BIT(RCC_CR,25));
		
		/* PLL selected as system clock */
		RCC_CFGR |= 0X00000003;
		RCC_CFGR &= 0XFFFFFFFE;
		
		#if RCC_PLL_ENRTY_SRC == RCC_PLL_ENRTY_SRC_HSI_DIV_2
			CLR_BIT(RCC_CFGR,16);
		#elif  RCC_PLL_ENRTY_SRC == RCC_PLL_ENRTY_SRC_HSE
			SET_BIT(RCC_CFGR,16);
		#endif
		RCC_CR &= ~((0b1111)<<22); 		/* Clear the RCC_MUL bits first */
		RCC_CFGR |= (RCC_PLL_MUL<<22)	/* Assert the value of the MUL of PLL */
		
		#if RCC_HSE_PLL_ENTRY == RCC_HSE_PLL_ENTRY_DIV_1
			CLR_BIT(RCC_CFGR,17);
		#elif RCC_HSE_PLL_ENTRY == RCC_HSE_PLL_ENTRY_DIV_2
			SET_BIT(RCC_CFGR,17);
		#endif
		SET_BIT(RCC_CR,24);
		

	#endif
	
	#if RCC_CLOCK_SECUIRTY_SYSTEM== RCC_ENABLE_Clock_SECUIRTY_SYSTEM
		SET_BIT(RCC_CR,19);
	#elif RCC_CLOCK_SECUIRTY_SYSTEM== RCC_DISABLE_Clock_SECUIRTY_SYSTEM
		CLR_BIT(RCC_CR,19);
	#endif
}
