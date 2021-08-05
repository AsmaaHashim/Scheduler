/*********************************************************************************/
/* Author    : Asmaa Hashim                                                       */
/* Version   : V01                                                               */
/* Date      : 8 August 2020                                                     */
/*********************************************************************************/


#ifndef RCC_CONFIG_H_
#define RCC_CONFIG_H_



/*
 * Options :  RCC_HSE_CRYSTAL
 *            RCC_HSE_RC
 *            RCC_HSI
 *            RCC_PLL
 *                                    */


#define RCC_CLOCK_TYPE   RCC_HSI


/* OPtions :     RCC_PLL_IN_HSI_DIV_2
 *               RCC_PLL_IN_HSE_DIV_2
 *               RCC_PLL_IN_HSE
 * */

#if RCC_CLOCK_TYPE == RCC_PLL

#define RCC_PLL_INPUT   RCC_PLL_IN_HSE_DIV_2

#endif

/*Options  :
 *           RCC_PLL_MUL_VAL_2   , RCC_PLL_MUL_VAL_3  , RCC_PLL_MUL_VAL_4  , RCC_PLL_MUL_VAL_5
 *           RCC_PLL_MUL_VAL_6   , RCC_PLL_MUL_VAL_7  , RCC_PLL_MUL_VAL_8  , RCC_PLL_MUL_VAL_9
 *           RCC_PLL_MUL_VAL_10  , RCC_PLL_MUL_VAL_11 , RCC_PLL_MUL_VAL_12 , RCC_PLL_MUL_VAL_13
 *           RCC_PLL_MUL_VAL_14  , RCC_PLL_MUL_VAL_15 , RCC_PLL_MUL_VAL_16
 *        */

#if RCC_CLOCK_TYPE == RCC_PLL

#define RCC_PLL_MUL_VAL   RCC_PLL_MUL_VAL_4

#endif


#endif /* RCC_CONFIG_H_ */
