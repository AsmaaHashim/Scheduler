/*******************************
 * OS_private.h
 *  Created on: Sep 7, 2020
 *      Author: Asmaa Hashim
 *************************************/
 
#ifndef OS_PRIVATE_H_
#define OS_PRIVATE_H_

#include"STD_TYPES.h"

typedef enum{
	            DORMANT,
	            READY ,
	            RUNNING,
	            WATING ,
	            SUSPENSE, // TASK pause	

            }Task_state;

typedef struct
{
	u16 period;
	void (*Fptr)(void);
	u8 firstDelay ;
	Task_state state   ;	
}Task;

#endif /* OS_PRIVATE_H_ */


