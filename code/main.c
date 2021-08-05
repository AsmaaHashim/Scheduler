#include"STD_TYPES.h"
#include"BIT_MATH.h"

#include"RCC_interface.h"
#include"STK_interface.h"
#include"DIO_interface.h"
#include"OS_interface.h"


void LED1(void)
{
	static u8 Local_u8Pin0 =0 ;
	TOG_BIT(Local_u8Pin0 , 0);
	MGPIO_voidSetPinValue(GPIOA , 0 , Local_u8Pin0 );

}

void LED2(void)
{
	static u8 Local_u8Pin0 =0 ;
	TOG_BIT(Local_u8Pin0 , 0);
	MGPIO_voidSetPinValue(GPIOA , 1 , Local_u8Pin0 );

}

void LED3(void)
{
	static u8 Local_u8Pin0 =0 ;
	TOG_BIT(Local_u8Pin0 , 0);
	MGPIO_voidSetPinValue(GPIOA , 2 , Local_u8Pin0 );

}
int main(void)
{
	/*initialization*/
	/* RCC_Initialization*/
	/*Enable Gpio RCC PORTA*/
	/*GPIO initialization*/
	RCC_voidInitSysClock();

	RCC_voidEnableClock(2 , 0);

	RCC_voidEnableClock(2 , 2);

	MGPIO_voidSetPinDirection( GPIOA , 0  , OUTPUT_SPEED_2MHZ_PP );
	MGPIO_voidSetPinDirection( GPIOA , 1  , OUTPUT_SPEED_2MHZ_PP );
	MGPIO_voidSetPinDirection( GPIOA , 2  , OUTPUT_SPEED_2MHZ_PP );


	 SOS_voidCreatTask(0 , 1000 , LED1 , 0);
	 SOS_voidCreatTask(1 , 2000 , LED2 , 1);
	 SOS_voidCreatTask(2 , 3000 , LED3 , 2);
   SOS_voidStart();

while(1)
{


}


}
