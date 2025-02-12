/**************************** (C) COPYRIGHT 2015 Fortiortech shenzhen *****************************
* File Name          : PIInit.h
* Author             : Fortiortech  Market Dept
* Version            : V1.0
* Date               : 01/07/2015
* Description        : This file contains all the common data types used for Motor Control.
***************************************************************************************************
* All Rights Reserved
**************************************************************************************************/ 

/* Define to prevent recursive inclusion --------------------------------------------------------*/
#ifndef _PIINIT_H_
#define _PIINIT_H_

/* Exported functions ---------------------------------------------------------------------------*/
extern void PI_Init(void);
extern void PI2_Init(void);

#endif
///**
//    @brief        PI2??????
//    @date         2022-07-14
//*/
//void PI2_Init(void)
//{
//    PI2_KP          = LimitCurrent_KP;
//    PI2_KI          = LimitCurrent_KI;
//    PI2_EK1         =0;
//    PI2_EK          =0;
//    PI2_UKH         =0;
//    PI2_UKL         =0;
//    PI2_UKMAX       = I_Value(85.0) ;
//    PI2_UKMIN       = 0;
//}