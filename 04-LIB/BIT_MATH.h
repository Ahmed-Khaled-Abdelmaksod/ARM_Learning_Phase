/*************************************************/
/* @Author  : Ahmed Khaled Abdelmaksod Ebrahim   */
/* @Date    : 20 FEB 2024					     */
/* @version : V01 								 */
/*************************************************/

#ifndef BIT_MATH_H
#define BIT_MATH_H

/******************* MacroFuntions section ***********************/

/*
 * Macro: SET_BIT
 * Description: Sets a specific bit in a register.
 * Parameters:
 *    - REG: The register in which the bit will be set.
 *    - BIT: The position of the bit to set.
 * Example:
 *    unsigned int myRegister = 0;
 *    SET_BIT(myRegister, 3); // Sets the 4th bit in myRegister.
 */
#define SET_BIT(REG,BIT)		(REG |= (1<<BIT))



/*
 * Macro: CLR_BIT
 * Description: Clears a specific bit in a register.
 * Parameters:
 *    - REG: The register in which the bit will be cleared.
 *    - BIT: The position of the bit to clear.
 * Example:
 *    unsigned int myRegister = 15; // Binary: 00001111
 *    CLR_BIT(myRegister, 3); // Clears the 4th bit in myRegister.
 */
#define CLR_BIT(REG,BIT)		(REG &= ~(1<<BIT))



/*
 * Macro: TOGGLE_BIT
 * Description: Toggles a specific bit in a register.
 * Parameters:
 *    - REG: The register in which the bit will be toggled.
 *    - BIT: The position of the bit to toggle.
 * Example:
 *    unsigned int myRegister = 5; // Binary: 00000101
 *    TOGGLE_BIT(myRegister, 2); // Toggles the 3rd bit in myRegister.
 */
#define TOGGLE_BIT(REG,BIT)		(REG ^= (1<<BIT))



/*
 * Macro: GET_BIT
 * Description: Retrieves the value of a specific bit in a register.
 * Parameters:
 *    - REG: The register from which the bit value will be retrieved.
 *    - BIT: The position of the bit to retrieve.
 * Returns:
 *    The value (0 or 1) of the specified bit in the register.
 * Example:
 *    unsigned int myRegister = 10; // Binary: 00001010
 *    int bitValue = GET_BIT(myRegister, 3); // Retrieves the value of the 4th bit in myRegister.
 */
#define GET_BIT(REG, BIT) 		((REG >> BIT) & 0b1)



#endif