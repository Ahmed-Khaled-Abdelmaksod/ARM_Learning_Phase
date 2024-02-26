/*************************************************/
/* @Author  : Ahmed Khaled Abdelmaksod Ebrahim   */
/* @Date    : 20 FEB 2024					     */
/* @version : V01 								 */
/*************************************************/
#ifndef DIO_PRIVATE_H
#define DIO_PRIVATE_H

/*            Definition Section         */


#define DIO_GPIOA_BASE_ADDRESS 	0x40010800
#define DIO_GPIOB_BASE_ADDRESS  0x40010C00
#define DIO_GPIOC_BASE_ADDRESS  0x40011000

#define GPIOA_CRL 		*((volatile u32*)(DIO_GPIOA_BASE_ADDRESS + 0x00))
#define GPIOB_CRL 		*((volatile u32*)(DIO_GPIOB_BASE_ADDRESS + 0x00))
#define GPIOC_CRL 		*((volatile u32*)(DIO_GPIOC_BASE_ADDRESS + 0x00))

#define GPIOA_CRH		*((volatile u32*)(DIO_GPIOA_BASE_ADDRESS + 0x04))
#define GPIOB_CRH		*((volatile u32*)(DIO_GPIOB_BASE_ADDRESS + 0x04))
#define GPIOC_CRH		*((volatile u32*)(DIO_GPIOC_BASE_ADDRESS + 0x04))

#define GPIOA_IDR		*((volatile u32*)(DIO_GPIOA_BASE_ADDRESS + 0x08))
#define GPIOB_IDR		*((volatile u32*)(DIO_GPIOB_BASE_ADDRESS + 0x08))
#define GPIOC_IDR		*((volatile u32*)(DIO_GPIOC_BASE_ADDRESS + 0x08))

#define GPIOA_ODR		*((volatile u32*)(DIO_GPIOA_BASE_ADDRESS + 0x0C))
#define GPIOB_ODR		*((volatile u32*)(DIO_GPIOB_BASE_ADDRESS + 0x0C))
#define GPIOC_ODR		*((volatile u32*)(DIO_GPIOC_BASE_ADDRESS + 0x0C))

#define GPIOA_BSRR 		*((volatile u32*)(DIO_GPIOA_BASE_ADDRESS + 0x10))
#define GPIOB_BSRR 		*((volatile u32*)(DIO_GPIOB_BASE_ADDRESS + 0x10))
#define GPIOC_BSRR 		*((volatile u32*)(DIO_GPIOC_BASE_ADDRESS + 0x10))

#define GPIOA_BRR 		*((volatile u32*)(DIO_GPIOA_BASE_ADDRESS + 0x14))
#define GPIOB_BRR 		*((volatile u32*)(DIO_GPIOB_BASE_ADDRESS + 0x14))
#define GPIOC_BRR 		*((volatile u32*)(DIO_GPIOC_BASE_ADDRESS + 0x14))


/*            Pins Definitions                */
#define PIN0  		0
#define PIN1  		1
#define PIN2  		2
#define PIN3  		3
#define PIN4  		4
#define PIN5  		5
#define PIN6  		6
#define PIN7  		7
#define PIN8  		8
#define PIN9  		9
#define PIN10 		10
#define PIN11 		11
#define PIN12 		12
#define PIN13 		13
#define PIN14 		14
#define PIN15 		15

/*           Ports Definitions                 */
#define PORTA		0
#define PORTB		1
#define PORTC		2

#endif