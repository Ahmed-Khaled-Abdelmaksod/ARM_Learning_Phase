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


void RCC_voidInitSystemClock(void);



#endif