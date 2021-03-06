/*
 * DIO_program.c
 *
 *  Created on: Aug 12, 2020
 *      Author: Asmaa Hashim
 */


#include"STD_TYPES.h"
#include"BIT_MATH.h"

#include"DIO_interface.h"
#include"DIO_private.h"
#include"DIO_config.h"


#define GPIO_HIGH   1
#define GPIO_LOW   0


void MGPIO_voidSetPinDirection(u8 copy_u8PORT , u8 copy_u8PIN  , u8 copy_u8Mode)
{

	switch(copy_u8PORT)
	{
	case GPIOA :
		        if(copy_u8PIN <=7)
		        {
		        	GPIOA_CRL &= ~((0X0F) << copy_u8PIN*4)  ; // REST PINS
		        	GPIOA_CRL |= (copy_u8Mode << copy_u8PIN*4 ) ;  // CHOOSE mode

		        }
		        else if(copy_u8PIN <= 15)
		        {
		        	copy_u8PIN = copy_u8PIN - 8;
		        	GPIOA_CRH &= ~((0X0F)  << (copy_u8PIN*4 ) );
		        	GPIOA_CRH |= (copy_u8Mode << (copy_u8PIN*4 ));
		        }

		        break ;
	case GPIOB :
		if(copy_u8PIN <=7)
				        {
				        	GPIOB_CRL &= ~((0X0F)  << copy_u8PIN*4  ); // REST PINS
				        	GPIOB_CRL |= copy_u8Mode << copy_u8PIN*4  ;  // CHOOSE mode

				        }
				        else if(copy_u8PIN <= 15)
				        {
				        	copy_u8PIN = copy_u8PIN - 8;
				        	GPIOC_CRH &= ~((0X0F)  << (copy_u8PIN*4 ) );
				        	GPIOC_CRH |= (copy_u8Mode << (copy_u8PIN*4 ));
				        }

				        break ;


	case GPIOC :
		if(copy_u8PIN <=7)
				        {
				        	GPIOA_CRL &= ~((0X0F)  << copy_u8PIN*4  ); // REST PINS
				        	GPIOA_CRL |= copy_u8Mode << copy_u8PIN*4  ;  // CHOOSE mode

				        }
				        else if(copy_u8PIN <= 15)
				        {
				        	copy_u8PIN = copy_u8PIN - 8;
				        	GPIOA_CRH &= ~((0X0F)  << (copy_u8PIN*4 ) );
				        	GPIOA_CRH |= (copy_u8Mode << (copy_u8PIN*4 ));
				        }

				        break ;




	}

	}

void MGPIO_voidSetPinValue(u8 copy_u8PORT , u8 copy_u8PIN , u8 copy_u8Value)
{
	switch(copy_u8PORT)
		{
		case GPIOA :
			        if(copy_u8Value == GPIO_HIGH)
			        {
			        	SET_BIT(   GPIOA_ODR   ,  copy_u8PIN );

			        }
			        else if(copy_u8Value == GPIO_LOW)
			        {
			        	CLR_BIT(  GPIOA_ODR  , copy_u8PIN );

			        }

			        break ;
		case GPIOB :
		     if(copy_u8Value == GPIO_HIGH)
					        {
					        	SET_BIT(  GPIOB_ODR, copy_u8PIN );

					        }
					        else if(copy_u8Value == GPIO_LOW)
					        {
					        	CLR_BIT(  GPIOB_ODR, copy_u8PIN );

					        }

					        break ;


		case GPIOC :
		     if(copy_u8Value == GPIO_HIGH)
					        {
					        	SET_BIT(  GPIOC_ODR, copy_u8PIN );

					        }
					        else if(copy_u8Value == GPIO_LOW)
					        {
					        	CLR_BIT(  GPIOC_ODR, copy_u8PIN );

					        }

					        break ;




		}
	}
u8 MGPIO_u8GetPinValue(u8 copy_u8PORT , u8 copy_u8PIN )
{
	u8 LOC_u8Result =0;

	switch(copy_u8PORT)
	{
	   case GPIOA :  LOC_u8Result = GET_BIT(GPIOA_IDR ,copy_u8PIN );
		             break ;

	   case GPIOB :  LOC_u8Result = GET_BIT(GPIOB_IDR ,copy_u8PIN );
	                 break ;

	   case GPIOC :  LOC_u8Result = GET_BIT(GPIOC_IDR ,copy_u8PIN );
	                 break ;
	}

	return LOC_u8Result ;

}


