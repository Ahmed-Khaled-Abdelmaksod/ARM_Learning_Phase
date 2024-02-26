/*************************************************/
/* @Author  : Ahmed Khaled Abdelmaksod Ebrahim   */
/* @Date    : 26 FEB 2024					     */
/* @version : V01 								 */
/*************************************************/
#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

/*               Include Section             */

#include "DIO_private.h"

/*************** READ THIS DOCs before using the interfaces ****************/
/**
 * Pins Value must be one of this values :
    - DIO_PIN0
    - DIO_PIN1
    - DIO_PIN2
    - DIO_PIN3
    - DIO_PIN4
    - DIO_PIN5
    - DIO_PIN6
    - DIO_PIN7
    - DIO_PIN8
    - DIO_PIN9
    - DIO_PIN10
    - DIO_PIN11
    - DIO_PIN12
    - DIO_PIN13
    - DIO_PIN14
    - DIO_PIN15
 * Port Value must be one of this values :
    - DIO_PORTA
    - DIO_PORTB
    - DIO_PORTC
 * Logic Values must be one of this values :
    - DIO_HIGH
    - DIO_LOW
*/

/**
 * @brief Set the direction of a specific pin on a microcontroller GPIO port.
 *
 * This function allows you to set the direction (input or output) of a specific pin
 * on a microcontroller GPIO port.
 *
 * @param copy_u8Port   The port to which the pin belongs (e.g., GPIO port A, B, etc.).
 * @param copy_u8Pin    The pin number within the specified port.
 * @param copy_u8Mode   The desired mode for the pin (e.g., INPUT, OUTPUT).
 *
 * @return None
 *
 * @example
 * DIO_voidSetPinDirection(PORTA, PIN0, DIO_MODE_OUTPUT); // Sets GPIO port A, pin 0 as an output.
 */
void DIO_voidSetPinMode(u8 copy_u8Port, u8 copy_u8Pin, u8 copy_u8Mode);

/**
 * @brief Set the logic (high or low) of a specific pin.
 *
 *
 * @param copy_u8Port   The port to which the pin belongs (e.g., GPIO port A, B, etc.).
 * @param copy_u8Pin    The pin number within the specified port.
 * @param copy_u8Logic  The desired logic state for the pin (e.g., DIO_HIGH, DIO_LOW).
 *
 * @return None
 *
 * @example
 * DIO_voidSetPinLogic(DIO_PORTA, DIO_PIN1, DIO_HIGH); // Sets GPIO port A, pin 1 to logic high.
 */
void DIO_voidSetPinLogic(u8 copy_u8Port, u8 copy_u8Pin, u8 copy_u8Logic);

/**
 * @brief Get the logic state (high or low) of a specific pin on the microcontroller GPIO port.
 *
 * This function allows you to retrieve the logic state (high or low) of a specific pin
 * on a microcontroller GPIO port.
 *
 * @param copy_u8Port   The port to which the pin belongs (e.g., GPIO port A, B, etc.).
 * @param copy_u8Pin    The pin number within the specified port.
 *
 * @return The logic state of the specified pin (e.g., DIO_LOGIC_HIGH or DIO_LOGIC_LOW).
 *
 * @example
 * u8 result = DIO_u8GetPinLogic(DIO_PORTB, DIO_PIN2);
 * // Retrieves the logic state of GPIO port B, pin 2.
 */
u8 DIO_u8GetPinLogic(u8 copy_u8Port, u8 copy_u8Pin);
#endif