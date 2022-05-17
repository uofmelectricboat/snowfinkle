/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Lightning_McSeas_VCU.c
 *
 * Code generated for Simulink model 'Lightning_McSeas_VCU'.
 *
 * Model version                  : 6.87
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Mon May 16 18:10:45 2022
 *
 * Target selection: raptor.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Lightning_McSeas_VCU.h"
#include "Lightning_McSeas_VCU_private.h"

/* Block signals (default storage) */
BlockIO_Lightning_McSeas_VCU Lightning_McSeas_VCU_B;

/* Block states (default storage) */
D_Work_Lightning_McSeas_VCU Lightning_McSeas_VCU_DWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates_Lightning_McSeas_VCU Lightning_McSeas_VCU_PrevZCSigState;

/* System initialize for function-call system: '<S2>/Background' */
void Lightning_McSeas_VCU_Background_Init(void)
{
  /* Start for S-Function (raptor_sfun_analog_in): '<S17>/raptor_analog_in1' */

  /* S-Function Block: WAKE_INPUT1 */
  {
  }

  /* Start for S-Function (raptor_sfun_digital_out): '<S11>/raptor_digital_out' */

  /* S-Function Block: POWER_HOLD */
  {
  }

  /* Start for S-Function (raptor_sfun_internal_measurement): '<S26>/raptor_internal_measurement' */

  /* S-Function Block: WAKE_SOURCE */
  {
  }

  /* InitializeConditions for S-Function (raptor_sfun_delta_time): '<S25>/raptor_delta_time' */
  Lightning_McSeas_VCU_DWork.raptor_delta_time_DWORK1 = ticks();

  /* InitializeConditions for UnitDelay: '<S25>/Unit Delay' */
  Lightning_McSeas_VCU_DWork.UnitDelay_DSTATE = 1U;

  /* InitializeConditions for UnitDelay: '<S26>/init = 1' */
  Lightning_McSeas_VCU_DWork.init1_DSTATE = true;
  Lightning_McSeas_VCU_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE = POS_ZCSIG;

  /* End of SystemInitialize for SubSystem: '<S11>/Raise Shutdown Event' */
  Lightning_McSeas_VCU_PrevZCSigState.RaiseStartupEvent_Trig_ZCE = ZERO_ZCSIG;

  /* End of SystemInitialize for SubSystem: '<S11>/Raise Startup Event' */
}

/* System reset for function-call system: '<S2>/Background' */
void Lightning_McSeas_VCU_Background_Reset(void)
{
  /* InitializeConditions for S-Function (raptor_sfun_delta_time): '<S25>/raptor_delta_time' */
  Lightning_McSeas_VCU_DWork.raptor_delta_time_DWORK1 = ticks();

  /* InitializeConditions for UnitDelay: '<S25>/Unit Delay' */
  Lightning_McSeas_VCU_DWork.UnitDelay_DSTATE = 1U;

  /* InitializeConditions for UnitDelay: '<S26>/init = 1' */
  Lightning_McSeas_VCU_DWork.init1_DSTATE = true;

  /* SystemReset for Triggered SubSystem: '<S11>/Raise Shutdown Event' */
  Lightning_McSeas_VCU_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE = POS_ZCSIG;

  /* End of SystemReset for SubSystem: '<S11>/Raise Shutdown Event' */

  /* SystemReset for Triggered SubSystem: '<S11>/Raise Startup Event' */
  Lightning_McSeas_VCU_PrevZCSigState.RaiseStartupEvent_Trig_ZCE = ZERO_ZCSIG;

  /* End of SystemReset for SubSystem: '<S11>/Raise Startup Event' */
}

/* Output and update for function-call system: '<S2>/Background' */
void Lightning_McSeas_VCU_Background(void)
{
  /* local block i/o variables */
  uint32_T rtb_raptor_lin_state_o2;
  uint32_T rtb_raptor_lin_state_o3;
  uint32_T rtb_raptor_can_state1_o2;
  uint32_T rtb_raptor_can_state1_o3;
  uint32_T rtb_raptor_delta_time;
  uint16_T rtb_raptor_analog_in1;
  uint16_T rtb_raptor_internal_measurement;
  int16_T rtb_raptor_lin_state_o1;
  int16_T rtb_raptor_can_state1_o1;
  boolean_T rtb_raptor_sfun_nv_status;
  uint32_T rtb_MultiportSwitch1;
  uint32_T rtb_MultiportSwitch1_a;
  uint32_T rtb_MultiportSwitch1_b;
  uint32_T rtb_MultiportSwitch1_p;
  uint16_T rtb_Add1;
  uint16_T rtb_BitwiseAND;
  boolean_T rtb_Compare_n;
  boolean_T rtb_KeepOnrequestiscurrentlytrue;
  boolean_T rtb_LogicalOperator2_e;
  boolean_T rtb_LogicalOperator3_m;
  boolean_T rtb_MultiportSwitch_d;
  boolean_T rtb_MultiportSwitch_ko;
  boolean_T rtb_RelationalOperator;
  boolean_T rtb_RelationalOperator1;
  boolean_T rtb_RelationalOperator_i;
  boolean_T rtb_UnitDelay_l;

  /* S-Function (raptor_sfun_lin_state): '<S17>/raptor_lin_state' */
  /* S-Function Block: <S17>/raptor_lin_state */
  {
    rtb_raptor_lin_state_o1 = LIN2_GetStatus(LIN2_LIN2_NODE, (uint32_t *)
      &rtb_raptor_lin_state_o3, (uint32_t *)&rtb_raptor_lin_state_o2);
  }

  /* RelationalOperator: '<S28>/Relational Operator' incorporates:
   *  UnitDelay: '<S28>/Delay Input1'
   */
  rtb_RelationalOperator = (rtb_raptor_lin_state_o2 ==
    Lightning_McSeas_VCU_DWork.DelayInput1_DSTATE);

  /* Logic: '<S17>/Logical Operator3' */
  rtb_Compare_n = !rtb_RelationalOperator;

  /* MultiPortSwitch: '<S22>/Multiport Switch1' incorporates:
   *  Constant: '<S22>/Constant1'
   */
  if (!rtb_Compare_n) {
    /* MultiPortSwitch: '<S22>/Multiport Switch' incorporates:
     *  Constant: '<S22>/Constant'
     *  Logic: '<S22>/Logical Operator1'
     *  Sum: '<S22>/Add'
     *  UnitDelay: '<S22>/Unit Delay1'
     *  UnitDelay: '<S22>/Unit Delay2'
     */
    if (Lightning_McSeas_VCU_DWork.UnitDelay2_DSTATE || (!rtb_RelationalOperator))
    {
      rtb_MultiportSwitch1 = Lightning_McSeas_VCU_DWork.UnitDelay1_DSTATE;
    } else {
      rtb_MultiportSwitch1 = Lightning_McSeas_VCU_DWork.UnitDelay1_DSTATE + 1U;
    }

    /* End of MultiPortSwitch: '<S22>/Multiport Switch' */
  } else {
    rtb_MultiportSwitch1 = 0U;
  }

  /* End of MultiPortSwitch: '<S22>/Multiport Switch1' */
  /* Logic: '<S22>/Logical Operator3' incorporates:
   *  Logic: '<S22>/Logical Operator4'
   *  RelationalOperator: '<S22>/Relational Operator'
   *  S-Function (raptor_sfun_adjustment): '<S22>/raptor_adjustment'
   */
  rtb_RelationalOperator = ((rtb_MultiportSwitch1 >=
    (Wake_LIN2_SleepDelayTime_Data())) && (!rtb_Compare_n));

  /* S-Function (raptor_sfun_can_state): '<S17>/raptor_can_state1' */
  /* S-Function Block: <S17>/raptor_can_state1 */
  UNUSED_VAR(rtb_raptor_can_state1_o1);
  get_CAN_bus_state(CAN2, (uint32_t*)&rtb_raptor_can_state1_o2, (uint32_t*)
                    &rtb_raptor_can_state1_o3);

  /* Logic: '<S17>/Logical Operator' incorporates:
   *  Logic: '<S21>/Logical Operator1'
   *  MultiPortSwitch: '<S21>/Multiport Switch1'
   *  RelationalOperator: '<S27>/Relational Operator'
   *  UnitDelay: '<S27>/Delay Input1'
   */
  rtb_Compare_n = (rtb_raptor_can_state1_o2 !=
                   Lightning_McSeas_VCU_DWork.DelayInput1_DSTATE_j);

  /* MultiPortSwitch: '<S21>/Multiport Switch1' incorporates:
   *  Constant: '<S21>/Constant1'
   */
  if (!rtb_Compare_n) {
    /* MultiPortSwitch: '<S21>/Multiport Switch' incorporates:
     *  Constant: '<S21>/Constant'
     *  Logic: '<S21>/Logical Operator1'
     *  Sum: '<S21>/Add'
     *  UnitDelay: '<S21>/Unit Delay1'
     *  UnitDelay: '<S21>/Unit Delay2'
     */
    if (Lightning_McSeas_VCU_DWork.UnitDelay2_DSTATE_b || rtb_Compare_n) {
      rtb_MultiportSwitch1_a = Lightning_McSeas_VCU_DWork.UnitDelay1_DSTATE_m;
    } else {
      rtb_MultiportSwitch1_a = Lightning_McSeas_VCU_DWork.UnitDelay1_DSTATE_m +
        1U;
    }

    /* End of MultiPortSwitch: '<S21>/Multiport Switch' */
  } else {
    rtb_MultiportSwitch1_a = 0U;
  }

  /* Logic: '<S21>/Logical Operator3' incorporates:
   *  Logic: '<S21>/Logical Operator4'
   *  RelationalOperator: '<S21>/Relational Operator'
   *  S-Function (raptor_sfun_adjustment): '<S21>/raptor_adjustment'
   */
  rtb_RelationalOperator_i = ((rtb_MultiportSwitch1_a >=
    (Wake_CAN2_SleepDelayTime_Data())) && (!rtb_Compare_n));

  /* S-Function (raptor_sfun_analog_in): '<S17>/raptor_analog_in1' */
  /* S-Function Block: WAKE_INPUT1 */
  {
    rtb_raptor_analog_in1 = ADC_Read_Chan(KEYSW);
  }

  /* RelationalOperator: '<S17>/Relational Operator1' incorporates:
   *  S-Function (raptor_sfun_adjustment): '<S17>/raptor_adjustment1'
   */
  rtb_RelationalOperator1 = (rtb_raptor_analog_in1 > ((uint16_T)
    (WAKE_INPUT1_Threshold_Data())));

  /* S-Function (raptor_sfun_delta_time): '<S25>/raptor_delta_time' */
  {
    rtb_raptor_delta_time = GetDeltaTime_ms((uint32_t*)
      &Lightning_McSeas_VCU_DWork.raptor_delta_time_DWORK1);
  }

  /* MultiPortSwitch: '<S25>/Multiport Switch1' incorporates:
   *  Constant: '<S25>/Constant'
   *  RelationalOperator: '<S29>/FixPt Relational Operator'
   *  Sum: '<S25>/Add'
   *  UnitDelay: '<S25>/Unit Delay'
   *  UnitDelay: '<S29>/Delay Input1'
   */
  if (rtb_RelationalOperator1 == Lightning_McSeas_VCU_DWork.DelayInput1_DSTATE_o)
  {
    rtb_MultiportSwitch1_b = rtb_raptor_delta_time +
      Lightning_McSeas_VCU_DWork.UnitDelay_DSTATE;
  } else {
    rtb_MultiportSwitch1_b = 0U;
  }

  /* End of MultiPortSwitch: '<S25>/Multiport Switch1' */
  /* MultiPortSwitch: '<S30>/Multiport Switch' incorporates:
   *  Constant: '<S30>/Constant'
   *  Logic: '<S25>/Logical Operator2'
   *  Logic: '<S25>/Logical Operator3'
   *  RelationalOperator: '<S25>/Relational Operator1'
   *  S-Function (raptor_sfun_adjustment): '<S25>/raptor_adjustment4'
   */
  if (rtb_RelationalOperator1 || (rtb_MultiportSwitch1_b < (KeySwLoTimeThr_Data())))
  {
    /* MultiPortSwitch: '<S30>/Multiport Switch1' incorporates:
     *  Constant: '<S30>/Constant1'
     *  UnitDelay: '<S30>/Unit Delay'
     */
    if (!rtb_RelationalOperator1) {
      rtb_MultiportSwitch_d = Lightning_McSeas_VCU_DWork.UnitDelay_DSTATE_i;
    } else {
      rtb_MultiportSwitch_d = true;
    }

    /* End of MultiPortSwitch: '<S30>/Multiport Switch1' */
  } else {
    rtb_MultiportSwitch_d = false;
  }

  /* End of MultiPortSwitch: '<S30>/Multiport Switch' */

  /* Sum: '<S26>/Add1' incorporates:
   *  Constant: '<S23>/Constant'
   *  Constant: '<S24>/Constant'
   *  Gain: '<S26>/Gain12'
   *  Gain: '<S26>/Gain6'
   *  Gain: '<S26>/Gain8'
   *  Logic: '<S17>/Logical Operator1'
   *  Logic: '<S17>/Logical Operator2'
   *  Logic: '<S17>/Logical Operator4'
   *  Logic: '<S17>/Logical Operator5'
   *  RelationalOperator: '<S23>/Compare'
   *  RelationalOperator: '<S24>/Compare'
   */
  rtb_Add1 = (uint16_T)(((uint32_T)(((rtb_raptor_lin_state_o2 > 0U) &&
    (!rtb_RelationalOperator)) << 2) + (((rtb_raptor_can_state1_o2 > 0U) &&
    (!rtb_RelationalOperator_i)) << 1)) + rtb_MultiportSwitch_d);

  /* S-Function (raptor_sfun_internal_measurement): '<S26>/raptor_internal_measurement' incorporates:
   *  Gain: '<S26>/Gain4'
   *  Gain: '<S26>/Gain5'
   *  S-Function (raptor_sfun_adjustment): '<S26>/raptor_adjustment'
   *  S-Function (raptor_sfun_adjustment): '<S26>/raptor_adjustment1'
   *  S-Function (raptor_sfun_adjustment): '<S26>/raptor_adjustment2'
   *  Sum: '<S26>/Add'
   */
  rtb_raptor_internal_measurement = (uint16_T)(((uint32_T)
    ((GCM48Wake_LIN2_cal_Data()) << 2) + ((GCM48Wake_CAN2_cal_Data()) << 1)) +
    (GCM48Wake_INPUT1_cal_Data()));

  /* S-Function (sfix_bitop): '<S26>/Bitwise AND' */
  rtb_BitwiseAND = (uint16_T)(rtb_Add1 & rtb_raptor_internal_measurement);

  /* RelationalOperator: '<S31>/Compare' incorporates:
   *  Constant: '<S31>/Constant'
   */
  rtb_Compare_n = (rtb_BitwiseAND > 0);

  /* Logic: '<S11>/Logical Operator1' incorporates:
   *  S-Function (raptor_sfun_data_read): '<S11>/raptor_data_read1'
   */
  rtb_KeepOnrequestiscurrentlytrue = (rtb_Compare_n || KeepModuleOn_Data());

  /* MultiPortSwitch: '<S12>/Multiport Switch1' incorporates:
   *  Constant: '<S12>/Constant1'
   */
  if (!rtb_KeepOnrequestiscurrentlytrue) {
    /* MultiPortSwitch: '<S12>/Multiport Switch' incorporates:
     *  Constant: '<S12>/Constant'
     *  Sum: '<S12>/Add'
     *  UnitDelay: '<S12>/Unit Delay1'
     *  UnitDelay: '<S12>/Unit Delay2'
     */
    if (Lightning_McSeas_VCU_DWork.UnitDelay2_DSTATE_j) {
      rtb_MultiportSwitch1_p = Lightning_McSeas_VCU_DWork.UnitDelay1_DSTATE_a;
    } else {
      rtb_MultiportSwitch1_p = Lightning_McSeas_VCU_DWork.UnitDelay1_DSTATE_a +
        1U;
    }

    /* End of MultiPortSwitch: '<S12>/Multiport Switch' */
  } else {
    rtb_MultiportSwitch1_p = 0U;
  }

  /* End of MultiPortSwitch: '<S12>/Multiport Switch1' */
  /* Logic: '<S12>/Logical Operator3' incorporates:
   *  Logic: '<S12>/Logical Operator4'
   *  RelationalOperator: '<S12>/Relational Operator'
   *  S-Function (raptor_sfun_adjustment): '<S12>/raptor_adjustment'
   */
  rtb_LogicalOperator3_m = ((rtb_MultiportSwitch1_p >=
    (Wake_DlyStopOfFgndTaskTime_Data())) && (!rtb_KeepOnrequestiscurrentlytrue));

  /* MultiPortSwitch: '<S15>/Multiport Switch' incorporates:
   *  Constant: '<S15>/Constant'
   */
  if (!rtb_LogicalOperator3_m) {
    /* MultiPortSwitch: '<S15>/Multiport Switch1' incorporates:
     *  Constant: '<S15>/Constant1'
     *  UnitDelay: '<S15>/Unit Delay'
     */
    if (!rtb_KeepOnrequestiscurrentlytrue) {
      rtb_MultiportSwitch_ko = Lightning_McSeas_VCU_DWork.UnitDelay_DSTATE_ik;
    } else {
      rtb_MultiportSwitch_ko = true;
    }

    /* End of MultiPortSwitch: '<S15>/Multiport Switch1' */
  } else {
    rtb_MultiportSwitch_ko = false;
  }

  /* End of MultiPortSwitch: '<S15>/Multiport Switch' */

  /* Logic: '<S11>/Logical Operator4' */
  rtb_KeepOnrequestiscurrentlytrue = (rtb_KeepOnrequestiscurrentlytrue ||
    rtb_MultiportSwitch_ko);

  /* Outputs for Triggered SubSystem: '<S11>/Raise Shutdown Event' incorporates:
   *  TriggerPort: '<S13>/init state = 1 to trigger at wakeup if awoken by a wake source  that we want to ignore'
   */
  if ((!rtb_KeepOnrequestiscurrentlytrue) &&
      (Lightning_McSeas_VCU_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE !=
       ZERO_ZCSIG)) {
    /* S-Function (raptor_sfun_data_write): '<S13>/raptor_data_write' incorporates:
     *  Constant: '<S13>/Constant'
     */
    FgndTasksStopped_Data() = true;

    /* S-Function (fcgen): '<S13>/Function-Call Generator' incorporates:
     *  SubSystem: '<S13>/raptor_shutdown'
     */
    /* S-Function (raptor_sfun_shutdown): '<S18>/raptor_data_write' */
    /* S-Function Block */
    {
      extern void App_Shutdown(void);
      App_Shutdown();
    }

    /* End of Outputs for S-Function (fcgen): '<S13>/Function-Call Generator' */
  }

  Lightning_McSeas_VCU_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE =
    rtb_KeepOnrequestiscurrentlytrue;

  /* End of Outputs for SubSystem: '<S11>/Raise Shutdown Event' */

  /* Outputs for Triggered SubSystem: '<S11>/Raise Startup Event' incorporates:
   *  TriggerPort: '<S14>/init state zero so it triggers at wake if wake request is true'
   */
  if (rtb_KeepOnrequestiscurrentlytrue &&
      (Lightning_McSeas_VCU_PrevZCSigState.RaiseStartupEvent_Trig_ZCE !=
       POS_ZCSIG)) {
    /* S-Function (raptor_sfun_measurement): '<S14>/raptor_measurement1' incorporates:
     *  Constant: '<S14>/Constant'
     */
    Wake_Debug_StartupEventRaised_Data() = true;

    /* S-Function (raptor_sfun_data_write): '<S14>/raptor_data_write' incorporates:
     *  Constant: '<S14>/Constant1'
     */
    FgndTasksStopped_Data() = false;

    /* S-Function (fcgen): '<S14>/Function-Call Generator' incorporates:
     *  SubSystem: '<S14>/raptor_startup'
     */
    /* S-Function (raptor_sfun_startup): '<S19>/raptor_data_write' */
    /* S-Function Block */
    {
      extern void App_Startup(void);
      App_Startup();
    }

    /* End of Outputs for S-Function (fcgen): '<S14>/Function-Call Generator' */
  }

  /* Outputs for Triggered SubSystem: '<S11>/Raise Shutdown Event' incorporates:
   *  TriggerPort: '<S13>/init state = 1 to trigger at wakeup if awoken by a wake source  that we want to ignore'
   */
  Lightning_McSeas_VCU_PrevZCSigState.RaiseStartupEvent_Trig_ZCE =
    rtb_KeepOnrequestiscurrentlytrue;

  /* End of Outputs for SubSystem: '<S11>/Raise Shutdown Event' */
  /* End of Outputs for SubSystem: '<S11>/Raise Startup Event' */

  /* UnitDelay: '<S11>/Unit Delay' */
  rtb_UnitDelay_l = Lightning_McSeas_VCU_DWork.UnitDelay_DSTATE_a;

  /* Outputs for Triggered SubSystem: '<S11>/Store EEPROM' incorporates:
   *  TriggerPort: '<S16>/Trigger'
   */
  if ((!Lightning_McSeas_VCU_DWork.UnitDelay_DSTATE_a) &&
      (Lightning_McSeas_VCU_PrevZCSigState.StoreEEPROM_Trig_ZCE != ZERO_ZCSIG))
  {
    /* S-Function (fcgen): '<S16>/Function-Call Generator' incorporates:
     *  SubSystem: '<S16>/raptor_store_nv'
     */
    /* S-Function (raptor_sfun_store_nv): '<S20>/raptor_data_write' */
    /* S-Function Block */
    {
      App_EE_Store();
    }

    /* End of Outputs for S-Function (fcgen): '<S16>/Function-Call Generator' */
  }

  /* End of UnitDelay: '<S11>/Unit Delay' */
  Lightning_McSeas_VCU_PrevZCSigState.StoreEEPROM_Trig_ZCE = rtb_UnitDelay_l;

  /* End of Outputs for SubSystem: '<S11>/Store EEPROM' */

  /* S-Function (raptor_sfun_nv_status): '<S11>/raptor_sfun_nv_status' */
  /* S-Function Block */
  {
    rtb_raptor_sfun_nv_status = (EEPROM_State_Data() == EE_STORE_IN_PROGESS);
  }

  /* Logic: '<S11>/Logical Operator2' incorporates:
   *  UnitDelay: '<S11>/Unit Delay1'
   */
  rtb_LogicalOperator2_e = (rtb_raptor_sfun_nv_status ||
    rtb_KeepOnrequestiscurrentlytrue ||
    Lightning_McSeas_VCU_DWork.UnitDelay1_DSTATE_o);

  /* S-Function (raptor_sfun_digital_out): '<S11>/raptor_digital_out' */
  /* S-Function Block: POWER_HOLD */
  {
    {
      static uint8_T rtb_LogicalOperator2_e_prev = 0U;
      if (rtb_LogicalOperator2_e == 0U && rtb_LogicalOperator2_e_prev == 1U) {
        extern void Module_Shutdown(boolean_t shutdownPower);
        Module_Shutdown(1);
      }

      rtb_LogicalOperator2_e_prev = rtb_LogicalOperator2_e;
    }
  }

  /* S-Function (raptor_sfun_measurement): '<S12>/raptor_measurement' */
  Wake_DlyStopOfFgndTaskTTmr_Data() = rtb_MultiportSwitch1_p;

  /* S-Function (raptor_sfun_data_write): '<S17>/raptor_data_write1' */
  KeySw_Bgnd_Data() = rtb_MultiportSwitch_d;

  /* S-Function (raptor_sfun_measurement): '<S17>/raptor_measurement1' */
  Wake_INPUT1_Vlts_Data() = rtb_raptor_analog_in1;

  /* S-Function (raptor_sfun_measurement): '<S17>/raptor_measurement2' */
  Wake_LIN2_RxCount_Data() = rtb_raptor_lin_state_o2;

  /* S-Function (raptor_sfun_measurement): '<S17>/raptor_measurement5' */
  Wake_CAN2_RxCount_Data() = rtb_raptor_can_state1_o2;

  /* S-Function (raptor_sfun_measurement): '<S21>/raptor_measurement' */
  Wake_CAN2_SleepDelayTTmr_Data() = rtb_MultiportSwitch1_a;

  /* S-Function (raptor_sfun_measurement): '<S22>/raptor_measurement' */
  Wake_LIN2_SleepDelayTTmr_Data() = rtb_MultiportSwitch1;

  /* S-Function (raptor_sfun_measurement): '<S25>/raptor_measurement3' */
  dt_read_Data() = rtb_raptor_delta_time;

  /* Outputs for Enabled SubSystem: '<S26>/Startup Wake Source' incorporates:
   *  EnablePort: '<S32>/Enable'
   */
  /* UnitDelay: '<S26>/init = 1' */
  if (Lightning_McSeas_VCU_DWork.init1_DSTATE) {
    /* S-Function (raptor_sfun_measurement): '<S32>/raptor_measurement' */
    WakeSource_Startup_Data() = rtb_BitwiseAND;
  }

  /* End of UnitDelay: '<S26>/init = 1' */
  /* End of Outputs for SubSystem: '<S26>/Startup Wake Source' */

  /* S-Function (raptor_sfun_data_write): '<S26>/raptor_data_write1' */
  Wake_AnyWakeSourceActive_Data() = rtb_Compare_n;

  /* S-Function (raptor_sfun_data_write): '<S26>/raptor_data_write2' */
  Wake_SourceBitAndWakeConfigRegister_Data() = rtb_BitwiseAND;

  /* S-Function (raptor_sfun_data_write): '<S26>/raptor_data_write3' */
  WakeSource_Current_Data() = rtb_Add1;

  /* S-Function (raptor_sfun_measurement): '<S26>/raptor_measurement2' */
  WakeConfigRegister_Data() = rtb_raptor_internal_measurement;

  /* S-Function (raptor_sfun_internal_measurement): '<S26>/raptor_internal_measurement' */
  /* S-Function Block: WAKE_SOURCE */
  {
    extern uint8_t Get_Wake_Source( void );
    rtb_raptor_internal_measurement = Get_Wake_Source();
  }

  /* S-Function (raptor_sfun_measurement): '<S26>/raptor_measurement' */
  WakeSource_RaptorIntrnlMeas_Data() = rtb_raptor_internal_measurement;

  /* Update for UnitDelay: '<S28>/Delay Input1' */
  Lightning_McSeas_VCU_DWork.DelayInput1_DSTATE = rtb_raptor_lin_state_o2;

  /* Update for UnitDelay: '<S22>/Unit Delay2' */
  Lightning_McSeas_VCU_DWork.UnitDelay2_DSTATE = rtb_RelationalOperator;

  /* Update for UnitDelay: '<S22>/Unit Delay1' */
  Lightning_McSeas_VCU_DWork.UnitDelay1_DSTATE = rtb_MultiportSwitch1;

  /* Update for UnitDelay: '<S27>/Delay Input1' */
  Lightning_McSeas_VCU_DWork.DelayInput1_DSTATE_j = rtb_raptor_can_state1_o2;

  /* Update for UnitDelay: '<S21>/Unit Delay2' */
  Lightning_McSeas_VCU_DWork.UnitDelay2_DSTATE_b = rtb_RelationalOperator_i;

  /* Update for UnitDelay: '<S21>/Unit Delay1' */
  Lightning_McSeas_VCU_DWork.UnitDelay1_DSTATE_m = rtb_MultiportSwitch1_a;

  /* Update for UnitDelay: '<S29>/Delay Input1' */
  Lightning_McSeas_VCU_DWork.DelayInput1_DSTATE_o = rtb_RelationalOperator1;

  /* Update for UnitDelay: '<S25>/Unit Delay' */
  Lightning_McSeas_VCU_DWork.UnitDelay_DSTATE = rtb_MultiportSwitch1_b;

  /* Update for UnitDelay: '<S30>/Unit Delay' */
  Lightning_McSeas_VCU_DWork.UnitDelay_DSTATE_i = rtb_MultiportSwitch_d;

  /* Update for UnitDelay: '<S12>/Unit Delay2' */
  Lightning_McSeas_VCU_DWork.UnitDelay2_DSTATE_j = rtb_LogicalOperator3_m;

  /* Update for UnitDelay: '<S12>/Unit Delay1' */
  Lightning_McSeas_VCU_DWork.UnitDelay1_DSTATE_a = rtb_MultiportSwitch1_p;

  /* Update for UnitDelay: '<S15>/Unit Delay' */
  Lightning_McSeas_VCU_DWork.UnitDelay_DSTATE_ik = rtb_MultiportSwitch_ko;

  /* Update for UnitDelay: '<S11>/Unit Delay' */
  Lightning_McSeas_VCU_DWork.UnitDelay_DSTATE_a =
    rtb_KeepOnrequestiscurrentlytrue;

  /* Update for UnitDelay: '<S11>/Unit Delay1' */
  Lightning_McSeas_VCU_DWork.UnitDelay1_DSTATE_o = rtb_UnitDelay_l;

  /* Update for UnitDelay: '<S26>/init = 1' incorporates:
   *  Constant: '<S26>/Constant'
   */
  Lightning_McSeas_VCU_DWork.init1_DSTATE = false;
}

/* Enable for function-call system: '<Root>/Foreground' */
void Lightning_McSeas_VCU_Foreground_Enable(void)
{
  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S6>/raptor_can_txmsg2' */
  /* Level2 S-Function Block: '<S6>/raptor_can_txmsg2' (raptor_sfun_can_txmsg) */
  can_set_period_80__0012(0U);

  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S6>/raptor_can_txmsg3' */
  /* Level2 S-Function Block: '<S6>/raptor_can_txmsg3' (raptor_sfun_can_txmsg) */
  can_set_period_81__0012(0U);

  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S6>/raptor_can_txmsg1' */
  /* Level2 S-Function Block: '<S6>/raptor_can_txmsg1' (raptor_sfun_can_txmsg) */
  can_set_period_79__0012(0U);

  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S6>/raptor_can_txmsg' */
  /* Level2 S-Function Block: '<S6>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_78__0012(0U);
}

/* Disable for function-call system: '<Root>/Foreground' */
void Lightning_McSeas_VCU_Foreground_Disable(void)
{
  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S6>/raptor_can_txmsg2' */
  /* Level2 S-Function Block: '<S6>/raptor_can_txmsg2' (raptor_sfun_can_txmsg) */
  can_set_period_80__0012(0);

  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S6>/raptor_can_txmsg3' */
  /* Level2 S-Function Block: '<S6>/raptor_can_txmsg3' (raptor_sfun_can_txmsg) */
  can_set_period_81__0012(0);

  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S6>/raptor_can_txmsg1' */
  /* Level2 S-Function Block: '<S6>/raptor_can_txmsg1' (raptor_sfun_can_txmsg) */
  can_set_period_79__0012(0);

  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S6>/raptor_can_txmsg' */
  /* Level2 S-Function Block: '<S6>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_78__0012(0);
}

/* Output and update for function-call system: '<Root>/Foreground' */
void Lightning_McSeas_VCU_Foreground(void)
{
  /* local block i/o variables */
  real_T rtb_raptor_can_rxmsg_o5;
  real_T rtb_raptor_can_rxmsg_o2;
  real_T rtb_raptor_can_rxmsg_o3;
  real_T rtb_Gain2;
  uint16_T rtb_raptor_can_rxmsg1_o1;
  uint16_T rtb_raptor_can_rxmsg_o1;
  real_T rtb_Gain1;

  /* S-Function (raptor_sfun_can_rxmsg): '<S5>/raptor_can_rxmsg1' */

  /* S-Function Block:<S5>/raptor_can_rxmsg1 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    /* Signal: Channel_5 not connected */
    uint32_T temp;
    can_get_292__0012(&rtb_raptor_can_rxmsg1_o1, NULL, NULL, &data[0], 8);

    /* Signal: Channel_6 */
    temp = 0;
    temp |= ((uint32_T)data[2U]) ;
    temp |= ((uint32_T)data[3U]) << 8;
    rtb_Gain2 = (((real_T) temp ) + (real_T)-1426.0);

    /* Signal: Channel_7 not connected */

    /* Signal: Channel_8 not connected */
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S5>/raptor_can_rxmsg' */

  /* S-Function Block:<S5>/raptor_can_rxmsg */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint32_T temp;
    can_get_291__0012(&rtb_raptor_can_rxmsg_o1, NULL, NULL, &data[0], 8);

    /* Signal: Channel_1 */
    temp = 0;
    temp |= ((uint32_T)data[0U]) ;
    temp |= ((uint32_T)data[1U]) << 8;
    rtb_raptor_can_rxmsg_o2 = (((real_T) temp ) + (real_T)-1426.0);

    /* Signal: Channel_2 */
    temp = 0;
    temp |= ((uint32_T)data[2U]) ;
    temp |= ((uint32_T)data[3U]) << 8;
    rtb_raptor_can_rxmsg_o3 = (((real_T) temp ) + (real_T)-1426.0);

    /* Signal: Channel_3 not connected */

    /* Signal: Channel_4 */
    temp = 0;
    temp |= ((uint32_T)data[6U]) ;
    temp |= ((uint32_T)data[7U]) << 8;
    rtb_raptor_can_rxmsg_o5 = (((real_T) temp ) + (real_T)-1426.0);
  }

  /* If: '<S7>/If' incorporates:
   *  Constant: '<S7>/Constant3'
   *  Inport: '<S10>/Xb'
   *  Inport: '<S8>/Xa'
   *  Inport: '<S9>/Xb'
   */
  if (rtb_Gain2 > 1400.0) {
    /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    Lightning_McSeas_VCU_B.Xa = 0.0;

    /* End of Outputs for SubSystem: '<S7>/If Action Subsystem' */
  } else if (rtb_Gain2 > 250.0) {
    /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    Lightning_McSeas_VCU_B.Xb_m = rtb_raptor_can_rxmsg_o5;

    /* End of Outputs for SubSystem: '<S7>/If Action Subsystem2' */
  } else {
    /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    Lightning_McSeas_VCU_B.Xb = 750.0;

    /* End of Outputs for SubSystem: '<S7>/If Action Subsystem1' */
  }

  /* End of If: '<S7>/If' */

  /* Gain: '<S6>/Gain2' incorporates:
   *  Sum: '<S7>/Add'
   */
  rtb_Gain2 = ((Lightning_McSeas_VCU_B.Xa + Lightning_McSeas_VCU_B.Xb) +
               Lightning_McSeas_VCU_B.Xb_m) * 45.0;

  /* S-Function (raptor_sfun_can_txmsg): '<S6>/raptor_can_txmsg2' */

  /* S-Function Block:<S6>/raptor_can_txmsg2 */
  {
    uint8_T data[2U] = { 0, 0, };

    uint32_T temp;
    uint8_T temp_shift;

    /* Signal: position_send3 */
    /* position_send3 - StartBit: 0U, BitLength: 16U, Endian: 0U */

    /* signal type is unsigned */
    if (rtb_Gain2 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_Gain2 > 65535.0000000000F)
      temp = (uint32_T)65535U;
    else {
      if ((real_T)rtb_Gain2 < 0)
        temp = (uint32_T)(int32_T)((rtb_Gain2));
      else
        temp = (uint32_T)((rtb_Gain2));
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[0U] |= temp_shift;
    temp_shift = (uint8_T)(temp >> 8);
    data[1U] |= temp_shift;
    can_set_period_80__0012(0U);
    can_send_80__0012(32U & 0x7FF, 0, 2U, &data[0]);
  }

  /* S-Function (raptor_sfun_can_txmsg): '<S6>/raptor_can_txmsg3' */

  /* S-Function Block:<S6>/raptor_can_txmsg3 */
  {
    uint8_T data[2U] = { 0, 0, };

    uint32_T temp;
    uint8_T temp_shift;

    /* Signal: position_send4 */
    /* position_send4 - StartBit: 0U, BitLength: 16U, Endian: 0U */

    /* signal type is unsigned */
    if (rtb_Gain2 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_Gain2 > 65535.0000000000F)
      temp = (uint32_T)65535U;
    else {
      if ((real_T)rtb_Gain2 < 0)
        temp = (uint32_T)(int32_T)((rtb_Gain2));
      else
        temp = (uint32_T)((rtb_Gain2));
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[0U] |= temp_shift;
    temp_shift = (uint8_T)(temp >> 8);
    data[1U] |= temp_shift;
    can_set_period_81__0012(0U);
    can_send_81__0012(33U & 0x7FF, 0, 2U, &data[0]);
  }

  /* Gain: '<S6>/Gain1' */
  rtb_Gain1 = 45.0 * rtb_raptor_can_rxmsg_o3;

  /* S-Function (raptor_sfun_can_txmsg): '<S6>/raptor_can_txmsg1' */

  /* S-Function Block:<S6>/raptor_can_txmsg1 */
  {
    uint8_T data[2U] = { 0, 0, };

    uint32_T temp;
    uint8_T temp_shift;

    /* Signal: position_send2 */
    /* position_send2 - StartBit: 0U, BitLength: 16U, Endian: 0U */

    /* signal type is unsigned */
    if (rtb_Gain1 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_Gain1 > 65535.0000000000F)
      temp = (uint32_T)65535U;
    else {
      if ((real_T)rtb_Gain1 < 0)
        temp = (uint32_T)(int32_T)((rtb_Gain1));
      else
        temp = (uint32_T)((rtb_Gain1));
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[0U] |= temp_shift;
    temp_shift = (uint8_T)(temp >> 8);
    data[1U] |= temp_shift;
    can_set_period_79__0012(0U);
    can_send_79__0012(31U & 0x7FF, 0, 2U, &data[0]);
  }

  /* Gain: '<S6>/Gain' */
  rtb_Gain1 = 45.0 * rtb_raptor_can_rxmsg_o2;

  /* S-Function (raptor_sfun_can_txmsg): '<S6>/raptor_can_txmsg' */

  /* S-Function Block:<S6>/raptor_can_txmsg */
  {
    uint8_T data[2U] = { 0, 0, };

    uint32_T temp;
    uint8_T temp_shift;

    /* Signal: position_send1 */
    /* position_send1 - StartBit: 0U, BitLength: 16U, Endian: 0U */

    /* signal type is unsigned */
    if (rtb_Gain1 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_Gain1 > 65535.0000000000F)
      temp = (uint32_T)65535U;
    else {
      if ((real_T)rtb_Gain1 < 0)
        temp = (uint32_T)(int32_T)((rtb_Gain1));
      else
        temp = (uint32_T)((rtb_Gain1));
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[0U] |= temp_shift;
    temp_shift = (uint8_T)(temp >> 8);
    data[1U] |= temp_shift;
    can_set_period_78__0012(0U);
    can_send_78__0012(3U & 0x7FF, 0, 2U, &data[0]);
  }
}

/* Model step function */
void Lightning_McSeas_VCU_step(void)
{
  /* S-Function (raptor_sfun_lin_def): '<Root>/raptor_lin_def' */
  /* S-Function Block: :<Root>/raptor_lin_def - LIN2 */
  {
    /*   LIN Bus: LIN2 */
    /*  Resource: LIN2 */
  }

  /* S-Function (raptor_sfun_target_def): '<Root>/raptor_target_def' */

  /*
   * New Eagle LLC 2011
   */
}

/* Model initialize function */
void Lightning_McSeas_VCU_initialize(void)
{
  /* Registration code */

  /* block I/O */
  {
    Lightning_McSeas_VCU_B.Xb = 0.0;
    Lightning_McSeas_VCU_B.Xb_m = 0.0;
    Lightning_McSeas_VCU_B.Xa = 0.0;
  }

  /* states (dwork) */
  (void) memset((void *)&Lightning_McSeas_VCU_DWork, 0,
                sizeof(D_Work_Lightning_McSeas_VCU));

  /* Start for S-Function (raptor_sfun_xcp): '<S3>/raptor_xcp_update' */

  /* S-Function Block - Start: <S3>/raptor_xcp_update */
  {
    CAN1_XCP_CAN_PreStart(CAN1__XCP_BC_ID_Data(), CAN1__XCP_RX_ID_Data(),
                          CAN1__XCP_TX_ID_Data());
  }

  /* Start for S-Function (raptor_sfun_lin_def): '<Root>/raptor_lin_def' */

  /*   LIN Bus: LIN2 - Start */
  /*  Resource: LIN2 */

  /* Start for S-Function (raptor_sfun_target_def): '<Root>/raptor_target_def' */

  /* S-Function Block - Start: <Root>/raptor_target_def */
  {
    UDSClientAddr_RAM_Data() = 1616;
  }

  /* S-Function Block - Start: <Root>/raptor_target_def */
  {
    UDSServerAddr_RAM_Data() = 1536;
  }

  Lightning_McSeas_VCU_PrevZCSigState.StoreEEPROM_Trig_ZCE = ZERO_ZCSIG;

  /* SystemInitialize for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' incorporates:
   *  SubSystem: '<S2>/Background'
   */
  Lightning_McSeas_VCU_Background_Init();

  /* End of SystemInitialize for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' */

  /* Enable for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' */

  /* Level2 S-Function Block: '<Root>/raptor_timed_trigger' (raptor_sfun_timed_trigger) */

  /* Enable Subsystem */
  Lightning_McSeas_VCU_Foreground_Enable();

  /* End of Enable for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' */

  /* Enable for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' incorporates:
   *  SubSystem: '<Root>/Foreground'
   */
  Lightning_McSeas_VCU_Foreground_Enable();

  /* End of Enable for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' */

  /* Enable for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' */

  /* Level2 S-Function Block: '<S2>/raptor_timed_trigger' (raptor_sfun_timed_trigger) */

  /* Enable Subsystem */

  /* End of Enable for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' */
}

/* Model terminate function */
void Lightning_McSeas_VCU_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
