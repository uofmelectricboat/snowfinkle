/*****************************************************************************
   can_2554__0001.c
   Generated By:
   Raptor 2021b_1.0.14409 (6115)
   Matlab (R2021b) 9.11

   Copyright (c) 2018 New Eagle Products, Inc.
   All rights reserved.

   Code Generated at: Fri Apr  7 10:24:03 2023
 *****************************************************************************/

/* CAN interface: CAN2 */
/*   HW Resource: CAN2 */
#include "EB_Charging_Program_Feb.h"
#include "can_2554__0001.h"
#include "sdk_can.h"
#include "can.h"
#define MAX_AGE                        65535

int started_2554__0001 = 0;
const uint32_T CAN_CAN2_baud_rate = 250000;
uint32_T CAN_CAN2_get_baud_rate(void)
{
  return(CAN_CAN2_baud_rate);
}

/* Message Receive data storage */

/* Transmit CAN Object Declarations */

/* Functions */
void pre_start_CAN_2554__0001(void)
{
}                                      // end pre_start_CAN_2554__0001

void CAN_ReceiveDispatch_2554__0001(boolean extended, uint32_t id, uint8_t *
  data, uint8_t data_len)
{
}

void post_start_CAN_2554__0001(void)
{
  if (started_2554__0001) {
    return;
  }

  started_2554__0001 = 1;
  start_CAN(CAN2, CAN_CAN2_baud_rate );
  can_register_rx_callback( CAN2, CAN_ReceiveDispatch_2554__0001 );
}                                      // end post_start_CAN_2554__0001
