/*************************************************/
/* @Author  : Ahmed Khaled Abdelmaksod Ebrahim   */
/* @Date    : 20 FEB 2024					     */
/* @version : V01 								 */
/*************************************************/
#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

/*               Include Section             */

#include"DIO_private.h"

void DIO_voidSetPinDirection(u8 copy_u8Port,u8 copy_u8Pin ,u8 copy_u8Mode);
void DIO_voidSetPinLogic(u8 copy_u8Port,u8 copy_u8Pin ,u8 copy_u8Logic);
u8   DIO_u8GetPinLogic(u8 copy_u8Port,u8 copy_u8Pin);
#endif