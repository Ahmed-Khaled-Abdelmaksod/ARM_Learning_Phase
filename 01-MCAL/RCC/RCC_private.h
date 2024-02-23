/*************************************************/
/* @Author  : Ahmed Khaled Abdelmaksod Ebrahim   */
/* @Date    : 20 FEB 2024					     */
/* @version : V01 								 */
/*************************************************/
#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H

/**************** INCLUDE SECTION *************************/

#include"../../LIB/STD_TYPES.h"

/*                BASE ADDRESS OF RCC PERIPHERAL           */
#define RCC_BASE_ADDRESS 0x40021000

/*               Register Addresses             */
#define RCC_CR             *((volatile u32 *)(RCC_BASE_ADDRESS + 0X00000000))
#define RCC_CFGR           *((volatile u32 *)(RCC_BASE_ADDRESS + 0X00000004))
#define RCC_CIR            *((volatile u32 *)(RCC_BASE_ADDRESS + 0X00000008))
#define RCC_APB2RSTR       *((volatile u32 *)(RCC_BASE_ADDRESS + 0X0000000C))
#define RCC_APB1RSTR       *((volatile u32 *)(RCC_BASE_ADDRESS + 0X00000010))
#define RCC_AHBENR         *((volatile u32 *)(RCC_BASE_ADDRESS + 0X00000014))
#define RCC_APB2ENR        *((volatile u32 *)(RCC_BASE_ADDRESS + 0X00000018))
#define RCC_APB1ENR        *((volatile u32 *)(RCC_BASE_ADDRESS + 0X0000001C))
#define RCC_BDCR           *((volatile u32 *)(RCC_BASE_ADDRESS + 0X00000020))


#endif