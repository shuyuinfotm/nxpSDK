/*! *********************************************************************************
 * \defgroup FSCI BLE application
 * @{
 ********************************************************************************** */
/*! *********************************************************************************
* Copyright (c) 2015, Freescale Semiconductor, Inc.
* Copyright 2016-2017 NXP
* All rights reserved.
* 
* \file
*
* SPDX-License-Identifier: BSD-3-Clause
********************************************************************************** */


#ifndef BLE_FSCI_BB_H
#define BLE_FSCI_BB_H

/*************************************************************************************
**************************************************************************************
* Public macros
**************************************************************************************
*************************************************************************************/

/************************************************************************************
*************************************************************************************
* Public prototypes
*************************************************************************************
************************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif

void BleApp_Init(void);

void BleApp_GenericCallback(gapGenericEvent_t* pGenericEvent);

#ifdef __cplusplus
}
#endif 


#endif /* BLE_FSCI_BB_H */

/*! *********************************************************************************
 * @}
 ********************************************************************************** */
