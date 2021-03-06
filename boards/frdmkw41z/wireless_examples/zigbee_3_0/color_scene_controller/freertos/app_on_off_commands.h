/*
* Copyright 2016-2017 NXP
* All rights reserved.
*
* SPDX-License-Identifier: BSD-3-Clause
*/

#ifndef APP_ON_OFF_COMMANDS_H_
#define APP_ON_OFF_COMMANDS_H_

#include "OnOff.h"

/****************************************************************************/
/***        Macro Definitions                                             ***/
/****************************************************************************/
#define UNUSED_COMMANDS


/****************************************************************************/
/***        Type Definitions                                              ***/
/****************************************************************************/



/****************************************************************************/
/***        Exported Functions                                            ***/
/****************************************************************************/
PUBLIC void vAppOnOff(teCLD_OnOff_Command eCmd);
#ifndef UNUSED_COMMANDS
PRIVATE void vAppOffEffect(uint8 u8Effect, uint8 u8Varient);
#endif


/****************************************************************************/
/***        External Variables                                            ***/
/****************************************************************************/



/****************************************************************************/
/****************************************************************************/
/****************************************************************************/

#endif /*APP_ON_OFF_COMMANDS_H_*/
