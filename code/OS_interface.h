/*
 * OS_interface.h
 *
 *  Created on: Sep 7, 2020
 *      Author: Asmaa Hashim
 */

#ifndef OS_INTERFACE_H_
#define OS_INTERFACE_H_

#include"OS_private.h"

void SOS_voidCreatTask(u8 Copy_u8ID , u16 Copy_u16Period , void (*ptr)(void) , u8 Copy_u8firstDelay);

void SOS_voidStart(void);

void SOS_voidSetState(u8 Copy_u8ID , Task_state state );


void SOS_voidDeleteTask(u8 Copy_u8ID  );




#endif /* OS_INTERFACE_H_ */

