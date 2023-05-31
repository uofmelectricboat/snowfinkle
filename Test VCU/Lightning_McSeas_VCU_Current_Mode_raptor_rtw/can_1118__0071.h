/*****************************************************************************
   can_1118__0071.h
   Generated By:
   Raptor 2021b_1.0.14409 (6115)
   Matlab (R2021b) 9.11

   Copyright (c) 2018 New Eagle Products, Inc.
   All rights reserved.

   Code Generated at: Mon Apr 17 17:18:37 2023
 *****************************************************************************/

#ifndef __CAN_1118__0071_H
#define __CAN_1118__0071_H

/*   CAN Bus: CAN2 */
/*  Resource: CAN2 */
#include "can.h"

/* FUNCTION PROTOTYPES */
/* CAN initialization */
extern void pre_start_CAN_1118__0071(void);
extern void post_start_CAN_1118__0071(void);

/* Receive CAN object declarations */
extern uint8_T can_get_655__004(uint16_T *age, uint32_T* id, uint8_T* extended,
  uint8_T *data, uint8_T length);
extern uint8_T can_get_656__004(uint16_T *age, uint32_T* id, uint8_T* extended,
  uint8_T *data, uint8_T length);
extern uint8_T can_get_634__0043(uint16_T *age, uint32_T* id, uint8_T* extended,
  uint8_T *data, uint8_T length);
extern uint8_T can_get_657__004(uint16_T *age, uint32_T* id, uint8_T* extended,
  uint8_T *data, uint8_T length);

/* Transmit CAN object declarations */
#endif