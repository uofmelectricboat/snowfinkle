/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Lightning_McSeas_VCU.h
 *
 * Code generated for Simulink model 'Lightning_McSeas_VCU'.
 *
 * Model version                  : 6.44
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Mon May  2 19:02:32 2022
 *
 * Target selection: raptor.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Lightning_McSeas_VCU_h_
#define RTW_HEADER_Lightning_McSeas_VCU_h_
#include <string.h>
#ifndef Lightning_McSeas_VCU_COMMON_INCLUDES_
#define Lightning_McSeas_VCU_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "data.h"
#include "lin.h"
#include "sdk_io_dictionary.h"
#include "sdk_interface.h"
#include "xcp_protocol.h"
#include "LIN2_common.h"
#include "can_499__0015.h"
#include "can_500__0015.h"
#include "lin_501__0015.h"
#endif                               /* Lightning_McSeas_VCU_COMMON_INCLUDES_ */

#include "Lightning_McSeas_VCU_types.h"

/* Macros for accessing real-time model data structure */

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint32_T DelayInput1_DSTATE;         /* '<S28>/Delay Input1' */
  uint32_T UnitDelay1_DSTATE;          /* '<S22>/Unit Delay1' */
  uint32_T DelayInput1_DSTATE_j;       /* '<S27>/Delay Input1' */
  uint32_T UnitDelay1_DSTATE_m;        /* '<S21>/Unit Delay1' */
  uint32_T UnitDelay_DSTATE;           /* '<S25>/Unit Delay' */
  uint32_T UnitDelay1_DSTATE_a;        /* '<S12>/Unit Delay1' */
  uint32_T raptor_delta_time_DWORK1;   /* '<S25>/raptor_delta_time' */
  boolean_T UnitDelay2_DSTATE;         /* '<S22>/Unit Delay2' */
  boolean_T UnitDelay2_DSTATE_b;       /* '<S21>/Unit Delay2' */
  boolean_T DelayInput1_DSTATE_o;      /* '<S29>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_i;        /* '<S30>/Unit Delay' */
  boolean_T UnitDelay2_DSTATE_j;       /* '<S12>/Unit Delay2' */
  boolean_T UnitDelay_DSTATE_ik;       /* '<S15>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_a;        /* '<S11>/Unit Delay' */
  boolean_T UnitDelay1_DSTATE_o;       /* '<S11>/Unit Delay1' */
  boolean_T init1_DSTATE;              /* '<S26>/init = 1' */
} D_Work_Lightning_McSeas_VCU;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState StoreEEPROM_Trig_ZCE;     /* '<S11>/Store EEPROM' */
  ZCSigState RaiseStartupEvent_Trig_ZCE;/* '<S11>/Raise Startup Event' */
  ZCSigState RaiseShutdownEvent_Trig_ZCE;/* '<S11>/Raise Shutdown Event' */
} PrevZCSigStates_Lightning_McSeas_VCU;

/* Block states (default storage) */
extern D_Work_Lightning_McSeas_VCU Lightning_McSeas_VCU_DWork;

/* Zero-crossing (trigger) state */
extern PrevZCSigStates_Lightning_McSeas_VCU Lightning_McSeas_VCU_PrevZCSigState;

/* Model entry point functions */
extern void Lightning_McSeas_VCU_initialize(void);
extern void Lightning_McSeas_VCU_step(void);
extern void Lightning_McSeas_VCU_terminate(void);

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
 * '<Root>' : 'Lightning_McSeas_VCU'
 * '<S1>'   : 'Lightning_McSeas_VCU/Foreground'
 * '<S2>'   : 'Lightning_McSeas_VCU/GCM48 Power Up_Down'
 * '<S3>'   : 'Lightning_McSeas_VCU/raptor_xcp_def'
 * '<S4>'   : 'Lightning_McSeas_VCU/Foreground/Analog'
 * '<S5>'   : 'Lightning_McSeas_VCU/Foreground/CAN'
 * '<S6>'   : 'Lightning_McSeas_VCU/Foreground/Digial'
 * '<S7>'   : 'Lightning_McSeas_VCU/Foreground/Analog/Ultasonic'
 * '<S8>'   : 'Lightning_McSeas_VCU/Foreground/CAN/RC Rx'
 * '<S9>'   : 'Lightning_McSeas_VCU/Foreground/CAN/RC Rx/Actuators'
 * '<S10>'  : 'Lightning_McSeas_VCU/Foreground/Digial/WaterDetection'
 * '<S11>'  : 'Lightning_McSeas_VCU/GCM48 Power Up_Down/Background'
 * '<S12>'  : 'Lightning_McSeas_VCU/GCM48 Power Up_Down/Background/CntrSat2'
 * '<S13>'  : 'Lightning_McSeas_VCU/GCM48 Power Up_Down/Background/Raise Shutdown Event'
 * '<S14>'  : 'Lightning_McSeas_VCU/GCM48 Power Up_Down/Background/Raise Startup Event'
 * '<S15>'  : 'Lightning_McSeas_VCU/GCM48 Power Up_Down/Background/SR'
 * '<S16>'  : 'Lightning_McSeas_VCU/GCM48 Power Up_Down/Background/Store EEPROM'
 * '<S17>'  : 'Lightning_McSeas_VCU/GCM48 Power Up_Down/Background/Wake sources'
 * '<S18>'  : 'Lightning_McSeas_VCU/GCM48 Power Up_Down/Background/Raise Shutdown Event/raptor_shutdown'
 * '<S19>'  : 'Lightning_McSeas_VCU/GCM48 Power Up_Down/Background/Raise Startup Event/raptor_startup'
 * '<S20>'  : 'Lightning_McSeas_VCU/GCM48 Power Up_Down/Background/Store EEPROM/raptor_store_nv'
 * '<S21>'  : 'Lightning_McSeas_VCU/GCM48 Power Up_Down/Background/Wake sources/CntrSat'
 * '<S22>'  : 'Lightning_McSeas_VCU/GCM48 Power Up_Down/Background/Wake sources/CntrSat1'
 * '<S23>'  : 'Lightning_McSeas_VCU/GCM48 Power Up_Down/Background/Wake sources/Compare To Zero'
 * '<S24>'  : 'Lightning_McSeas_VCU/GCM48 Power Up_Down/Background/Wake sources/Compare To Zero1'
 * '<S25>'  : 'Lightning_McSeas_VCU/GCM48 Power Up_Down/Background/Wake sources/Debounce2'
 * '<S26>'  : 'Lightning_McSeas_VCU/GCM48 Power Up_Down/Background/Wake sources/Decode amd Ignore Some Wake Sources'
 * '<S27>'  : 'Lightning_McSeas_VCU/GCM48 Power Up_Down/Background/Wake sources/Dtc'
 * '<S28>'  : 'Lightning_McSeas_VCU/GCM48 Power Up_Down/Background/Wake sources/Dtc1'
 * '<S29>'  : 'Lightning_McSeas_VCU/GCM48 Power Up_Down/Background/Wake sources/Debounce2/Detect Change'
 * '<S30>'  : 'Lightning_McSeas_VCU/GCM48 Power Up_Down/Background/Wake sources/Debounce2/SetRst Init = 0'
 * '<S31>'  : 'Lightning_McSeas_VCU/GCM48 Power Up_Down/Background/Wake sources/Decode amd Ignore Some Wake Sources/Compare To Zero1'
 * '<S32>'  : 'Lightning_McSeas_VCU/GCM48 Power Up_Down/Background/Wake sources/Decode amd Ignore Some Wake Sources/Startup Wake Source'
 */
#endif                                 /* RTW_HEADER_Lightning_McSeas_VCU_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
