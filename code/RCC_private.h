/*
 /*********************************************************************************/
/* Author    : Asmaa Hashim                                                       */
/* Version   : V01                                                               */
/* Date      : 8 August 2020                                                     */
/*********************************************************************************/
#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H


/* Register Definitions */
#define RCC_CR         *((u32*)0x40021000)
#define RCC_CFGR       *((u32*)0x40021004)
#define RCC_CIR        *((u32*)0x40021008)
#define RCC_APB2RSTR   *((u32*)0x4002100C)
#define RCC_APB1RSTR   *((u32*)0x40021010)
#define RCC_AHBENR     *((u32*)0x40021014)
#define RCC_APB2ENR    *((u32*)0x40021018)
#define RCC_APB1ENR    *((u32*)0x4002101C)
#define RCC_BDCR       *((u32*)0x40021020)
#define RCC_CSR        *((u32*)0x40021024)


// CLOCK TYPES

#define RCC_HSE_CRYSTAL  0
#define RCC_HSE_RC       1
#define RCC_HSI          2
#define RCC_PLL          3


#define  RCC_PLL_IN_HSI_DIV_2  0
#define  RCC_PLL_IN_HSE_DIV_2  3
#define  RCC_PLL_IN_HSE        1


// RCC_PLL_MUL_VAL

#define  RCC_PLL_MUL_VAL_2    0
#define RCC_PLL_MUL_VAL_3     1
#define RCC_PLL_MUL_VAL_4     2
#define RCC_PLL_MUL_VAL_5     3
#define RCC_PLL_MUL_VAL_6     4
#define RCC_PLL_MUL_VAL_7     5
#define RCC_PLL_MUL_VAL_8     6
#define RCC_PLL_MUL_VAL_9     7
#define RCC_PLL_MUL_VAL_10    8
#define RCC_PLL_MUL_VAL_11    9
#define RCC_PLL_MUL_VAL_12   10
#define RCC_PLL_MUL_VAL_13   11
#define RCC_PLL_MUL_VAL_14   12
#define RCC_PLL_MUL_VAL_15   13
#define RCC_PLL_MUL_VAL_16   14

#endif
