/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Lightning_McSeas_VCU_Current_Mode.h
 *
 * Code generated for Simulink model 'Lightning_McSeas_VCU_Current_Mode'.
 *
 * Model version                  : 6.234
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Fri Apr  7 09:59:18 2023
 *
 * Target selection: raptor.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Lightning_McSeas_VCU_Current_Mode_h_
#define RTW_HEADER_Lightning_McSeas_VCU_Current_Mode_h_
#include <string.h>
#ifndef Lightning_McSeas_VCU_Current_Mode_COMMON_INCLUDES_
#define Lightning_McSeas_VCU_Current_Mode_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "data.h"
#include "lin.h"
#include "sdk_io_dictionary.h"
#include "sdk_interface.h"
#include "xcp_protocol.h"
#include "LIN2_common.h"
#include "can_1038__0031.h"
#include "can_1039__0031.h"
#include "lin_1040__0031.h"
#endif                  /* Lightning_McSeas_VCU_Current_Mode_COMMON_INCLUDES_ */

#include "Lightning_McSeas_VCU_Current_Mode_types.h"

/* Macros for accessing real-time model data structure */

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint32_T DelayInput1_DSTATE;         /* '<S38>/Delay Input1' */
  uint32_T UnitDelay1_DSTATE;          /* '<S32>/Unit Delay1' */
  uint32_T DelayInput1_DSTATE_j;       /* '<S37>/Delay Input1' */
  uint32_T UnitDelay1_DSTATE_m;        /* '<S31>/Unit Delay1' */
  uint32_T UnitDelay_DSTATE;           /* '<S35>/Unit Delay' */
  uint32_T UnitDelay1_DSTATE_a;        /* '<S22>/Unit Delay1' */
  uint32_T raptor_delta_time_DWORK1;   /* '<S35>/raptor_delta_time' */
  boolean_T UnitDelay2_DSTATE;         /* '<S32>/Unit Delay2' */
  boolean_T UnitDelay2_DSTATE_b;       /* '<S31>/Unit Delay2' */
  boolean_T DelayInput1_DSTATE_o;      /* '<S39>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_i;        /* '<S40>/Unit Delay' */
  boolean_T UnitDelay2_DSTATE_j;       /* '<S22>/Unit Delay2' */
  boolean_T UnitDelay_DSTATE_ik;       /* '<S25>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_a;        /* '<S21>/Unit Delay' */
  boolean_T UnitDelay1_DSTATE_o;       /* '<S21>/Unit Delay1' */
  boolean_T init1_DSTATE;              /* '<S36>/init = 1' */
} D_Work_Lightning_McSeas_VCU_Current_Mode;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState StoreEEPROM_Trig_ZCE;     /* '<S21>/Store EEPROM' */
  ZCSigState RaiseStartupEvent_Trig_ZCE;/* '<S21>/Raise Startup Event' */
  ZCSigState RaiseShutdownEvent_Trig_ZCE;/* '<S21>/Raise Shutdown Event' */
} PrevZCSigStates_Lightning_McSeas_VCU_Current_Mode;

/* Block states (default storage) */
extern D_Work_Lightning_McSeas_VCU_Current_Mode
  Lightning_McSeas_VCU_Current_Mode_DWork;

/* Zero-crossing (trigger) state */
extern PrevZCSigStates_Lightning_McSeas_VCU_Current_Mode
  Lightning_McSeas_VCU_Current_Mode_PrevZCSigState;

/* Model entry point functions */
extern void Lightning_McSeas_VCU_Current_Mode_initialize(void);
extern void Lightning_McSeas_VCU_Current_Mode_step(void);
extern void Lightning_McSeas_VCU_Current_Mode_terminate(void);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Lightning_McSeas_VCU_Current_Mode'
 * '<S1>'   : 'Lightning_McSeas_VCU_Current_Mode/Foreground'
 * '<S2>'   : 'Lightning_McSeas_VCU_Current_Mode/GCM48 Power Up_Down'
 * '<S3>'   : 'Lightning_McSeas_VCU_Current_Mode/raptor_xcp_def'
 * '<S4>'   : 'Lightning_McSeas_VCU_Current_Mode/Foreground/Analog'
 * '<S5>'   : 'Lightning_McSeas_VCU_Current_Mode/Foreground/CAN'
 * '<S6>'   : 'Lightning_McSeas_VCU_Current_Mode/Foreground/Digial'
 * '<S7>'   : 'Lightning_McSeas_VCU_Current_Mode/Foreground/Analog/Temperature Sensors'
 * '<S8>'   : 'Lightning_McSeas_VCU_Current_Mode/Foreground/CAN/Actuators'
 * '<S9>'   : 'Lightning_McSeas_VCU_Current_Mode/Foreground/CAN/Battery Switch'
 * '<S10>'  : 'Lightning_McSeas_VCU_Current_Mode/Foreground/CAN/MCU'
 * '<S11>'  : 'Lightning_McSeas_VCU_Current_Mode/Foreground/CAN/Battery Switch/If statement for on off switch'
 * '<S12>'  : 'Lightning_McSeas_VCU_Current_Mode/Foreground/CAN/Battery Switch/If statement for on off switch2'
 * '<S13>'  : 'Lightning_McSeas_VCU_Current_Mode/Foreground/CAN/Battery Switch/If statement for on off switch/If Action Subsystem'
 * '<S14>'  : 'Lightning_McSeas_VCU_Current_Mode/Foreground/CAN/Battery Switch/If statement for on off switch/If Action Subsystem1'
 * '<S15>'  : 'Lightning_McSeas_VCU_Current_Mode/Foreground/CAN/Battery Switch/If statement for on off switch2/If Action Subsystem'
 * '<S16>'  : 'Lightning_McSeas_VCU_Current_Mode/Foreground/CAN/Battery Switch/If statement for on off switch2/If Action Subsystem1'
 * '<S17>'  : 'Lightning_McSeas_VCU_Current_Mode/Foreground/CAN/MCU/If statement for on off switch2'
 * '<S18>'  : 'Lightning_McSeas_VCU_Current_Mode/Foreground/CAN/MCU/If statement for on off switch2/If Action Subsystem2'
 * '<S19>'  : 'Lightning_McSeas_VCU_Current_Mode/Foreground/CAN/MCU/If statement for on off switch2/If Action Subsystem3'
 * '<S20>'  : 'Lightning_McSeas_VCU_Current_Mode/Foreground/CAN/MCU/If statement for on off switch2/If Action Subsystem4'
 * '<S21>'  : 'Lightning_McSeas_VCU_Current_Mode/GCM48 Power Up_Down/Background'
 * '<S22>'  : 'Lightning_McSeas_VCU_Current_Mode/GCM48 Power Up_Down/Background/CntrSat2'
 * '<S23>'  : 'Lightning_McSeas_VCU_Current_Mode/GCM48 Power Up_Down/Background/Raise Shutdown Event'
 * '<S24>'  : 'Lightning_McSeas_VCU_Current_Mode/GCM48 Power Up_Down/Background/Raise Startup Event'
 * '<S25>'  : 'Lightning_McSeas_VCU_Current_Mode/GCM48 Power Up_Down/Background/SR'
 * '<S26>'  : 'Lightning_McSeas_VCU_Current_Mode/GCM48 Power Up_Down/Background/Store EEPROM'
 * '<S27>'  : 'Lightning_McSeas_VCU_Current_Mode/GCM48 Power Up_Down/Background/Wake sources'
 * '<S28>'  : 'Lightning_McSeas_VCU_Current_Mode/GCM48 Power Up_Down/Background/Raise Shutdown Event/raptor_shutdown'
 * '<S29>'  : 'Lightning_McSeas_VCU_Current_Mode/GCM48 Power Up_Down/Background/Raise Startup Event/raptor_startup'
 * '<S30>'  : 'Lightning_McSeas_VCU_Current_Mode/GCM48 Power Up_Down/Background/Store EEPROM/raptor_store_nv'
 * '<S31>'  : 'Lightning_McSeas_VCU_Current_Mode/GCM48 Power Up_Down/Background/Wake sources/CntrSat'
 * '<S32>'  : 'Lightning_McSeas_VCU_Current_Mode/GCM48 Power Up_Down/Background/Wake sources/CntrSat1'
 * '<S33>'  : 'Lightning_McSeas_VCU_Current_Mode/GCM48 Power Up_Down/Background/Wake sources/Compare To Zero'
 * '<S34>'  : 'Lightning_McSeas_VCU_Current_Mode/GCM48 Power Up_Down/Background/Wake sources/Compare To Zero1'
 * '<S35>'  : 'Lightning_McSeas_VCU_Current_Mode/GCM48 Power Up_Down/Background/Wake sources/Debounce2'
 * '<S36>'  : 'Lightning_McSeas_VCU_Current_Mode/GCM48 Power Up_Down/Background/Wake sources/Decode amd Ignore Some Wake Sources'
 * '<S37>'  : 'Lightning_McSeas_VCU_Current_Mode/GCM48 Power Up_Down/Background/Wake sources/Dtc'
 * '<S38>'  : 'Lightning_McSeas_VCU_Current_Mode/GCM48 Power Up_Down/Background/Wake sources/Dtc1'
 * '<S39>'  : 'Lightning_McSeas_VCU_Current_Mode/GCM48 Power Up_Down/Background/Wake sources/Debounce2/Detect Change'
 * '<S40>'  : 'Lightning_McSeas_VCU_Current_Mode/GCM48 Power Up_Down/Background/Wake sources/Debounce2/SetRst Init = 0'
 * '<S41>'  : 'Lightning_McSeas_VCU_Current_Mode/GCM48 Power Up_Down/Background/Wake sources/Decode amd Ignore Some Wake Sources/Compare To Zero1'
 * '<S42>'  : 'Lightning_McSeas_VCU_Current_Mode/GCM48 Power Up_Down/Background/Wake sources/Decode amd Ignore Some Wake Sources/Startup Wake Source'
 */
#endif                     /* RTW_HEADER_Lightning_McSeas_VCU_Current_Mode_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
