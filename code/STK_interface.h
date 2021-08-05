/*
 * STK_interface.h
 *
 *  Created on: Aug 28, 2020
 *      Author: Asmaa Hashim
 */

#ifndef STK_INTERFACE_H_
#define STK_INTERFACE_H_



/* Apply Clock choice from configuration file
   Disable SysTick interrupt
   Disable Systick                          */
void MSTK_voidInit(void);
void MSTK_voidSetBusyWait( u32 Copy_u32Ticks );
void MSTK_voidSetIntervalSingle  ( u32 Copy_u32Ticks, void (*Copy_ptr)(void) );
void MSTK_voidSetIntervalPeriodic( u32 Copy_u32Ticks, void (*Copy_ptr)(void) );
void MSTK_voidStopInterval(void);
u32  MSTK_u32GetElapsedTime(void);
u32  MSTK_u32GetRemainingTime(void);





#endif /* STK_INTERFACE_H_ */
