/*****************************************************************************
   can_493__0006.c
   Generated By:
   Raptor 2021b_1.0.14409 (6115)
   Matlab (R2021b) 9.11

   Copyright (c) 2018 New Eagle Products, Inc.
   All rights reserved.

   Code Generated at: Thu Mar 31 21:02:14 2022
 *****************************************************************************/

/* CAN interface: CAN2 */
/*   HW Resource: CAN2 */
#include "Lightning_McSeas_VCU.h"
#include "can_493__0006.h"
#include "sdk_can.h"
#include "can.h"
#define MAX_AGE                        65535

int started_493__0006 = 0;
const uint32_T CAN_CAN2_baud_rate = 250000;
uint32_T CAN_CAN2_get_baud_rate(void)
{
  return(CAN_CAN2_baud_rate);
}

/* Message Receive data storage */

/* Transmit CAN Object Declarations */

/* Functions */
void pre_start_CAN_493__0006(void)
{
}                                      // end pre_start_CAN_493__0006

void CAN_ReceiveDispatch_493__0006(boolean extended, uint32_t id, uint8_t * data,
  uint8_t data_len)
{
}

void post_start_CAN_493__0006(void)
{
  if (started_493__0006) {
    return;
  }

  started_493__0006 = 1;
  start_CAN(CAN2, CAN_CAN2_baud_rate );
  can_register_rx_callback( CAN2, CAN_ReceiveDispatch_493__0006 );
}                                      // end post_start_CAN_493__0006