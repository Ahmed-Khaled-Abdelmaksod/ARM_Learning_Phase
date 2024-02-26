/*************************************************/
/* @Author  : Ahmed Khaled Abdelmaksod Ebrahim   */
/* @Date    : 26 FEB 2024					     */
/* @version : V01 								 */
/*************************************************/
#ifndef DIO_PRIVATE_H
#define DIO_PRIVATE_H

/*            Definition Section         */

#define DIO_GPIOA_BASE_ADDRESS 0x40010800
#define DIO_GPIOB_BASE_ADDRESS 0x40010C00
#define DIO_GPIOC_BASE_ADDRESS 0x40011000

#define GPIOA_CRL *((volatile u32 *)(DIO_GPIOA_BASE_ADDRESS + 0x00))
#define GPIOB_CRL *((volatile u32 *)(DIO_GPIOB_BASE_ADDRESS + 0x00))
#define GPIOC_CRL *((volatile u32 *)(DIO_GPIOC_BASE_ADDRESS + 0x00))

#define GPIOA_CRH *((volatile u32 *)(DIO_GPIOA_BASE_ADDRESS + 0x04))
#define GPIOB_CRH *((volatile u32 *)(DIO_GPIOB_BASE_ADDRESS + 0x04))
#define GPIOC_CRH *((volatile u32 *)(DIO_GPIOC_BASE_ADDRESS + 0x04))

#define GPIOA_IDR *((volatile u32 *)(DIO_GPIOA_BASE_ADDRESS + 0x08))
#define GPIOB_IDR *((volatile u32 *)(DIO_GPIOB_BASE_ADDRESS + 0x08))
#define GPIOC_IDR *((volatile u32 *)(DIO_GPIOC_BASE_ADDRESS + 0x08))

#define GPIOA_ODR *((volatile u32 *)(DIO_GPIOA_BASE_ADDRESS + 0x0C))
#define GPIOB_ODR *((volatile u32 *)(DIO_GPIOB_BASE_ADDRESS + 0x0C))
#define GPIOC_ODR *((volatile u32 *)(DIO_GPIOC_BASE_ADDRESS + 0x0C))

#define GPIOA_BSRR *((volatile u32 *)(DIO_GPIOA_BASE_ADDRESS + 0x10))
#define GPIOB_BSRR *((volatile u32 *)(DIO_GPIOB_BASE_ADDRESS + 0x10))
#define GPIOC_BSRR *((volatile u32 *)(DIO_GPIOC_BASE_ADDRESS + 0x10))

#define GPIOA_BRR *((volatile u32 *)(DIO_GPIOA_BASE_ADDRESS + 0x14))
#define GPIOB_BRR *((volatile u32 *)(DIO_GPIOB_BASE_ADDRESS + 0x14))
#define GPIOC_BRR *((volatile u32 *)(DIO_GPIOC_BASE_ADDRESS + 0x14))

/*            Pins Definitions                */
#define DIO_PIN0 0
#define DIO_PIN1 1
#define DIO_PIN2 2
#define DIO_PIN3 3
#define DIO_PIN4 4
#define DIO_PIN5 5
#define DIO_PIN6 6
#define DIO_PIN7 7
#define DIO_PIN8 8
#define DIO_PIN9 9
#define DIO_PIN10 10
#define DIO_PIN11 11
#define DIO_PIN12 12
#define DIO_PIN13 13
#define DIO_PIN14 14
#define DIO_PIN15 15

/*           Ports Definitions                 */
#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2

/*           logic Definitions                  */

#define DIO_HIGH 1
#define DIO_LOW 0

/*           ********** Pins Modes definitions *************            */
/*           input modes                        */
#define DIO_INPUT_ANALOG_MODE (0b0000)
#define DIO_INPUT_FLOATING_MODE (0b0100)
#define DIO_INPUT_PULL_UP_DOWN_MODE (0b1000)

/*          Output modes(10MHZ)                        */
#define DIO_OUTPUT_10MHZ_GPIO_PUSH_PULL_MODE (0b0001)
#define DIO_OUTPUT_10MHZ_GPIO_OPEN_DRAIN_MODE (0b0101)
#define DIO_OUTPUT_10MHZ_AFIO_PUSH_PULL_MODE (0b1001)
#define DIO_OUTPUT_10MHZ_AFIO_OPEN_DRAIN_MODE (0b1101)

/*          Output modes(2MHZ)                        */
#define DIO_OUTPUT_10MHZ_GPIO_PUSH_PULL_MODE (0b0010)
#define DIO_OUTPUT_10MHZ_GPIO_OPEN_DRAIN_MODE (0b0110)
#define DIO_OUTPUT_10MHZ_AFIO_PUSH_PULL_MODE (0b1010)
#define DIO_OUTPUT_10MHZ_AFIO_OPEN_DRAIN_MODE (0b1110)

/*          Output modes(50MHZ)                        */
#define DIO_OUTPUT_10MHZ_GPIO_PUSH_PULL_MODE (0b0011)
#define DIO_OUTPUT_10MHZ_GPIO_OPEN_DRAIN_MODE (0b0111)
#define DIO_OUTPUT_10MHZ_AFIO_PUSH_PULL_MODE (0b1011)
#define DIO_OUTPUT_10MHZ_AFIO_OPEN_DRAIN_MODE (0b1111)
#endif