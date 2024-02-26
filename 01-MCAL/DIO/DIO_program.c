/*************************************************/
/* @Author  : Ahmed Khaled Abdelmaksod Ebrahim   */
/* @Date    : 26 FEB 2024					     */
/* @version : V01 								 */
/*************************************************/
#include "../../04-LIB/STD_TYPES.h"
#include "../../04-LIB/BIT_MATH.h"

#include "DIO_interface.h"

void DIO_voidSetPinMode(u8 copy_u8Port, u8 copy_u8Pin, u8 copy_u8Mode)
{
    u8 local_pin = 0;
    switch (copy_u8Port)
    {
    case DIO_PORTA:
        if (copy_u8Pin < 8)
        {
            GPIOA_CRL &= ~((0b1111) << (4 * copy_u8Pin));
            GPIOA_CRL |= (copy_u8Mode << (4 * copy_u8Pin));
        }
        else
        {
            local_pin = copy_u8Pin - 8;
            GPIOA_CRH &= ~((0b1111) << (4 * local_pin));
            GPIOA_CRH |= ((copy_u8Mode) << (4 * local_pin));
        }
        break;
    case DIO_PORTB:
        if (copy_u8Pin < 8)
        {
            GPIOB_CRL &= ~((0b1111) << (4 * copy_u8Pin));
            GPIOB_CRL |= (copy_u8Mode << (4 * copy_u8Pin));
        }
        else
        {
            local_pin = copy_u8Pin - 8;
            GPIOB_CRH &= ~((0b1111) << (4 * local_pin));
            GPIOB_CRH |= ((copy_u8Mode) << (4 * local_pin));
        }
        break;

    case DIO_PORTC:
        if (copy_u8Pin < 8)
        {
            GPIOC_CRL &= ~((0b1111) << (4 * copy_u8Pin));
            GPIOC_CRL |= (copy_u8Mode << (4 * copy_u8Pin));
        }
        else
        {
            local_pin = copy_u8Pin - 8;
            GPIOC_CRH &= ~((0b1111) << (4 * local_pin));
            GPIOC_CRH |= ((copy_u8Mode) << (4 * local_pin));
        }
        break;
    default:
        /* return error (will be modified later */
    }
}

void DIO_voidSetPinLogic(u8 copy_u8Port, u8 copy_u8Pin, u8 copy_u8Logic)
{
}

u8 DIO_u8GetPinLogic(u8 copy_u8Port, u8 copy_u8Pin)
{
}