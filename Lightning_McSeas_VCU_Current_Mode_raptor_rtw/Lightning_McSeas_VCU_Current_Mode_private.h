/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Lightning_McSeas_VCU_Current_Mode_private.h
 *
 * Code generated for Simulink model 'Lightning_McSeas_VCU_Current_Mode'.
 *
 * Model version                  : 6.169
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Sun Nov  6 18:28:18 2022
 *
 * Target selection: raptor.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Lightning_McSeas_VCU_Current_Mode_private_h_
#define RTW_HEADER_Lightning_McSeas_VCU_Current_Mode_private_h_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "Lightning_McSeas_VCU_Current_Mode.h"
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

extern void Timer_ooqlV(void);
extern void Timer_BGND_9AY_V(void);
extern void Timed_Trigger_XCP(void);
extern void RxTrig_XCP_BC_CAN1(void);
extern void RxTrig_XCP_CMD_CAN1(void);
extern void CAN1_XCP_CAN_PreStart(uint32_T, uint32_T, uint32_T);
extern void Lightning_McSeas_VCU_Current_Mode_Background_Init(void);
extern void Lightning_McSeas_VCU_Current_Mode_Background_Reset(void);
extern void Lightning_McSeas_VCU_Current_Mode_Background(void);
extern void Lightning_McSeas_VCU_Current_Mode_Foreground_Init(void);
extern void Lightning_McSeas_VCU_Current_Mode_Foreground_Enable(void);
extern void Lightning_McSeas_VCU_Current_Mode_Foreground_Disable(void);
extern void Lightning_McSeas_VCU_Current_Mode_Foreground(void);

#endif             /* RTW_HEADER_Lightning_McSeas_VCU_Current_Mode_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
