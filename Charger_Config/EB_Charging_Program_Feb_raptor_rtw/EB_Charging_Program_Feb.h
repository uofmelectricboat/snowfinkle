/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: EB_Charging_Program_Feb.h
 *
 * Code generated for Simulink model 'EB_Charging_Program_Feb'.
 *
 * Model version                  : 6.230
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Fri Apr  7 16:05:33 2023
 *
 * Target selection: raptor.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_EB_Charging_Program_Feb_h_
#define RTW_HEADER_EB_Charging_Program_Feb_h_
#include <string.h>
#ifndef EB_Charging_Program_Feb_COMMON_INCLUDES_
#define EB_Charging_Program_Feb_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "data.h"
#include "lin.h"
#include "sdk_io_dictionary.h"
#include "sdk_interface.h"
#include "xcp_protocol.h"
#include "LIN2_common.h"
#include "can_2066__0005.h"
#include "can_2067__0005.h"
#include "lin_2068__0005.h"
#endif                            /* EB_Charging_Program_Feb_COMMON_INCLUDES_ */

#include "EB_Charging_Program_Feb_types.h"

/* Macros for accessing real-time model data structure */

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint32_T DelayInput1_DSTATE;         /* '<S40>/Delay Input1' */
  uint32_T UnitDelay1_DSTATE;          /* '<S34>/Unit Delay1' */
  uint32_T DelayInput1_DSTATE_j;       /* '<S39>/Delay Input1' */
  uint32_T UnitDelay1_DSTATE_m;        /* '<S33>/Unit Delay1' */
  uint32_T UnitDelay_DSTATE;           /* '<S37>/Unit Delay' */
  uint32_T UnitDelay1_DSTATE_a;        /* '<S24>/Unit Delay1' */
  uint32_T raptor_delta_time_DWORK1;   /* '<S37>/raptor_delta_time' */
  boolean_T UnitDelay2_DSTATE;         /* '<S34>/Unit Delay2' */
  boolean_T UnitDelay2_DSTATE_b;       /* '<S33>/Unit Delay2' */
  boolean_T DelayInput1_DSTATE_o;      /* '<S41>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_i;        /* '<S42>/Unit Delay' */
  boolean_T UnitDelay2_DSTATE_j;       /* '<S24>/Unit Delay2' */
  boolean_T UnitDelay_DSTATE_ik;       /* '<S27>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_a;        /* '<S23>/Unit Delay' */
  boolean_T UnitDelay1_DSTATE_o;       /* '<S23>/Unit Delay1' */
  boolean_T init1_DSTATE;              /* '<S38>/init = 1' */
} D_Work_EB_Charging_Program_Feb;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState StoreEEPROM_Trig_ZCE;     /* '<S23>/Store EEPROM' */
  ZCSigState RaiseStartupEvent_Trig_ZCE;/* '<S23>/Raise Startup Event' */
  ZCSigState RaiseShutdownEvent_Trig_ZCE;/* '<S23>/Raise Shutdown Event' */
} PrevZCSigStates_EB_Charging_Program_Feb;

/* Block states (default storage) */
extern D_Work_EB_Charging_Program_Feb EB_Charging_Program_Feb_DWork;

/* Zero-crossing (trigger) state */
extern PrevZCSigStates_EB_Charging_Program_Feb
  EB_Charging_Program_Feb_PrevZCSigState;

/* Model entry point functions */
extern void EB_Charging_Program_Feb_initialize(void);
extern void EB_Charging_Program_Feb_step(void);
extern void EB_Charging_Program_Feb_terminate(void);

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
 * '<Root>' : 'EB_Charging_Program_Feb'
 * '<S1>'   : 'EB_Charging_Program_Feb/Foreground'
 * '<S2>'   : 'EB_Charging_Program_Feb/GCM48 Power Up_Down'
 * '<S3>'   : 'EB_Charging_Program_Feb/raptor_xcp_def'
 * '<S4>'   : 'EB_Charging_Program_Feb/Foreground/Battery Charging'
 * '<S5>'   : 'EB_Charging_Program_Feb/Foreground/Battery Switch'
 * '<S6>'   : 'EB_Charging_Program_Feb/Foreground/Battery Charging/Max Voltage Cell Control'
 * '<S7>'   : 'EB_Charging_Program_Feb/Foreground/Battery Charging/Max Voltage Cell Control1'
 * '<S8>'   : 'EB_Charging_Program_Feb/Foreground/Battery Charging/Subsystem1'
 * '<S9>'   : 'EB_Charging_Program_Feb/Foreground/Battery Charging/Subsystem2'
 * '<S10>'  : 'EB_Charging_Program_Feb/Foreground/Battery Charging/Max Voltage Cell Control/If Action Subsystem'
 * '<S11>'  : 'EB_Charging_Program_Feb/Foreground/Battery Charging/Max Voltage Cell Control/If Action Subsystem1'
 * '<S12>'  : 'EB_Charging_Program_Feb/Foreground/Battery Charging/Max Voltage Cell Control1/If Action Subsystem'
 * '<S13>'  : 'EB_Charging_Program_Feb/Foreground/Battery Charging/Max Voltage Cell Control1/If Action Subsystem1'
 * '<S14>'  : 'EB_Charging_Program_Feb/Foreground/Battery Charging/Subsystem1/If Action Subsystem'
 * '<S15>'  : 'EB_Charging_Program_Feb/Foreground/Battery Charging/Subsystem1/If Action Subsystem1'
 * '<S16>'  : 'EB_Charging_Program_Feb/Foreground/Battery Charging/Subsystem1/If Action Subsystem2'
 * '<S17>'  : 'EB_Charging_Program_Feb/Foreground/Battery Charging/Subsystem2/If Action Subsystem'
 * '<S18>'  : 'EB_Charging_Program_Feb/Foreground/Battery Charging/Subsystem2/If Action Subsystem1'
 * '<S19>'  : 'EB_Charging_Program_Feb/Foreground/Battery Charging/Subsystem2/If Action Subsystem2'
 * '<S20>'  : 'EB_Charging_Program_Feb/Foreground/Battery Switch/If statement for on off switch2'
 * '<S21>'  : 'EB_Charging_Program_Feb/Foreground/Battery Switch/If statement for on off switch2/If Action Subsystem'
 * '<S22>'  : 'EB_Charging_Program_Feb/Foreground/Battery Switch/If statement for on off switch2/If Action Subsystem1'
 * '<S23>'  : 'EB_Charging_Program_Feb/GCM48 Power Up_Down/Background'
 * '<S24>'  : 'EB_Charging_Program_Feb/GCM48 Power Up_Down/Background/CntrSat2'
 * '<S25>'  : 'EB_Charging_Program_Feb/GCM48 Power Up_Down/Background/Raise Shutdown Event'
 * '<S26>'  : 'EB_Charging_Program_Feb/GCM48 Power Up_Down/Background/Raise Startup Event'
 * '<S27>'  : 'EB_Charging_Program_Feb/GCM48 Power Up_Down/Background/SR'
 * '<S28>'  : 'EB_Charging_Program_Feb/GCM48 Power Up_Down/Background/Store EEPROM'
 * '<S29>'  : 'EB_Charging_Program_Feb/GCM48 Power Up_Down/Background/Wake sources'
 * '<S30>'  : 'EB_Charging_Program_Feb/GCM48 Power Up_Down/Background/Raise Shutdown Event/raptor_shutdown'
 * '<S31>'  : 'EB_Charging_Program_Feb/GCM48 Power Up_Down/Background/Raise Startup Event/raptor_startup'
 * '<S32>'  : 'EB_Charging_Program_Feb/GCM48 Power Up_Down/Background/Store EEPROM/raptor_store_nv'
 * '<S33>'  : 'EB_Charging_Program_Feb/GCM48 Power Up_Down/Background/Wake sources/CntrSat'
 * '<S34>'  : 'EB_Charging_Program_Feb/GCM48 Power Up_Down/Background/Wake sources/CntrSat1'
 * '<S35>'  : 'EB_Charging_Program_Feb/GCM48 Power Up_Down/Background/Wake sources/Compare To Zero'
 * '<S36>'  : 'EB_Charging_Program_Feb/GCM48 Power Up_Down/Background/Wake sources/Compare To Zero1'
 * '<S37>'  : 'EB_Charging_Program_Feb/GCM48 Power Up_Down/Background/Wake sources/Debounce2'
 * '<S38>'  : 'EB_Charging_Program_Feb/GCM48 Power Up_Down/Background/Wake sources/Decode amd Ignore Some Wake Sources'
 * '<S39>'  : 'EB_Charging_Program_Feb/GCM48 Power Up_Down/Background/Wake sources/Dtc'
 * '<S40>'  : 'EB_Charging_Program_Feb/GCM48 Power Up_Down/Background/Wake sources/Dtc1'
 * '<S41>'  : 'EB_Charging_Program_Feb/GCM48 Power Up_Down/Background/Wake sources/Debounce2/Detect Change'
 * '<S42>'  : 'EB_Charging_Program_Feb/GCM48 Power Up_Down/Background/Wake sources/Debounce2/SetRst Init = 0'
 * '<S43>'  : 'EB_Charging_Program_Feb/GCM48 Power Up_Down/Background/Wake sources/Decode amd Ignore Some Wake Sources/Compare To Zero1'
 * '<S44>'  : 'EB_Charging_Program_Feb/GCM48 Power Up_Down/Background/Wake sources/Decode amd Ignore Some Wake Sources/Startup Wake Source'
 */
#endif                               /* RTW_HEADER_EB_Charging_Program_Feb_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
