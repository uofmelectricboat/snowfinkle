/*****************************************************************************
   can_1072__0034.h
   Generated By:
   Raptor 2021b_1.0.14409 (6115)
   Matlab (R2021b) 9.11

   Copyright (c) 2018 New Eagle Products, Inc.
   All rights reserved.

   Code Generated at: Tue May 30 12:24:31 2023
 *****************************************************************************/

#ifndef __CAN_1072__0034_H
#define __CAN_1072__0034_H

/*   CAN Bus: CAN1 */
/*  Resource: CAN1 */
#include "can.h"

/* FUNCTION PROTOTYPES */
/* CAN initialization */
extern void pre_start_CAN_1072__0034(void);
extern void post_start_CAN_1072__0034(void);

/* Receive CAN object declarations */
extern uint8_T can_get_585__0005(uint16_T *age, uint32_T* id, uint8_T* extended,
  uint8_T *data, uint8_T length);
extern uint8_T can_get_1454__0035(uint16_T *age, uint32_T* id, uint8_T* extended,
  uint8_T *data, uint8_T length);
extern void can_init_rxIdRxTrig_XCP_BC_CAN1(uint32_T id, uint8_T extended);
extern uint32_T RxTrig_XCP_BC_CAN1_msgID;
extern uint8_T RxTrig_XCP_BC_CAN1_msgExtended;
extern uint8_T can_get_RxTrig_XCP_BC_CAN1(uint16_T *age, uint32_T* id, uint8_T
  * extended, uint8_T *data, uint8_T length);
extern void can_init_rxIdRxTrig_XCP_CMD_CAN1(uint32_T id, uint8_T extended);
extern uint32_T RxTrig_XCP_CMD_CAN1_msgID;
extern uint8_T RxTrig_XCP_CMD_CAN1_msgExtended;
extern uint8_T can_get_RxTrig_XCP_CMD_CAN1(uint16_T *age, uint32_T* id, uint8_T*
  extended, uint8_T *data, uint8_T length);
extern uint8_T can_get_uds_receive(uint16_T *age, uint32_T* id, uint8_T
  * extended, uint8_T *data, uint8_T length);

/* Transmit CAN object declarations */
extern void can_send_8__0006(uint32_T id, uint8_T extended, uint8_T length,
  const uint8_T *data);
extern void can_update_8__0006(uint32_T id, uint8_T extended, uint8_T length,
  const uint8_T *data);
extern uint32_T can_set_period_8__0006(uint32_T period);
extern void can_send_68__0006(uint32_T id, uint8_T extended, uint8_T length,
  const uint8_T *data);
extern void can_update_68__0006(uint32_T id, uint8_T extended, uint8_T length,
  const uint8_T *data);
extern uint32_T can_set_period_68__0006(uint32_T period);
extern void can_send_67__0009(uint32_T id, uint8_T extended, uint8_T length,
  const uint8_T *data);
extern void can_update_67__0009(uint32_T id, uint8_T extended, uint8_T length,
  const uint8_T *data);
extern uint32_T can_set_period_67__0009(uint32_T period);
extern void can_send_588__0005(uint32_T id, uint8_T extended, uint8_T length,
  const uint8_T *data);
extern void can_update_588__0005(uint32_T id, uint8_T extended, uint8_T length,
  const uint8_T *data);
extern uint32_T can_set_period_588__0005(uint32_T period);
extern void can_send_589__0005(uint32_T id, uint8_T extended, uint8_T length,
  const uint8_T *data);
extern void can_update_589__0005(uint32_T id, uint8_T extended, uint8_T length,
  const uint8_T *data);
extern uint32_T can_set_period_589__0005(uint32_T period);
extern void can_send_586__0005(uint32_T id, uint8_T extended, uint8_T length,
  const uint8_T *data);
extern void can_update_586__0005(uint32_T id, uint8_T extended, uint8_T length,
  const uint8_T *data);
extern uint32_T can_set_period_586__0005(uint32_T period);
extern void can_send_292__0006(uint32_T id, uint8_T extended, uint8_T length,
  const uint8_T *data);
extern void can_update_292__0006(uint32_T id, uint8_T extended, uint8_T length,
  const uint8_T *data);
extern uint32_T can_set_period_292__0006(uint32_T period);
extern void can_send_622__0005(uint32_T id, uint8_T extended, uint8_T length,
  const uint8_T *data);
extern void can_update_622__0005(uint32_T id, uint8_T extended, uint8_T length,
  const uint8_T *data);
extern uint32_T can_set_period_622__0005(uint32_T period);
extern void can_send_Tx_XCP_CAN1(uint32_T id, uint8_T extended, uint8_T length,
  const uint8_T *data);
extern void can_update_Tx_XCP_CAN1(uint32_T id, uint8_T extended, uint8_T length,
  const uint8_T *data);
extern uint32_T can_set_period_Tx_XCP_CAN1(uint32_T period);
extern void can_send_uds_send(uint32_T id, uint8_T extended, uint8_T length,
  const uint8_T *data);
extern void can_update_uds_send(uint32_T id, uint8_T extended, uint8_T length,
  const uint8_T *data);
extern uint32_T can_set_period_uds_send(uint32_T period);

#endif
