/*****************************************************************************
   data.c
   Generated By:
   Raptor 2021b_1.0.14409 (6115)
   Matlab (R2021b) 9.11

   Copyright (c) 2018 New Eagle Products, Inc.
   All rights reserved.

   Code Generated at: Sun Nov  6 18:28:18 2022
 *****************************************************************************/

#include "raptor_types.h"
#include "data.h"
#include "string.h"                    /* TODO Reseach availabilty */
#include "Lightning_McSeas_VCU_Current_Mode.h"
#include "Lightning_McSeas_VCU_Current_Mode_private.h"
#include "mem_api.h"
#include "sdk_crc.h"

/* SS_DOUBLE  =  0,    / real32_T    /
   SS_SINGLE  =  1,    / real32_T  /
   SS_INT8    =  2,    / int8_T    /
   SS_UINT8   =  3,    / uint8_T   /
   SS_INT16   =  4,    / int16_T   /
   SS_UINT16  =  5,    / uint16_T  /
   SS_INT32   =  6,    / int32_T   /
   SS_UINT32  =  7,    / uint32_T  /
   SS_BOOLEAN =  8     / boolean_T */
RAMVariables_T RAMVariables ;
const RAMVariables_T RAMVariables_DEFAULT __attribute__ ((section (".romsymbols")))
  = {
  55,                                  /*INIT_RAM_Variables*/
  0,                                   /* FgndTasksStopped */
  0,                                   /* Wake_Debug_StartupEventRaised */
  0U,                                  /* WakeSource_Startup */
  0UL,                                 /* Wake_DlyStopOfFgndTaskTTmr */
  0U,                                  /* Wake_INPUT1_Vlts */
  0UL,                                 /* Wake_LIN2_RxCount */
  0UL,                                 /* Wake_CAN2_RxCount */
  0UL,                                 /* Wake_CAN2_SleepDelayTTmr */
  0UL,                                 /* Wake_LIN2_SleepDelayTTmr */
  0UL,                                 /* dt_read */
  0U,                                  /* WakeConfigRegister */
  0U,                                  /* WakeSource_RaptorIntrnlMeas */
  0U,                                  /* Wake_SourceBitAndWakeConfigRegister */
  0,                                   /* Wake_AnyWakeSourceActive */
  0U,                                  /* WakeSource_Current */
  0,                                   /* KeySw_Bgnd */
  0,                                   /* KeepModuleOn */
  11UL,                                /* EcuAddr_RAM */
  1536UL,                              /* UDSServerAddr_RAM */
  1616UL,                              /* UDSClientAddr_RAM */
  0UL,                                 /* LIN2_Rx_Count */
  0UL,                                 /* LIN2_Tx_Count */
  0U,                                  /* EEPROM_State */
};

void initRAMVariables(RAMVariables_T* ramVariables)
{
  memcpy(ramVariables, &RAMVariables_DEFAULT, sizeof(RAMVariables_DEFAULT));
}

const CONSTVariables_T CONSTVariables __attribute__ ((section (".romsymbols"))) =
{
  { 76U, 105U, 103U, 104U, 116U, 110U, 105U, 110U, 103U, 95U, 77U, 99U, 83U,
    101U, 97U, 115U, 95U, 86U, 67U, 85U, 95U, 67U, 117U, 114U, 114U, 101U, 110U,
    116U, 95U, 77U, 111U, 100U, 101U, },/* ModelName */
  51UL,                                /* BuildNumber */

  { 40U, 82U, 50U, 48U, 50U, 49U, 98U, 41U, 32U, 57U, 46U, 49U, 49U, },/* MatlabVersion */

  { 50U, 48U, 50U, 49U, 98U, 95U, 49U, 46U, 48U, 46U, 49U, 52U, 52U, 48U, 57U,
    95U, 54U, 49U, 49U, 53U, },        /* RaptorVersion */

  { 76U, 105U, 103U, 104U, 116U, 110U, 105U, 110U, 103U, 95U, 77U, 99U, 83U,
    101U, 97U, 115U, 95U, 86U, 67U, 85U, 95U, 67U, 117U, 114U, 114U, 101U, 110U,
    116U, 95U, 77U, 111U, 100U, 101U, 95U, 48U, 53U, 49U, },/* SwIdTxt */

  { 76U, 105U, 103U, 104U, 116U, 110U, 105U, 110U, 103U, 95U, 77U, 99U, 83U,
    101U, 97U, 115U, 95U, 86U, 67U, 85U, 95U, 67U, 117U, 114U, 114U, 101U, 110U,
    116U, 95U, 77U, 111U, 100U, 101U, 95U, 48U, 53U, 49U, 95U, 48U, 48U, 48U, },/* CalIdTxt */

  { 54U, 81U, 48U, 110U, 114U, 121U, 69U, 54U, 106U, 69U, 109U, 107U, 101U, 104U,
    97U, 79U, 67U, 57U, 114U, 119U, 115U, },/* BuildUID */
  4,                                   /* IdTableRev */
  18940163UL,                          /* HardwareType */

  { 48U, 54U, 45U, 78U, 111U, 118U, 45U, 50U, 48U, 50U, 50U, 32U, 49U, 56U, 58U,
    50U, 56U, 58U, 49U, 57U, },        /* DateStamp */
  3060303249UL,                        /* LiteModeKey */
};

void initCONSTVariables(const CONSTVariables_T* cv)
{

#ifdef UNUSED

  UNUSED(cv);

#endif

}

/* Total EEPROM Structure Size: 41U Bytes */
const EEVariables_T EEVariables_DEFAULT = {
  166894573U,                          /* EE_UniqID 	*/
  1200U,                               /* WAKE_INPUT1_Threshold */
  50UL,                                /* Wake_LIN2_SleepDelayTime */
  50UL,                                /* Wake_CAN2_SleepDelayTime */
  200UL,                               /* KeySwLoTimeThr */
  0U,                                  /* GCM48Wake_LIN2_cal */
  0U,                                  /* GCM48Wake_CAN2_cal */
  1U,                                  /* GCM48Wake_INPUT1_cal */
  1UL,                                 /* Wake_DlyStopOfFgndTaskTime */
  256UL,                               /* CAN1__XCP_BC_ID */
  512UL,                               /* CAN1__XCP_RX_ID */
  768UL,                               /* CAN1__XCP_TX_ID */
  20038U,                              /* CAN1__XCP_Security */
  0,                                   /* CRC Initial Value */
};

EEVariables_T EEVariables_RAMShadow ;
uint16_T read_eeprom(void);
void App_EE_Write(void);
EEPage0_t page0 = { 0 };

/* MANAGE EE PROM MEMORY */
void App_EE_Defaults(void)
{
  memcpy(&EEVariables_RAMShadow, &EEVariables_DEFAULT, sizeof(EEVariables_T));
  EEPROM_State_Data() = EE_LOADED_DEFAULTS;
}

void App_EE_Init(void);
void App_EE_Init(void)
{
  uint16_t ret = 0;
  uint8_T firstStart = 0;
  uint32_T ee_size = ((uint32_T)&EEVariables_RAMShadow.CRC - (uint32_T)
                      &EEVariables_RAMShadow);
  uint8_T dBuffer[EE_PAGE_SIZE];
  ret = open_eeprom();
  if (ret != 0x0) {
    while (1) ;
  }

  /* Read and Determine if it is first start after program */
  ret = ee_read_page(0, &dBuffer, EE_PAGE_SIZE);
  if (ret != 0x0)                      /* No Page 0 */
  {
    firstStart = 1;
  } else {
    memcpy(&page0, &dBuffer, sizeof(EEPage0_t));
    firstStart = page0.FirstStartFlag;

    /* page0 write will be delayed until the proper shut-down store of NV */
  }

  if (firstStart) {
    /* Load defaults after programming - new values may have been merged into EEVariables_DEFAULT */
    App_EE_Defaults();
    EEPROM_State_Data() = EE_LOADED_DEFAULTS_AFTER_PROGRAMMING;
  } else if (read_eeprom() != EE_NO_ERROR) {
    /* Revert to defaults - error reading stored data */
    App_EE_Defaults();
    EEPROM_State_Data() = EE_LOADED_DEFAULTS_ERROR_READING;
  } else if (EEVariables_RAMShadow.EE_UniqID != EEVariables_DEFAULT.EE_UniqID) {
    /* Revert to defaults - the data stored previously doesn't match the format for the current application */
    App_EE_Defaults();
    EEPROM_State_Data() = EE_LOADED_DEFAULTS_INCORRECT_EEID;
  } else if (!is_crc_valid((void*)&EEVariables_RAMShadow, ee_size,
              EEVariables_RAMShadow.CRC)) {
    /* Revert to defaults - stored data is corrupted */
    App_EE_Defaults();
    EEPROM_State_Data() = EE_LOADED_DEFAULTS_INCORRECT_CRC;
  } else {
    /* Normal case startup, reloaded values */
    EEPROM_State_Data() = EE_LOADED_SAVED_VALUES;
                                      /* Normal case startup, reloaded values */
  }
}

uint16_T read_eeprom(void)
{
  uint16_t result;
  uint16_T eeReadIdx = 0;
  uint8_T readBuf[120];
  uint8_T retryCnt = 0;
  uint8_T* wrPtr = (uint8_T*)&EEVariables_RAMShadow;
  uint32_T ee_size = ((uint32_T)&EEVariables_RAMShadow.CRC - (uint32_T)
                      &EEVariables_RAMShadow) + 2;
  uint16_T total_EE_PgCnt = (ee_size / EE_PAGE_SIZE) + ((ee_size % EE_PAGE_SIZE)
    > 0);

  /* READ Full EEPROM */
  for (eeReadIdx = 0; eeReadIdx < total_EE_PgCnt; eeReadIdx++) {
    retryCnt = 0;
    for (retryCnt = 0; retryCnt < 25; retryCnt++) {
      result = ee_read_page(eeReadIdx+1, (void*)&readBuf, EE_PAGE_SIZE);
      if (result == EE_NO_ERROR) {
        break;
      }
    }

    if (result == EE_NO_ERROR) {
      /* copy into EEVariables_RAMShadow	*/
      uint16_T lastFullpageIndx = ((sizeof(EEVariables_T) % EE_PAGE_SIZE) > 0) ?
        (total_EE_PgCnt-1) : total_EE_PgCnt;
      if (eeReadIdx < lastFullpageIndx) {
        memcpy(wrPtr, &readBuf, EE_PAGE_SIZE);
        wrPtr += EE_PAGE_SIZE;
      } else {
        memcpy(wrPtr, &readBuf, sizeof(EEVariables_T) % EE_PAGE_SIZE);
      }
    } else {
      break;
    }
  }

  return result;
}

void App_EE_Store(void)
{
  if (EEPROM_State_Data() != EE_STORE_IN_PROGESS) {
    EEPROM_State_Data() = EE_STORE_IN_PROGESS;
    App_EE_Write();
  }
}

void App_EE_Write(void)
{
  uint16_t result;
  uint32_T ee_size = ((uint32_T)&EEVariables_RAMShadow.CRC - (uint32_T)
                      &EEVariables_RAMShadow) + 2;
  uint16_T total_EE_PgCnt = (ee_size / EE_PAGE_SIZE) + ((ee_size % EE_PAGE_SIZE)
    > 0);
  static uint8_T* eeWrite_Ptr;
  static uint16_T eeWrite_Idx = 0;
  static uint16_T runningCRC = 0xFFFF;
  uint32_T ee_WriteLen = (ee_size > EE_PAGE_SIZE) ? EE_PAGE_SIZE : ee_size;
  runningCRC = crc16_calculation((void*)&EEVariables_RAMShadow, ee_size - 2,
    0xFFFF);
  EEVariables_RAMShadow.CRC = runningCRC;
  eeWrite_Idx = 0;
  eeWrite_Ptr = (void*)&EEVariables_RAMShadow;
  EEPROM_State_Data() = EE_STORE_IN_PROGESS;

  /* Write the set of pages */
  for (eeWrite_Idx = 0; eeWrite_Idx < total_EE_PgCnt; eeWrite_Idx++) {
    /* write page */
    result = ee_write_page(eeWrite_Idx+1,(void*)eeWrite_Ptr, ee_WriteLen);
    if (result == EE_NO_ERROR) {
      /* Success */
      eeWrite_Ptr += EE_PAGE_SIZE;
      if (eeWrite_Idx == (total_EE_PgCnt-1)) {
        /* last page, update crc */
        ee_WriteLen = ee_size % EE_PAGE_SIZE;
        if (ee_WriteLen == 0) {
          ee_WriteLen = ee_size;
        }
      }
    } else {
      break;
      EEPROM_State_Data() = EE_STORE_FAILED;
    }
  }

  {
    boolean test = is_crc_valid((void*)&EEVariables_RAMShadow, ee_size-2,
      runningCRC );
    if (test) {
      uint32_t cnt = 0;
      while (cnt < 15000) {
        cnt++;
      }
    }
  }

  if (page0.FirstStartFlag) {
    page0.FirstStartFlag = 0;
    ee_write_page(0, &page0, sizeof(EEPage0_t));
  }

  /* finished */
  EEPROM_State_Data() = EE_STORE_SUCCESS;
}
