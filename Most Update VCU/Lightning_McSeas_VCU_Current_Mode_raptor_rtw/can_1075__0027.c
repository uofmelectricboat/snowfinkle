/*****************************************************************************
   can_1075__0027.c
   Generated By:
   Raptor 2021b_1.0.14409 (6115)
   Matlab (R2021b) 9.11

   Copyright (c) 2018 New Eagle Products, Inc.
   All rights reserved.

   Code Generated at: Tue Feb 21 17:57:04 2023
 *****************************************************************************/

/* CAN interface: CAN2 */
/*   HW Resource: CAN2 */
#include "Lightning_McSeas_VCU_Current_Mode.h"
#include "can_1075__0027.h"
#include "sdk_can.h"
#include "can.h"
#define MAX_AGE                        65535

int started_1075__0027 = 0;
const uint32_T CAN_CAN2_baud_rate = 250000;
uint32_T CAN_CAN2_get_baud_rate(void)
{
  return(CAN_CAN2_baud_rate);
}

/* Message Receive data storage */
/* Block: <S7>/raptor_can_rxmsg */
void rxFn_610__0005(unsigned int id, uint8_T len, uint8_T* data);
uint8_T rxBuf_610__0005[1U][8];
uint8_T rxLen_610__0005[1U];
uint16_T rxAge_610__0005;
uint32_T rxID_610__0005[1U];
uint8_T rxQHead_610__0005 = 0;
uint8_T rxQTail_610__0005 = 0;

/* Block: <S7>/raptor_can_rxmsg2 */
void rxFn_612__0005(unsigned int id, uint8_T len, uint8_T* data);
uint8_T rxBuf_612__0005[1U][8];
uint8_T rxLen_612__0005[1U];
uint16_T rxAge_612__0005;
uint32_T rxID_612__0005[1U];
uint8_T rxQHead_612__0005 = 0;
uint8_T rxQTail_612__0005 = 0;

/* Block: <S7>/raptor_can_rxmsg1 */
void rxFn_611__0005(unsigned int id, uint8_T len, uint8_T* data);
uint8_T rxBuf_611__0005[1U][8];
uint8_T rxLen_611__0005[1U];
uint16_T rxAge_611__0005;
uint32_T rxID_611__0005[1U];
uint8_T rxQHead_611__0005 = 0;
uint8_T rxQTail_611__0005 = 0;

/* Transmit CAN Object Declarations */

/* Functions */
void pre_start_CAN_1075__0027(void)
{
}                                      // end pre_start_CAN_1075__0027

void rxFn_610__0005(unsigned int id, uint8_T length, uint8_T* data)
{
  uint8_T i;
  uint8_T* b = data;
  if ((length == 8U) ) {
    for (i = 0; i < length; i++) {
      rxBuf_610__0005[rxQHead_610__0005][i] = b[i];
    }

    rxLen_610__0005[rxQHead_610__0005] = length;
    rxID_610__0005[rxQHead_610__0005] = id;
    if ((rxQHead_610__0005 == rxQTail_610__0005) && (rxAge_610__0005 == 0))
      rxQTail_610__0005 = (rxQTail_610__0005 + 1) % 1U;
    if ((rxQHead_610__0005 == (rxQTail_610__0005 + 1)% 1U) && (rxAge_610__0005
         != 0))
      rxQTail_610__0005 = (rxQTail_610__0005 + 1) % 1U;
    rxQHead_610__0005 = (rxQHead_610__0005 + 1 ) % 1U;
    rxAge_610__0005 = 0;
  }
}

uint8_T can_get_610__0005(uint16_T *age, uint32_T* id, uint8_T* extended,
  uint8_T *data, uint8_T length)
{
  uint8_T i;
  if (age != NULL)
    *age = rxAge_610__0005;
  if (id != NULL)
    *id = rxID_610__0005[rxQTail_610__0005];
  if (extended != NULL)
    *extended = 1U;
  if (length > 8)
    length = 8;
  if (length > rxLen_610__0005[rxQTail_610__0005])
    length = rxLen_610__0005[rxQTail_610__0005];
  if (data != NULL)
    for (i = 0; i < length; i++)
      data[i] = rxBuf_610__0005[rxQTail_610__0005][i];
  if ((rxQHead_610__0005 != (rxQTail_610__0005 + 1)% 1U) && (rxAge_610__0005 ==
       0))
    rxQTail_610__0005 = (rxQTail_610__0005 + 1) % 1U;
  else if (rxAge_610__0005 < MAX_AGE)
    rxAge_610__0005++;
  return length;
}

void rxFn_612__0005(unsigned int id, uint8_T length, uint8_T* data)
{
  uint8_T i;
  uint8_T* b = data;
  if ((length == 8U) ) {
    for (i = 0; i < length; i++) {
      rxBuf_612__0005[rxQHead_612__0005][i] = b[i];
    }

    rxLen_612__0005[rxQHead_612__0005] = length;
    rxID_612__0005[rxQHead_612__0005] = id;
    if ((rxQHead_612__0005 == rxQTail_612__0005) && (rxAge_612__0005 == 0))
      rxQTail_612__0005 = (rxQTail_612__0005 + 1) % 1U;
    if ((rxQHead_612__0005 == (rxQTail_612__0005 + 1)% 1U) && (rxAge_612__0005
         != 0))
      rxQTail_612__0005 = (rxQTail_612__0005 + 1) % 1U;
    rxQHead_612__0005 = (rxQHead_612__0005 + 1 ) % 1U;
    rxAge_612__0005 = 0;
  }
}

uint8_T can_get_612__0005(uint16_T *age, uint32_T* id, uint8_T* extended,
  uint8_T *data, uint8_T length)
{
  uint8_T i;
  if (age != NULL)
    *age = rxAge_612__0005;
  if (id != NULL)
    *id = rxID_612__0005[rxQTail_612__0005];
  if (extended != NULL)
    *extended = 1U;
  if (length > 8)
    length = 8;
  if (length > rxLen_612__0005[rxQTail_612__0005])
    length = rxLen_612__0005[rxQTail_612__0005];
  if (data != NULL)
    for (i = 0; i < length; i++)
      data[i] = rxBuf_612__0005[rxQTail_612__0005][i];
  if ((rxQHead_612__0005 != (rxQTail_612__0005 + 1)% 1U) && (rxAge_612__0005 ==
       0))
    rxQTail_612__0005 = (rxQTail_612__0005 + 1) % 1U;
  else if (rxAge_612__0005 < MAX_AGE)
    rxAge_612__0005++;
  return length;
}

void rxFn_611__0005(unsigned int id, uint8_T length, uint8_T* data)
{
  uint8_T i;
  uint8_T* b = data;
  if ((length == 8U) ) {
    for (i = 0; i < length; i++) {
      rxBuf_611__0005[rxQHead_611__0005][i] = b[i];
    }

    rxLen_611__0005[rxQHead_611__0005] = length;
    rxID_611__0005[rxQHead_611__0005] = id;
    if ((rxQHead_611__0005 == rxQTail_611__0005) && (rxAge_611__0005 == 0))
      rxQTail_611__0005 = (rxQTail_611__0005 + 1) % 1U;
    if ((rxQHead_611__0005 == (rxQTail_611__0005 + 1)% 1U) && (rxAge_611__0005
         != 0))
      rxQTail_611__0005 = (rxQTail_611__0005 + 1) % 1U;
    rxQHead_611__0005 = (rxQHead_611__0005 + 1 ) % 1U;
    rxAge_611__0005 = 0;
  }
}

uint8_T can_get_611__0005(uint16_T *age, uint32_T* id, uint8_T* extended,
  uint8_T *data, uint8_T length)
{
  uint8_T i;
  if (age != NULL)
    *age = rxAge_611__0005;
  if (id != NULL)
    *id = rxID_611__0005[rxQTail_611__0005];
  if (extended != NULL)
    *extended = 1U;
  if (length > 8)
    length = 8;
  if (length > rxLen_611__0005[rxQTail_611__0005])
    length = rxLen_611__0005[rxQTail_611__0005];
  if (data != NULL)
    for (i = 0; i < length; i++)
      data[i] = rxBuf_611__0005[rxQTail_611__0005][i];
  if ((rxQHead_611__0005 != (rxQTail_611__0005 + 1)% 1U) && (rxAge_611__0005 ==
       0))
    rxQTail_611__0005 = (rxQTail_611__0005 + 1) % 1U;
  else if (rxAge_611__0005 < MAX_AGE)
    rxAge_611__0005++;
  return length;
}

void CAN_ReceiveDispatch_1075__0027(boolean extended, uint32_t id, uint8_t *
  data, uint8_t data_len)
{
  extern uint8_T app_is_in_shutdown;
  if (!app_is_in_shutdown) {
    if (extended == 1U) {
      if ((id & 0x1FFFFFFF) == 0x18FF0080) {
        rxFn_610__0005(id, data_len, data);
      }
    }
  }

  if (!app_is_in_shutdown) {
    if (extended == 1U) {
      if ((id & 0x1FFFFFFF) == 0x18FF0280) {
        rxFn_612__0005(id, data_len, data);
      }
    }
  }

  if (!app_is_in_shutdown) {
    if (extended == 1U) {
      if ((id & 0x1FFFFFFF) == 0x18FF0180) {
        rxFn_611__0005(id, data_len, data);
      }
    }
  }
}

void post_start_CAN_1075__0027(void)
{
  if (started_1075__0027) {
    return;
  }

  started_1075__0027 = 1;
  start_CAN(CAN2, CAN_CAN2_baud_rate );
  can_register_rx_callback( CAN2, CAN_ReceiveDispatch_1075__0027 );
}                                      // end post_start_CAN_1075__0027
