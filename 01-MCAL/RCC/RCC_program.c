/*************************************************/
/* @Author  : Ahmed Khaled Abdelmaksod Ebrahim   */
/* @Date    : 20 FEB 2024					     */
/* @version : V01 								 */
/*************************************************/

/******************** Include Section *********************/
#include"../../LIB/BIT_MATH.h"
#include"../../LIB/STD_TYPES.h"
#include "RCC_interface.h"

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
	
}