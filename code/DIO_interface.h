/*
 * DIO_interface.h
 *
 *  Created on: Aug 12, 2020
 *      Author: Asmaa Hashim
 */

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_


#include"BIT_MATH.h"
#include"STD_TYPES.h"

#define GPIO_HIGH   1
#define GPIO_LOW   0



          /* GPIO ports*/
#define GPIOA  0
#define GPIOB  1
#define GPIOC  2

       /* GPIO PINS*/

#define PIN0   0
#define PIN1   1
#define PIN2   2
#define PIN3   3
#define PIN4   4
#define PIN5   5
#define PIN6   6
#define PIN7   7
#define PIN8   8
#define PIN9   10
#define PIN10  11
#define PIN11  12
#define PIN12  13
#define PIN13  14
#define PIN14  15


// pin modes



#define INPUT_ANALOG                  0b0000
#define INPUT_FLOATING                0b0100
#define INPUT_PULL_UP_DOWN            0b1000


#define OUTPUT_SPEED_10MHZ_PP         0X01
#define OUTPUT_SPEED_10MHZ_OD         0b0101
#define OUTPUT_SPEED_10MHZ_AFPP       0b1001
#define OUTPUT_SPEED_10MHZ_AFOD       0b1101


#define OUTPUT_SPEED_2MHZ_PP         0X02
#define OUTPUT_SPEED_2MHZ_OD         0b0110
#define OUTPUT_SPEED_2MHZ_AFPP       0b1010
#define OUTPUT_SPEED_2MHZ_AFOD       0b1110


#define OUTPUT_SPEED_50MHZ_PP         0b0011
#define OUTPUT_SPEED_50MHZ_OD         0b0111
#define OUTPUT_SPEED_50MHZ_AFPP       0b1011
#define OUTPUT_SPEED_50MHZ_AFOD       0X0F



void MGPIO_voidSetPinDirection(u8 copy_u8PORT , u8 copy_u8PIN  , u8 copy_u8Mode);
void MGPIO_voidSetPinValue(u8 copy_u8PORT , u8 copy_u8PIN , u8 copy_u8Value);
u8 MGPIO_u8GetPinValue(u8 copy_u8PORT , u8 copy_u8PIN );





#endif /* DIO_INTERFACE_H_ */



