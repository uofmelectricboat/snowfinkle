/*****************************************************************************
   data.h
   Generated By:
   Raptor 2021b_1.0.14409 (6115)
   Matlab (R2021b) 9.11

   Copyright (c) 2018 New Eagle Products, Inc.
   All rights reserved.

   Code Generated at: Sun Nov  6 17:25:54 2022
 *****************************************************************************/

#ifndef __DATA_H
#define __DATA_H
#include "sdk_crc.h"
#include "rtwtypes.h"
#include "raptor_types.h"

/*  SS_DOUBLE  =  0,    / real32_T    /
   SS_SINGLE  =  1,    / real32_T    /
   SS_INT8    =  2,    / int8_T      /
   SS_UINT8   =  3,    / uint8_T     /
   SS_INT16   =  4,    / int16_T     /
   SS_UINT16  =  5,    / uint16_T    /
   SS_INT32   =  6,    / int32_T     /
   SS_UINT32  =  7,    / uint32_T    /
   SS_BOOLEAN =  8     / boolean_T  */
/***** RAM Variables *************************************************/
#define RAMVARIABLES

#pragma pack(8)

typedef struct {
  uint8_T INIT_RAM_Variables;
  boolean_T FgndTasksStopped;          /* Type : boolean_T, Storage : RAM,  */
  boolean_T Wake_Debug_StartupEventRaised;/* Type : boolean_T, Storage : RAM,  */
  uint16_T WakeSource_Startup;         /* Type : uint16_T, Storage : RAM,  */
  uint32_T Wake_DlyStopOfFgndTaskTTmr; /* Type : uint32_T, Storage : RAM,  */
  uint16_T Wake_INPUT1_Vlts;           /* Type : uint16_T, Storage : RAM,  */
  uint32_T Wake_LIN2_RxCount;          /* Type : uint32_T, Storage : RAM,  */
  uint32_T Wake_CAN2_RxCount;          /* Type : uint32_T, Storage : RAM,  */
  uint32_T Wake_CAN2_SleepDelayTTmr;   /* Type : uint32_T, Storage : RAM,  */
  uint32_T Wake_LIN2_SleepDelayTTmr;   /* Type : uint32_T, Storage : RAM,  */
  uint32_T dt_read;                    /* Type : uint32_T, Storage : RAM,  */
  uint16_T WakeConfigRegister;         /* Type : uint16_T, Storage : RAM,  */
  uint16_T WakeSource_RaptorIntrnlMeas;/* Type : uint16_T, Storage : RAM,  */
  uint16_T Wake_SourceBitAndWakeConfigRegister;/* Type : uint16_T, Storage : RAM,  */
  boolean_T Wake_AnyWakeSourceActive;  /* Type : boolean_T, Storage : RAM,  */
  uint16_T WakeSource_Current;         /* Type : uint16_T, Storage : RAM,  */
  boolean_T KeySw_Bgnd;                /* Type : boolean_T, Storage : RAM,  */
  boolean_T KeepModuleOn;              /* Type : boolean_T, Storage : RAM,  */
  uint32_T EcuAddr_RAM;                /* Type : uint32_T, Storage : RAM,  */
  uint32_T UDSServerAddr_RAM;          /* Type : uint32_T, Storage : RAM,  */
  uint32_T UDSClientAddr_RAM;          /* Type : uint32_T, Storage : RAM,  */
  uint32_T LIN2_Rx_Count;              /* Type : uint32_T, Storage : RAM,  */
  uint32_T LIN2_Tx_Count;              /* Type : uint32_T, Storage : RAM,  */
  uint8_T EEPROM_State;                /* Type : uint8_T, Storage : RAM,  */
} RAMVariables_T;

#pragma pack()

extern RAMVariables_T RAMVariables ;
extern void initRAMVariables(RAMVariables_T*);

/***** CONST Variables *************************************************/
#define CONSTVARIABLES

#pragma pack(8)

typedef struct {
  uint8_T const ModelName[20];         /* Type : uint8_T, Storage : CONST,  */
  uint32_T const BuildNumber;          /* Type : uint32_T, Storage : CONST,  */
  uint8_T const MatlabVersion[13];     /* Type : uint8_T, Storage : CONST,  */
  uint8_T const RaptorVersion[20];     /* Type : uint8_T, Storage : CONST,  */
  uint8_T const SwIdTxt[24];           /* Type : uint8_T, Storage : CONST,  */
  uint8_T const CalIdTxt[28];          /* Type : uint8_T, Storage : CONST,  */
  uint8_T const BuildUID[21];          /* Type : uint8_T, Storage : CONST,  */
  uint16_T const IdTableRev;           /* Type : uint16_T, Storage : CONST,  */
  uint32_T const HardwareType;         /* Type : uint32_T, Storage : CONST,  */
  uint8_T const DateStamp[20];         /* Type : uint8_T, Storage : CONST,  */
  uint32_T const LiteModeKey;          /* Type : uint32_T, Storage : CONST,  */
} CONSTVariables_T;

#pragma pack()

extern const CONSTVariables_T CONSTVariables;
extern void initCONSTVariables(const CONSTVariables_T*);
typedef enum {
  EE_INIT = 0,
  EE_LOADED_DEFAULTS = 1,
  EE_LOADED_DEFAULTS_AFTER_PROGRAMMING = 2,
  EE_LOADED_DEFAULTS_INCORRECT_CRC = 3,
  EE_LOADED_DEFAULTS_INCORRECT_EEID = 4,
  EE_LOADED_DEFAULTS_ERROR_READING = 5,
  EE_LOADED_DEFAULTS_FAILED_DRV_INIT = 6,
  EE_LOADED_SAVED_VALUES_AFTER_PROGRAMMING = 7,
  EE_LOADED_SAVED_VALUES = 8,
  EE_LOADED_BACKUP_VALUES = 9,
  EE_STORE_IN_PROGESS = 10,
  EE_STORE_FAILED = 11,
  EE_STORE_SUCCESS = 12,
} EE_STATES;

/***** EE Variables *************************************************/
#define EEVARIABLES

#pragma pack(8)

typedef struct {
  uint32_T EE_UniqID;
  uint16_T WAKE_INPUT1_Threshold;      /* Type : uint16_T, Storage : EEPROM */
  uint32_T Wake_LIN2_SleepDelayTime;   /* Type : uint32_T, Storage : CAL */
  uint32_T Wake_CAN2_SleepDelayTime;   /* Type : uint32_T, Storage : CAL */
  uint32_T KeySwLoTimeThr;             /* Type : uint32_T, Storage : CAL */
  boolean_T GCM48Wake_LIN2_cal;        /* Type : boolean_T, Storage : CAL */
  boolean_T GCM48Wake_CAN2_cal;        /* Type : boolean_T, Storage : CAL */
  boolean_T GCM48Wake_INPUT1_cal;      /* Type : boolean_T, Storage : CAL */
  uint32_T Wake_DlyStopOfFgndTaskTime; /* Type : uint32_T, Storage : CAL */
  uint32_T CAN1__XCP_BC_ID;            /* Type : uint32_T, Storage : CAL */
  uint32_T CAN1__XCP_RX_ID;            /* Type : uint32_T, Storage : CAL */
  uint32_T CAN1__XCP_TX_ID;            /* Type : uint32_T, Storage : CAL */
  uint16_T CAN1__XCP_Security;         /* Type : uint16_T, Storage : CAL */
  uint16_T CRC;
} EEVariables_T;

#pragma pack()

extern const EEVariables_T EEVariables_DEFAULT;
extern EEVariables_T EEVariables_RAMShadow;
extern void App_EE_Store(void);
extern void App_EE_Defaults(void);

/***** #DEFINES Accessors *************************************************/
#define FgndTasksStopped_Data()        (RAMVariables.FgndTasksStopped)
#define FgndTasksStopped_Ptr()         (&(RAMVariables.FgndTasksStopped))
#define FgndTasksStopped_ELEMENTS()    (1 * 1)
#define Wake_Debug_StartupEventRaised_Data() (RAMVariables.Wake_Debug_StartupEventRaised)
#define Wake_Debug_StartupEventRaised_Ptr() (&(RAMVariables.Wake_Debug_StartupEventRaised))
#define Wake_Debug_StartupEventRaised_ELEMENTS() (1 * 1)
#define WakeSource_Startup_Data()      (RAMVariables.WakeSource_Startup)
#define WakeSource_Startup_Ptr()       (&(RAMVariables.WakeSource_Startup))
#define WakeSource_Startup_ELEMENTS()  (1 * 1)
#define Wake_LIN2_SleepDelayTime_Data() (EEVariables_RAMShadow.Wake_LIN2_SleepDelayTime)
#define Wake_LIN2_SleepDelayTime_Ptr() (&(EEVariables_RAMShadow.Wake_LIN2_SleepDelayTime))
#define Wake_LIN2_SleepDelayTime_ELEMENTS() (1 * 1)
#define Wake_CAN2_SleepDelayTime_Data() (EEVariables_RAMShadow.Wake_CAN2_SleepDelayTime)
#define Wake_CAN2_SleepDelayTime_Ptr() (&(EEVariables_RAMShadow.Wake_CAN2_SleepDelayTime))
#define Wake_CAN2_SleepDelayTime_ELEMENTS() (1 * 1)
#define WAKE_INPUT1_Threshold_Data()   (EEVariables_RAMShadow.WAKE_INPUT1_Threshold)
#define WAKE_INPUT1_Threshold_Ptr()    (&(EEVariables_RAMShadow.WAKE_INPUT1_Threshold))
#define WAKE_INPUT1_Threshold_ELEMENTS() (1 * 1)
#define KeySwLoTimeThr_Data()          (EEVariables_RAMShadow.KeySwLoTimeThr)
#define KeySwLoTimeThr_Ptr()           (&(EEVariables_RAMShadow.KeySwLoTimeThr))
#define KeySwLoTimeThr_ELEMENTS()      (1 * 1)
#define GCM48Wake_LIN2_cal_Data()      (EEVariables_RAMShadow.GCM48Wake_LIN2_cal)
#define GCM48Wake_LIN2_cal_Ptr()       (&(EEVariables_RAMShadow.GCM48Wake_LIN2_cal))
#define GCM48Wake_LIN2_cal_ELEMENTS()  (1 * 1)
#define GCM48Wake_CAN2_cal_Data()      (EEVariables_RAMShadow.GCM48Wake_CAN2_cal)
#define GCM48Wake_CAN2_cal_Ptr()       (&(EEVariables_RAMShadow.GCM48Wake_CAN2_cal))
#define GCM48Wake_CAN2_cal_ELEMENTS()  (1 * 1)
#define GCM48Wake_INPUT1_cal_Data()    (EEVariables_RAMShadow.GCM48Wake_INPUT1_cal)
#define GCM48Wake_INPUT1_cal_Ptr()     (&(EEVariables_RAMShadow.GCM48Wake_INPUT1_cal))
#define GCM48Wake_INPUT1_cal_ELEMENTS() (1 * 1)
#define Wake_DlyStopOfFgndTaskTime_Data() (EEVariables_RAMShadow.Wake_DlyStopOfFgndTaskTime)
#define Wake_DlyStopOfFgndTaskTime_Ptr() (&(EEVariables_RAMShadow.Wake_DlyStopOfFgndTaskTime))
#define Wake_DlyStopOfFgndTaskTime_ELEMENTS() (1 * 1)
#define Wake_DlyStopOfFgndTaskTTmr_Data() (RAMVariables.Wake_DlyStopOfFgndTaskTTmr)
#define Wake_DlyStopOfFgndTaskTTmr_Ptr() (&(RAMVariables.Wake_DlyStopOfFgndTaskTTmr))
#define Wake_DlyStopOfFgndTaskTTmr_ELEMENTS() (1 * 1)
#define Wake_INPUT1_Vlts_Data()        (RAMVariables.Wake_INPUT1_Vlts)
#define Wake_INPUT1_Vlts_Ptr()         (&(RAMVariables.Wake_INPUT1_Vlts))
#define Wake_INPUT1_Vlts_ELEMENTS()    (1 * 1)
#define Wake_LIN2_RxCount_Data()       (RAMVariables.Wake_LIN2_RxCount)
#define Wake_LIN2_RxCount_Ptr()        (&(RAMVariables.Wake_LIN2_RxCount))
#define Wake_LIN2_RxCount_ELEMENTS()   (1 * 1)
#define Wake_CAN2_RxCount_Data()       (RAMVariables.Wake_CAN2_RxCount)
#define Wake_CAN2_RxCount_Ptr()        (&(RAMVariables.Wake_CAN2_RxCount))
#define Wake_CAN2_RxCount_ELEMENTS()   (1 * 1)
#define Wake_CAN2_SleepDelayTTmr_Data() (RAMVariables.Wake_CAN2_SleepDelayTTmr)
#define Wake_CAN2_SleepDelayTTmr_Ptr() (&(RAMVariables.Wake_CAN2_SleepDelayTTmr))
#define Wake_CAN2_SleepDelayTTmr_ELEMENTS() (1 * 1)
#define Wake_LIN2_SleepDelayTTmr_Data() (RAMVariables.Wake_LIN2_SleepDelayTTmr)
#define Wake_LIN2_SleepDelayTTmr_Ptr() (&(RAMVariables.Wake_LIN2_SleepDelayTTmr))
#define Wake_LIN2_SleepDelayTTmr_ELEMENTS() (1 * 1)
#define dt_read_Data()                 (RAMVariables.dt_read)
#define dt_read_Ptr()                  (&(RAMVariables.dt_read))
#define dt_read_ELEMENTS()             (1 * 1)
#define WakeConfigRegister_Data()      (RAMVariables.WakeConfigRegister)
#define WakeConfigRegister_Ptr()       (&(RAMVariables.WakeConfigRegister))
#define WakeConfigRegister_ELEMENTS()  (1 * 1)
#define WakeSource_RaptorIntrnlMeas_Data() (RAMVariables.WakeSource_RaptorIntrnlMeas)
#define WakeSource_RaptorIntrnlMeas_Ptr() (&(RAMVariables.WakeSource_RaptorIntrnlMeas))
#define WakeSource_RaptorIntrnlMeas_ELEMENTS() (1 * 1)
#define Wake_SourceBitAndWakeConfigRegister_Data() (RAMVariables.Wake_SourceBitAndWakeConfigRegister)
#define Wake_SourceBitAndWakeConfigRegister_Ptr() (&(RAMVariables.Wake_SourceBitAndWakeConfigRegister))
#define Wake_SourceBitAndWakeConfigRegister_ELEMENTS() (1 * 1)
#define Wake_AnyWakeSourceActive_Data() (RAMVariables.Wake_AnyWakeSourceActive)
#define Wake_AnyWakeSourceActive_Ptr() (&(RAMVariables.Wake_AnyWakeSourceActive))
#define Wake_AnyWakeSourceActive_ELEMENTS() (1 * 1)
#define WakeSource_Current_Data()      (RAMVariables.WakeSource_Current)
#define WakeSource_Current_Ptr()       (&(RAMVariables.WakeSource_Current))
#define WakeSource_Current_ELEMENTS()  (1 * 1)
#define KeySw_Bgnd_Data()              (RAMVariables.KeySw_Bgnd)
#define KeySw_Bgnd_Ptr()               (&(RAMVariables.KeySw_Bgnd))
#define KeySw_Bgnd_ELEMENTS()          (1 * 1)
#define KeepModuleOn_Data()            (RAMVariables.KeepModuleOn)
#define KeepModuleOn_Ptr()             (&(RAMVariables.KeepModuleOn))
#define KeepModuleOn_ELEMENTS()        (1 * 1)
#define CAN1__XCP_BC_ID_Data()         (EEVariables_RAMShadow.CAN1__XCP_BC_ID)
#define CAN1__XCP_BC_ID_Ptr()          (&(EEVariables_RAMShadow.CAN1__XCP_BC_ID))
#define CAN1__XCP_BC_ID_ELEMENTS()     (1 * 1)
#define CAN1__XCP_RX_ID_Data()         (EEVariables_RAMShadow.CAN1__XCP_RX_ID)
#define CAN1__XCP_RX_ID_Ptr()          (&(EEVariables_RAMShadow.CAN1__XCP_RX_ID))
#define CAN1__XCP_RX_ID_ELEMENTS()     (1 * 1)
#define CAN1__XCP_TX_ID_Data()         (EEVariables_RAMShadow.CAN1__XCP_TX_ID)
#define CAN1__XCP_TX_ID_Ptr()          (&(EEVariables_RAMShadow.CAN1__XCP_TX_ID))
#define CAN1__XCP_TX_ID_ELEMENTS()     (1 * 1)
#define ModelName_Data()               (CONSTVariables.ModelName)
#define ModelName_Ptr()                (&(CONSTVariables.ModelName))
#define ModelName_ELEMENTS()           (1 * 20)
#define BuildNumber_Data()             (CONSTVariables.BuildNumber)
#define BuildNumber_Ptr()              (&(CONSTVariables.BuildNumber))
#define BuildNumber_ELEMENTS()         (1 * 1)
#define MatlabVersion_Data()           (CONSTVariables.MatlabVersion)
#define MatlabVersion_Ptr()            (&(CONSTVariables.MatlabVersion))
#define MatlabVersion_ELEMENTS()       (1 * 13)
#define RaptorVersion_Data()           (CONSTVariables.RaptorVersion)
#define RaptorVersion_Ptr()            (&(CONSTVariables.RaptorVersion))
#define RaptorVersion_ELEMENTS()       (1 * 20)
#define SwIdTxt_Data()                 (CONSTVariables.SwIdTxt)
#define SwIdTxt_Ptr()                  (&(CONSTVariables.SwIdTxt))
#define SwIdTxt_ELEMENTS()             (1 * 24)
#define CalIdTxt_Data()                (CONSTVariables.CalIdTxt)
#define CalIdTxt_Ptr()                 (&(CONSTVariables.CalIdTxt))
#define CalIdTxt_ELEMENTS()            (1 * 28)
#define BuildUID_Data()                (CONSTVariables.BuildUID)
#define BuildUID_Ptr()                 (&(CONSTVariables.BuildUID))
#define BuildUID_ELEMENTS()            (1 * 21)
#define IdTableRev_Data()              (CONSTVariables.IdTableRev)
#define IdTableRev_Ptr()               (&(CONSTVariables.IdTableRev))
#define IdTableRev_ELEMENTS()          (1 * 1)
#define HardwareType_Data()            (CONSTVariables.HardwareType)
#define HardwareType_Ptr()             (&(CONSTVariables.HardwareType))
#define HardwareType_ELEMENTS()        (1 * 1)
#define EcuAddr_RAM_Data()             (RAMVariables.EcuAddr_RAM)
#define EcuAddr_RAM_Ptr()              (&(RAMVariables.EcuAddr_RAM))
#define EcuAddr_RAM_ELEMENTS()         (1 * 1)
#define UDSServerAddr_RAM_Data()       (RAMVariables.UDSServerAddr_RAM)
#define UDSServerAddr_RAM_Ptr()        (&(RAMVariables.UDSServerAddr_RAM))
#define UDSServerAddr_RAM_ELEMENTS()   (1 * 1)
#define UDSClientAddr_RAM_Data()       (RAMVariables.UDSClientAddr_RAM)
#define UDSClientAddr_RAM_Ptr()        (&(RAMVariables.UDSClientAddr_RAM))
#define UDSClientAddr_RAM_ELEMENTS()   (1 * 1)
#define DateStamp_Data()               (CONSTVariables.DateStamp)
#define DateStamp_Ptr()                (&(CONSTVariables.DateStamp))
#define DateStamp_ELEMENTS()           (1 * 20)
#define LiteModeKey_Data()             (CONSTVariables.LiteModeKey)
#define LiteModeKey_Ptr()              (&(CONSTVariables.LiteModeKey))
#define LiteModeKey_ELEMENTS()         (1 * 1)
#define CAN1__XCP_Security_Data()      (EEVariables_RAMShadow.CAN1__XCP_Security)
#define CAN1__XCP_Security_Ptr()       (&(EEVariables_RAMShadow.CAN1__XCP_Security))
#define CAN1__XCP_Security_ELEMENTS()  (1 * 1)
#define LIN2_Rx_Count_Data()           (RAMVariables.LIN2_Rx_Count)
#define LIN2_Rx_Count_Ptr()            (&(RAMVariables.LIN2_Rx_Count))
#define LIN2_Rx_Count_ELEMENTS()       (1 * 1)
#define LIN2_Tx_Count_Data()           (RAMVariables.LIN2_Tx_Count)
#define LIN2_Tx_Count_Ptr()            (&(RAMVariables.LIN2_Tx_Count))
#define LIN2_Tx_Count_ELEMENTS()       (1 * 1)
#define EEPROM_State_Data()            (RAMVariables.EEPROM_State)
#define EEPROM_State_Ptr()             (&(RAMVariables.EEPROM_State))
#define EEPROM_State_ELEMENTS()        (1 * 1)
#define NonVolatileCRC_Data()          (EEVariables_RAMShadow.CRC)
#define NonVolatileCRC_Ptr()           (&(EEVariables_RAMShadow.CRC))

/***** CAL Locator ********************************************************/
#define CALLOC_START                   ((void*)Wake_LIN2_SleepDelayTime_Ptr())
#define CALLOC_LENGTH                  ( sizeof(Wake_LIN2_SleepDelayTime_Data()) + sizeof(Wake_CAN2_SleepDelayTime_Data()) + sizeof(KeySwLoTimeThr_Data()) + sizeof(GCM48Wake_LIN2_cal_Data()) + sizeof(GCM48Wake_CAN2_cal_Data()) + sizeof(GCM48Wake_INPUT1_cal_Data()) + sizeof(Wake_DlyStopOfFgndTaskTime_Data()) + sizeof(CAN1__XCP_BC_ID_Data()) + sizeof(CAN1__XCP_RX_ID_Data()) + sizeof(CAN1__XCP_TX_ID_Data()) + sizeof(CAN1__XCP_Security_Data()) + 0)
#endif
