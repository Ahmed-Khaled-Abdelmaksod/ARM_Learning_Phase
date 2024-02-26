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
            GPIOA_CRL &= ~((0b1111) << (4 * copy_u8Pin));   /* clear the needed nibble*/
            GPIOA_CRL |= (copy_u8Mode << (4 * copy_u8Pin)); /* assign the needed mode to the needed pin*/
        }
        else
        {
            local_pin = copy_u8Pin - 8;                      /* to access the right place in the register */
            GPIOA_CRH &= ~((0b1111) << (4 * local_pin));     /* clear the needed nibble*/
            GPIOA_CRH |= ((copy_u8Mode) << (4 * local_pin)); /* assign the needed mode to the needed pin*/
        }
        break;
    case DIO_PORTB:
        if (copy_u8Pin < 8)
        {
            GPIOB_CRL &= ~((0b1111) << (4 * copy_u8Pin));   /* clear the needed nibble*/
            GPIOB_CRL |= (copy_u8Mode << (4 * copy_u8Pin)); /* assign the needed mode to the needed pin*/
        }
        else
        {
            local_pin = copy_u8Pin - 8;                      /* to access the right place in the register */
            GPIOB_CRH &= ~((0b1111) << (4 * local_pin));     /* clear the needed nibble*/
            GPIOB_CRH |= ((copy_u8Mode) << (4 * local_pin)); /* assign the needed mode to the needed pin*/
        }
        break;

    case DIO_PORTC:
        if (copy_u8Pin < 8)
        {
            GPIOC_CRL &= ~((0b1111) << (4 * copy_u8Pin));   /* clear the needed nibble*/
            GPIOC_CRL |= (copy_u8Mode << (4 * copy_u8Pin)); /* assign the needed mode to the needed pin*/
        }
        else
        {
            local_pin = copy_u8Pin - 8;                      /* to access the right place in the register */
            GPIOC_CRH &= ~((0b1111) << (4 * local_pin));     /* clear the needed nibble*/
            GPIOC_CRH |= ((copy_u8Mode) << (4 * local_pin)); /* assign the needed mode to the needed pin*/
        }
        break;
    default:
        /* return error (will be modified later)*/
    }
}

void DIO_voidSetPinLogic(u8 copy_u8Port, u8 copy_u8Pin, u8 copy_u8Logic)
{
    switch (copy_u8Port)
    {
    case DIO_PORTA:
        switch (copy_u8Logic)
        {
        case DIO_HIGH:
            SET_BIT(GPIOA_ODR, copy_u8Pin); /* Set the corresponding pin*/
            break;
        case DIO_LOW:
            CLR_BIT(GPIOA_ODR, copy_u8Pin); /* Clear the corresponding pin*/
            break;
        default:
            /* return error (will be modified later)*/
        }
        break;
    case DIO_PORTB:
        switch (copy_u8Logic)
        {
        case DIO_HIGH:
            SET_BIT(GPIOB_ODR, copy_u8Pin); /* Set the corresponding pin*/
            break;
        case DIO_LOW:
            CLR_BIT(GPIOB_ODR, copy_u8Pin); /* Clear the corresponding pin*/
            break;
        default:
            /* return error (will be modified later)*/
        }
        break;

    case DIO_PORTC:
        switch (copy_u8Logic)
        {
        case DIO_HIGH:
            SET_BIT(GPIOC_ODR, copy_u8Pin); /* Set the corresponding pin*/
            break;
        case DIO_LOW:
            CLR_BIT(GPIOC_ODR, copy_u8Pin); /* Clear the corresponding pin*/
            break;
        default:
            /* return error (will be modified later)*/
        }
        break;
    default:
        /* return error (will be modified later */
    }
}

u8 DIO_u8GetPinLogic(u8 copy_u8Port, u8 copy_u8Pin)
{
    u8 local_u8PinValue = 0;
    switch (copy_u8Port)
    {
    case DIO_PORTA:
        local_u8PinValue = GET_BIT(GPIOA_IDR, copy_u8Pin); /* Get the corresponding pin Valur */
        break;
    case DIO_PORTB:
        local_u8PinValue = GET_BIT(GPIOB_IDR, copy_u8Pin); /* Get the corresponding pin Valur */

        break;
    case DIO_PORTC:
        local_u8PinValue = GET_BIT(GPIOC_IDR, copy_u8Pin); /* Get the corresponding pin Valur */

        break;
    default:
        /* return error (will be modified later */
    }
    return local_u8PinValue;
}