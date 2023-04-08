/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: EB_Charging_Program_Feb.c
 *
 * Code generated for Simulink model 'EB_Charging_Program_Feb'.
 *
 * Model version                  : 6.228
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Fri Apr  7 10:24:03 2023
 *
 * Target selection: raptor.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "EB_Charging_Program_Feb.h"
#include "EB_Charging_Program_Feb_private.h"

/* Block states (default storage) */
D_Work_EB_Charging_Program_Feb EB_Charging_Program_Feb_DWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates_EB_Charging_Program_Feb EB_Charging_Program_Feb_PrevZCSigState;

/* System initialize for function-call system: '<S2>/Background' */
void EB_Charging_Program_Feb_Background_Init(void)
{
  /* Start for S-Function (raptor_sfun_analog_in): '<S29>/raptor_analog_in1' */

  /* S-Function Block: WAKE_INPUT1 */
  {
  }

  /* Start for S-Function (raptor_sfun_digital_out): '<S23>/raptor_digital_out' */

  /* S-Function Block: POWER_HOLD */
  {
  }

  /* Start for S-Function (raptor_sfun_internal_measurement): '<S38>/raptor_internal_measurement' */

  /* S-Function Block: WAKE_SOURCE */
  {
  }

  /* InitializeConditions for S-Function (raptor_sfun_delta_time): '<S37>/raptor_delta_time' */
  EB_Charging_Program_Feb_DWork.raptor_delta_time_DWORK1 = ticks();

  /* InitializeConditions for UnitDelay: '<S37>/Unit Delay' */
  EB_Charging_Program_Feb_DWork.UnitDelay_DSTATE = 1U;

  /* InitializeConditions for UnitDelay: '<S38>/init = 1' */
  EB_Charging_Program_Feb_DWork.init1_DSTATE = true;
  EB_Charging_Program_Feb_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE = POS_ZCSIG;

  /* End of SystemInitialize for SubSystem: '<S23>/Raise Shutdown Event' */
  EB_Charging_Program_Feb_PrevZCSigState.RaiseStartupEvent_Trig_ZCE = ZERO_ZCSIG;

  /* End of SystemInitialize for SubSystem: '<S23>/Raise Startup Event' */
}

/* System reset for function-call system: '<S2>/Background' */
void EB_Charging_Program_Feb_Background_Reset(void)
{
  /* InitializeConditions for S-Function (raptor_sfun_delta_time): '<S37>/raptor_delta_time' */
  EB_Charging_Program_Feb_DWork.raptor_delta_time_DWORK1 = ticks();

  /* InitializeConditions for UnitDelay: '<S37>/Unit Delay' */
  EB_Charging_Program_Feb_DWork.UnitDelay_DSTATE = 1U;

  /* InitializeConditions for UnitDelay: '<S38>/init = 1' */
  EB_Charging_Program_Feb_DWork.init1_DSTATE = true;

  /* SystemReset for Triggered SubSystem: '<S23>/Raise Shutdown Event' */
  EB_Charging_Program_Feb_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE = POS_ZCSIG;

  /* End of SystemReset for SubSystem: '<S23>/Raise Shutdown Event' */

  /* SystemReset for Triggered SubSystem: '<S23>/Raise Startup Event' */
  EB_Charging_Program_Feb_PrevZCSigState.RaiseStartupEvent_Trig_ZCE = ZERO_ZCSIG;

  /* End of SystemReset for SubSystem: '<S23>/Raise Startup Event' */
}

/* Output and update for function-call system: '<S2>/Background' */
void EB_Charging_Program_Feb_Background(void)
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

  /* S-Function (raptor_sfun_lin_state): '<S29>/raptor_lin_state' */
  /* S-Function Block: <S29>/raptor_lin_state */
  {
    rtb_raptor_lin_state_o1 = LIN2_GetStatus(LIN2_LIN2_NODE, (uint32_t *)
      &rtb_raptor_lin_state_o3, (uint32_t *)&rtb_raptor_lin_state_o2);
  }

  /* RelationalOperator: '<S40>/Relational Operator' incorporates:
   *  UnitDelay: '<S40>/Delay Input1'
   */
  rtb_RelationalOperator = (rtb_raptor_lin_state_o2 ==
    EB_Charging_Program_Feb_DWork.DelayInput1_DSTATE);

  /* Logic: '<S29>/Logical Operator3' */
  rtb_Compare_n = !rtb_RelationalOperator;

  /* MultiPortSwitch: '<S34>/Multiport Switch1' incorporates:
   *  Constant: '<S34>/Constant1'
   */
  if (!rtb_Compare_n) {
    /* MultiPortSwitch: '<S34>/Multiport Switch' incorporates:
     *  Constant: '<S34>/Constant'
     *  Logic: '<S34>/Logical Operator1'
     *  Sum: '<S34>/Add'
     *  UnitDelay: '<S34>/Unit Delay1'
     *  UnitDelay: '<S34>/Unit Delay2'
     */
    if (EB_Charging_Program_Feb_DWork.UnitDelay2_DSTATE ||
        (!rtb_RelationalOperator)) {
      rtb_MultiportSwitch1 = EB_Charging_Program_Feb_DWork.UnitDelay1_DSTATE;
    } else {
      rtb_MultiportSwitch1 = EB_Charging_Program_Feb_DWork.UnitDelay1_DSTATE +
        1U;
    }

    /* End of MultiPortSwitch: '<S34>/Multiport Switch' */
  } else {
    rtb_MultiportSwitch1 = 0U;
  }

  /* End of MultiPortSwitch: '<S34>/Multiport Switch1' */
  /* Logic: '<S34>/Logical Operator3' incorporates:
   *  Logic: '<S34>/Logical Operator4'
   *  RelationalOperator: '<S34>/Relational Operator'
   *  S-Function (raptor_sfun_adjustment): '<S34>/raptor_adjustment'
   */
  rtb_RelationalOperator = ((rtb_MultiportSwitch1 >=
    (Wake_LIN2_SleepDelayTime_Data())) && (!rtb_Compare_n));

  /* S-Function (raptor_sfun_can_state): '<S29>/raptor_can_state1' */
  /* S-Function Block: <S29>/raptor_can_state1 */
  UNUSED_VAR(rtb_raptor_can_state1_o1);
  get_CAN_bus_state(CAN2, (uint32_t*)&rtb_raptor_can_state1_o2, (uint32_t*)
                    &rtb_raptor_can_state1_o3);

  /* Logic: '<S29>/Logical Operator' incorporates:
   *  Logic: '<S33>/Logical Operator1'
   *  MultiPortSwitch: '<S33>/Multiport Switch1'
   *  RelationalOperator: '<S39>/Relational Operator'
   *  UnitDelay: '<S39>/Delay Input1'
   */
  rtb_Compare_n = (rtb_raptor_can_state1_o2 !=
                   EB_Charging_Program_Feb_DWork.DelayInput1_DSTATE_j);

  /* MultiPortSwitch: '<S33>/Multiport Switch1' incorporates:
   *  Constant: '<S33>/Constant1'
   */
  if (!rtb_Compare_n) {
    /* MultiPortSwitch: '<S33>/Multiport Switch' incorporates:
     *  Constant: '<S33>/Constant'
     *  Logic: '<S33>/Logical Operator1'
     *  Sum: '<S33>/Add'
     *  UnitDelay: '<S33>/Unit Delay1'
     *  UnitDelay: '<S33>/Unit Delay2'
     */
    if (EB_Charging_Program_Feb_DWork.UnitDelay2_DSTATE_b || rtb_Compare_n) {
      rtb_MultiportSwitch1_a = EB_Charging_Program_Feb_DWork.UnitDelay1_DSTATE_m;
    } else {
      rtb_MultiportSwitch1_a = EB_Charging_Program_Feb_DWork.UnitDelay1_DSTATE_m
        + 1U;
    }

    /* End of MultiPortSwitch: '<S33>/Multiport Switch' */
  } else {
    rtb_MultiportSwitch1_a = 0U;
  }

  /* Logic: '<S33>/Logical Operator3' incorporates:
   *  Logic: '<S33>/Logical Operator4'
   *  RelationalOperator: '<S33>/Relational Operator'
   *  S-Function (raptor_sfun_adjustment): '<S33>/raptor_adjustment'
   */
  rtb_RelationalOperator_i = ((rtb_MultiportSwitch1_a >=
    (Wake_CAN2_SleepDelayTime_Data())) && (!rtb_Compare_n));

  /* S-Function (raptor_sfun_analog_in): '<S29>/raptor_analog_in1' */
  /* S-Function Block: WAKE_INPUT1 */
  {
    rtb_raptor_analog_in1 = ADC_Read_Chan(KEYSW);
  }

  /* RelationalOperator: '<S29>/Relational Operator1' incorporates:
   *  S-Function (raptor_sfun_adjustment): '<S29>/raptor_adjustment1'
   */
  rtb_RelationalOperator1 = (rtb_raptor_analog_in1 > ((uint16_T)
    (WAKE_INPUT1_Threshold_Data())));

  /* S-Function (raptor_sfun_delta_time): '<S37>/raptor_delta_time' */
  {
    rtb_raptor_delta_time = GetDeltaTime_ms((uint32_t*)
      &EB_Charging_Program_Feb_DWork.raptor_delta_time_DWORK1);
  }

  /* MultiPortSwitch: '<S37>/Multiport Switch1' incorporates:
   *  Constant: '<S37>/Constant'
   *  RelationalOperator: '<S41>/FixPt Relational Operator'
   *  Sum: '<S37>/Add'
   *  UnitDelay: '<S37>/Unit Delay'
   *  UnitDelay: '<S41>/Delay Input1'
   */
  if (rtb_RelationalOperator1 ==
      EB_Charging_Program_Feb_DWork.DelayInput1_DSTATE_o) {
    rtb_MultiportSwitch1_b = rtb_raptor_delta_time +
      EB_Charging_Program_Feb_DWork.UnitDelay_DSTATE;
  } else {
    rtb_MultiportSwitch1_b = 0U;
  }

  /* End of MultiPortSwitch: '<S37>/Multiport Switch1' */
  /* MultiPortSwitch: '<S42>/Multiport Switch' incorporates:
   *  Constant: '<S42>/Constant'
   *  Logic: '<S37>/Logical Operator2'
   *  Logic: '<S37>/Logical Operator3'
   *  RelationalOperator: '<S37>/Relational Operator1'
   *  S-Function (raptor_sfun_adjustment): '<S37>/raptor_adjustment4'
   */
  if (rtb_RelationalOperator1 || (rtb_MultiportSwitch1_b < (KeySwLoTimeThr_Data())))
  {
    /* MultiPortSwitch: '<S42>/Multiport Switch1' incorporates:
     *  Constant: '<S42>/Constant1'
     *  UnitDelay: '<S42>/Unit Delay'
     */
    if (!rtb_RelationalOperator1) {
      rtb_MultiportSwitch_d = EB_Charging_Program_Feb_DWork.UnitDelay_DSTATE_i;
    } else {
      rtb_MultiportSwitch_d = true;
    }

    /* End of MultiPortSwitch: '<S42>/Multiport Switch1' */
  } else {
    rtb_MultiportSwitch_d = false;
  }

  /* End of MultiPortSwitch: '<S42>/Multiport Switch' */

  /* Sum: '<S38>/Add1' incorporates:
   *  Constant: '<S35>/Constant'
   *  Constant: '<S36>/Constant'
   *  Gain: '<S38>/Gain12'
   *  Gain: '<S38>/Gain6'
   *  Gain: '<S38>/Gain8'
   *  Logic: '<S29>/Logical Operator1'
   *  Logic: '<S29>/Logical Operator2'
   *  Logic: '<S29>/Logical Operator4'
   *  Logic: '<S29>/Logical Operator5'
   *  RelationalOperator: '<S35>/Compare'
   *  RelationalOperator: '<S36>/Compare'
   */
  rtb_Add1 = (uint16_T)(((uint32_T)(((rtb_raptor_lin_state_o2 > 0U) &&
    (!rtb_RelationalOperator)) << 2) + (((rtb_raptor_can_state1_o2 > 0U) &&
    (!rtb_RelationalOperator_i)) << 1)) + rtb_MultiportSwitch_d);

  /* S-Function (raptor_sfun_internal_measurement): '<S38>/raptor_internal_measurement' incorporates:
   *  Gain: '<S38>/Gain4'
   *  Gain: '<S38>/Gain5'
   *  S-Function (raptor_sfun_adjustment): '<S38>/raptor_adjustment'
   *  S-Function (raptor_sfun_adjustment): '<S38>/raptor_adjustment1'
   *  S-Function (raptor_sfun_adjustment): '<S38>/raptor_adjustment2'
   *  Sum: '<S38>/Add'
   */
  rtb_raptor_internal_measurement = (uint16_T)(((uint32_T)
    ((GCM48Wake_LIN2_cal_Data()) << 2) + ((GCM48Wake_CAN2_cal_Data()) << 1)) +
    (GCM48Wake_INPUT1_cal_Data()));

  /* S-Function (sfix_bitop): '<S38>/Bitwise AND' */
  rtb_BitwiseAND = (uint16_T)(rtb_Add1 & rtb_raptor_internal_measurement);

  /* RelationalOperator: '<S43>/Compare' incorporates:
   *  Constant: '<S43>/Constant'
   */
  rtb_Compare_n = (rtb_BitwiseAND > 0);

  /* Logic: '<S23>/Logical Operator1' incorporates:
   *  S-Function (raptor_sfun_data_read): '<S23>/raptor_data_read1'
   */
  rtb_KeepOnrequestiscurrentlytrue = (rtb_Compare_n || KeepModuleOn_Data());

  /* MultiPortSwitch: '<S24>/Multiport Switch1' incorporates:
   *  Constant: '<S24>/Constant1'
   */
  if (!rtb_KeepOnrequestiscurrentlytrue) {
    /* MultiPortSwitch: '<S24>/Multiport Switch' incorporates:
     *  Constant: '<S24>/Constant'
     *  Sum: '<S24>/Add'
     *  UnitDelay: '<S24>/Unit Delay1'
     *  UnitDelay: '<S24>/Unit Delay2'
     */
    if (EB_Charging_Program_Feb_DWork.UnitDelay2_DSTATE_j) {
      rtb_MultiportSwitch1_p = EB_Charging_Program_Feb_DWork.UnitDelay1_DSTATE_a;
    } else {
      rtb_MultiportSwitch1_p = EB_Charging_Program_Feb_DWork.UnitDelay1_DSTATE_a
        + 1U;
    }

    /* End of MultiPortSwitch: '<S24>/Multiport Switch' */
  } else {
    rtb_MultiportSwitch1_p = 0U;
  }

  /* End of MultiPortSwitch: '<S24>/Multiport Switch1' */
  /* Logic: '<S24>/Logical Operator3' incorporates:
   *  Logic: '<S24>/Logical Operator4'
   *  RelationalOperator: '<S24>/Relational Operator'
   *  S-Function (raptor_sfun_adjustment): '<S24>/raptor_adjustment'
   */
  rtb_LogicalOperator3_m = ((rtb_MultiportSwitch1_p >=
    (Wake_DlyStopOfFgndTaskTime_Data())) && (!rtb_KeepOnrequestiscurrentlytrue));

  /* MultiPortSwitch: '<S27>/Multiport Switch' incorporates:
   *  Constant: '<S27>/Constant'
   */
  if (!rtb_LogicalOperator3_m) {
    /* MultiPortSwitch: '<S27>/Multiport Switch1' incorporates:
     *  Constant: '<S27>/Constant1'
     *  UnitDelay: '<S27>/Unit Delay'
     */
    if (!rtb_KeepOnrequestiscurrentlytrue) {
      rtb_MultiportSwitch_ko = EB_Charging_Program_Feb_DWork.UnitDelay_DSTATE_ik;
    } else {
      rtb_MultiportSwitch_ko = true;
    }

    /* End of MultiPortSwitch: '<S27>/Multiport Switch1' */
  } else {
    rtb_MultiportSwitch_ko = false;
  }

  /* End of MultiPortSwitch: '<S27>/Multiport Switch' */

  /* Logic: '<S23>/Logical Operator4' */
  rtb_KeepOnrequestiscurrentlytrue = (rtb_KeepOnrequestiscurrentlytrue ||
    rtb_MultiportSwitch_ko);

  /* Outputs for Triggered SubSystem: '<S23>/Raise Shutdown Event' incorporates:
   *  TriggerPort: '<S25>/init state = 1 to trigger at wakeup if awoken by a wake source  that we want to ignore'
   */
  if ((!rtb_KeepOnrequestiscurrentlytrue) &&
      (EB_Charging_Program_Feb_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE !=
       ZERO_ZCSIG)) {
    /* S-Function (raptor_sfun_data_write): '<S25>/raptor_data_write' incorporates:
     *  Constant: '<S25>/Constant'
     */
    FgndTasksStopped_Data() = true;

    /* S-Function (fcgen): '<S25>/Function-Call Generator' incorporates:
     *  SubSystem: '<S25>/raptor_shutdown'
     */
    /* S-Function (raptor_sfun_shutdown): '<S30>/raptor_data_write' */
    /* S-Function Block */
    {
      extern void App_Shutdown(void);
      App_Shutdown();
    }

    /* End of Outputs for S-Function (fcgen): '<S25>/Function-Call Generator' */
  }

  EB_Charging_Program_Feb_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE =
    rtb_KeepOnrequestiscurrentlytrue;

  /* End of Outputs for SubSystem: '<S23>/Raise Shutdown Event' */

  /* Outputs for Triggered SubSystem: '<S23>/Raise Startup Event' incorporates:
   *  TriggerPort: '<S26>/init state zero so it triggers at wake if wake request is true'
   */
  if (rtb_KeepOnrequestiscurrentlytrue &&
      (EB_Charging_Program_Feb_PrevZCSigState.RaiseStartupEvent_Trig_ZCE !=
       POS_ZCSIG)) {
    /* S-Function (raptor_sfun_measurement): '<S26>/raptor_measurement1' incorporates:
     *  Constant: '<S26>/Constant'
     */
    Wake_Debug_StartupEventRaised_Data() = true;

    /* S-Function (raptor_sfun_data_write): '<S26>/raptor_data_write' incorporates:
     *  Constant: '<S26>/Constant1'
     */
    FgndTasksStopped_Data() = false;

    /* S-Function (fcgen): '<S26>/Function-Call Generator' incorporates:
     *  SubSystem: '<S26>/raptor_startup'
     */
    /* S-Function (raptor_sfun_startup): '<S31>/raptor_data_write' */
    /* S-Function Block */
    {
      extern void App_Startup(void);
      App_Startup();
    }

    /* End of Outputs for S-Function (fcgen): '<S26>/Function-Call Generator' */
  }

  /* Outputs for Triggered SubSystem: '<S23>/Raise Shutdown Event' incorporates:
   *  TriggerPort: '<S25>/init state = 1 to trigger at wakeup if awoken by a wake source  that we want to ignore'
   */
  EB_Charging_Program_Feb_PrevZCSigState.RaiseStartupEvent_Trig_ZCE =
    rtb_KeepOnrequestiscurrentlytrue;

  /* End of Outputs for SubSystem: '<S23>/Raise Shutdown Event' */
  /* End of Outputs for SubSystem: '<S23>/Raise Startup Event' */

  /* UnitDelay: '<S23>/Unit Delay' */
  rtb_UnitDelay_l = EB_Charging_Program_Feb_DWork.UnitDelay_DSTATE_a;

  /* Outputs for Triggered SubSystem: '<S23>/Store EEPROM' incorporates:
   *  TriggerPort: '<S28>/Trigger'
   */
  if ((!EB_Charging_Program_Feb_DWork.UnitDelay_DSTATE_a) &&
      (EB_Charging_Program_Feb_PrevZCSigState.StoreEEPROM_Trig_ZCE != ZERO_ZCSIG))
  {
    /* S-Function (fcgen): '<S28>/Function-Call Generator' incorporates:
     *  SubSystem: '<S28>/raptor_store_nv'
     */
    /* S-Function (raptor_sfun_store_nv): '<S32>/raptor_data_write' */
    /* S-Function Block */
    {
      App_EE_Store();
    }

    /* End of Outputs for S-Function (fcgen): '<S28>/Function-Call Generator' */
  }

  /* End of UnitDelay: '<S23>/Unit Delay' */
  EB_Charging_Program_Feb_PrevZCSigState.StoreEEPROM_Trig_ZCE = rtb_UnitDelay_l;

  /* End of Outputs for SubSystem: '<S23>/Store EEPROM' */

  /* S-Function (raptor_sfun_nv_status): '<S23>/raptor_sfun_nv_status' */
  /* S-Function Block */
  {
    rtb_raptor_sfun_nv_status = (EEPROM_State_Data() == EE_STORE_IN_PROGESS);
  }

  /* Logic: '<S23>/Logical Operator2' incorporates:
   *  UnitDelay: '<S23>/Unit Delay1'
   */
  rtb_LogicalOperator2_e = (rtb_raptor_sfun_nv_status ||
    rtb_KeepOnrequestiscurrentlytrue ||
    EB_Charging_Program_Feb_DWork.UnitDelay1_DSTATE_o);

  /* S-Function (raptor_sfun_digital_out): '<S23>/raptor_digital_out' */
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

  /* S-Function (raptor_sfun_measurement): '<S24>/raptor_measurement' */
  Wake_DlyStopOfFgndTaskTTmr_Data() = rtb_MultiportSwitch1_p;

  /* S-Function (raptor_sfun_data_write): '<S29>/raptor_data_write1' */
  KeySw_Bgnd_Data() = rtb_MultiportSwitch_d;

  /* S-Function (raptor_sfun_measurement): '<S29>/raptor_measurement1' */
  Wake_INPUT1_Vlts_Data() = rtb_raptor_analog_in1;

  /* S-Function (raptor_sfun_measurement): '<S29>/raptor_measurement2' */
  Wake_LIN2_RxCount_Data() = rtb_raptor_lin_state_o2;

  /* S-Function (raptor_sfun_measurement): '<S29>/raptor_measurement5' */
  Wake_CAN2_RxCount_Data() = rtb_raptor_can_state1_o2;

  /* S-Function (raptor_sfun_measurement): '<S33>/raptor_measurement' */
  Wake_CAN2_SleepDelayTTmr_Data() = rtb_MultiportSwitch1_a;

  /* S-Function (raptor_sfun_measurement): '<S34>/raptor_measurement' */
  Wake_LIN2_SleepDelayTTmr_Data() = rtb_MultiportSwitch1;

  /* S-Function (raptor_sfun_measurement): '<S37>/raptor_measurement3' */
  dt_read_Data() = rtb_raptor_delta_time;

  /* Outputs for Enabled SubSystem: '<S38>/Startup Wake Source' incorporates:
   *  EnablePort: '<S44>/Enable'
   */
  /* UnitDelay: '<S38>/init = 1' */
  if (EB_Charging_Program_Feb_DWork.init1_DSTATE) {
    /* S-Function (raptor_sfun_measurement): '<S44>/raptor_measurement' */
    WakeSource_Startup_Data() = rtb_BitwiseAND;
  }

  /* End of UnitDelay: '<S38>/init = 1' */
  /* End of Outputs for SubSystem: '<S38>/Startup Wake Source' */

  /* S-Function (raptor_sfun_data_write): '<S38>/raptor_data_write1' */
  Wake_AnyWakeSourceActive_Data() = rtb_Compare_n;

  /* S-Function (raptor_sfun_data_write): '<S38>/raptor_data_write2' */
  Wake_SourceBitAndWakeConfigRegister_Data() = rtb_BitwiseAND;

  /* S-Function (raptor_sfun_data_write): '<S38>/raptor_data_write3' */
  WakeSource_Current_Data() = rtb_Add1;

  /* S-Function (raptor_sfun_measurement): '<S38>/raptor_measurement2' */
  WakeConfigRegister_Data() = rtb_raptor_internal_measurement;

  /* S-Function (raptor_sfun_internal_measurement): '<S38>/raptor_internal_measurement' */
  /* S-Function Block: WAKE_SOURCE */
  {
    extern uint8_t Get_Wake_Source( void );
    rtb_raptor_internal_measurement = Get_Wake_Source();
  }

  /* S-Function (raptor_sfun_measurement): '<S38>/raptor_measurement' */
  WakeSource_RaptorIntrnlMeas_Data() = rtb_raptor_internal_measurement;

  /* Update for UnitDelay: '<S40>/Delay Input1' */
  EB_Charging_Program_Feb_DWork.DelayInput1_DSTATE = rtb_raptor_lin_state_o2;

  /* Update for UnitDelay: '<S34>/Unit Delay2' */
  EB_Charging_Program_Feb_DWork.UnitDelay2_DSTATE = rtb_RelationalOperator;

  /* Update for UnitDelay: '<S34>/Unit Delay1' */
  EB_Charging_Program_Feb_DWork.UnitDelay1_DSTATE = rtb_MultiportSwitch1;

  /* Update for UnitDelay: '<S39>/Delay Input1' */
  EB_Charging_Program_Feb_DWork.DelayInput1_DSTATE_j = rtb_raptor_can_state1_o2;

  /* Update for UnitDelay: '<S33>/Unit Delay2' */
  EB_Charging_Program_Feb_DWork.UnitDelay2_DSTATE_b = rtb_RelationalOperator_i;

  /* Update for UnitDelay: '<S33>/Unit Delay1' */
  EB_Charging_Program_Feb_DWork.UnitDelay1_DSTATE_m = rtb_MultiportSwitch1_a;

  /* Update for UnitDelay: '<S41>/Delay Input1' */
  EB_Charging_Program_Feb_DWork.DelayInput1_DSTATE_o = rtb_RelationalOperator1;

  /* Update for UnitDelay: '<S37>/Unit Delay' */
  EB_Charging_Program_Feb_DWork.UnitDelay_DSTATE = rtb_MultiportSwitch1_b;

  /* Update for UnitDelay: '<S42>/Unit Delay' */
  EB_Charging_Program_Feb_DWork.UnitDelay_DSTATE_i = rtb_MultiportSwitch_d;

  /* Update for UnitDelay: '<S24>/Unit Delay2' */
  EB_Charging_Program_Feb_DWork.UnitDelay2_DSTATE_j = rtb_LogicalOperator3_m;

  /* Update for UnitDelay: '<S24>/Unit Delay1' */
  EB_Charging_Program_Feb_DWork.UnitDelay1_DSTATE_a = rtb_MultiportSwitch1_p;

  /* Update for UnitDelay: '<S27>/Unit Delay' */
  EB_Charging_Program_Feb_DWork.UnitDelay_DSTATE_ik = rtb_MultiportSwitch_ko;

  /* Update for UnitDelay: '<S23>/Unit Delay' */
  EB_Charging_Program_Feb_DWork.UnitDelay_DSTATE_a =
    rtb_KeepOnrequestiscurrentlytrue;

  /* Update for UnitDelay: '<S23>/Unit Delay1' */
  EB_Charging_Program_Feb_DWork.UnitDelay1_DSTATE_o = rtb_UnitDelay_l;

  /* Update for UnitDelay: '<S38>/init = 1' incorporates:
   *  Constant: '<S38>/Constant'
   */
  EB_Charging_Program_Feb_DWork.init1_DSTATE = false;
}

/* Enable for function-call system: '<Root>/Foreground' */
void EB_Charging_Program_Feb_Foreground_Enable(void)
{
  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S4>/raptor_can_txmsg' incorporates:
   *  Constant: '<S4>/Constant1'
   */
  /* Level2 S-Function Block: '<S4>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_2013__0001(0U);

  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S4>/raptor_can_txmsg1' incorporates:
   *  Constant: '<S4>/Constant4'
   */
  /* Level2 S-Function Block: '<S4>/raptor_can_txmsg1' (raptor_sfun_can_txmsg) */
  can_set_period_2014__0001(0U);

  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S5>/raptor_can_txmsg' */
  /* Level2 S-Function Block: '<S5>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_2097__0001(0U);
}

/* Disable for function-call system: '<Root>/Foreground' */
void EB_Charging_Program_Feb_Foreground_Disable(void)
{
  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S4>/raptor_can_txmsg' incorporates:
   *  Constant: '<S4>/Constant1'
   */
  /* Level2 S-Function Block: '<S4>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_2013__0001(0);

  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S4>/raptor_can_txmsg1' incorporates:
   *  Constant: '<S4>/Constant4'
   */
  /* Level2 S-Function Block: '<S4>/raptor_can_txmsg1' (raptor_sfun_can_txmsg) */
  can_set_period_2014__0001(0);

  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S5>/raptor_can_txmsg' */
  /* Level2 S-Function Block: '<S5>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_2097__0001(0);
}

/* Output and update for function-call system: '<Root>/Foreground' */
void EB_Charging_Program_Feb_Foreground(void)
{
  /* local block i/o variables */
  real_T rtb_Merge;
  real_T rtb_Plus;
  uint16_T rtb_raptor_can_rxmsg_o1;
  uint16_T rtb_raptor_can_rxmsg1_o1;
  uint16_T rtb_raptor_can_rxmsg_o1_i;
  real_T rtb_Sum2;

  /* S-Function (raptor_sfun_can_rxmsg): '<S4>/raptor_can_rxmsg' */

  /* S-Function Block:<S4>/raptor_can_rxmsg */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint32_T temp;
    can_get_2011__0001(&rtb_raptor_can_rxmsg_o1, NULL, NULL, &data[0], 8);

    /* Signal: bcm_cell_vmax_a */
    temp = 0;
    temp |= (((uint32_T)data[6U]) & 240) >> 4;
    temp |= ((uint32_T)data[5U]) << 4;
    rtb_Merge = (((real_T) temp / (real_T) 500.0) );

    /* Signal: bcm_cell_vmin_a not connected */

    /* Signal: bcm_i_lem_a     not connected */

    /* Signal: bcm_vbat_a      not connected */

    /* Signal: bcm_vbus_a      not connected */

    /* Signal: bcm_vfuse_a     not connected */
  }

  /* Outputs for IfAction SubSystem: '<S6>/If Action Subsystem1' incorporates:
   *  ActionPort: '<S11>/Action Port'
   */
  /* Outputs for IfAction SubSystem: '<S6>/If Action Subsystem' incorporates:
   *  ActionPort: '<S10>/Action Port'
   */
  /* If: '<S6>/If' incorporates:
   *  Inport: '<S10>/In1'
   *  Inport: '<S11>/In1'
   *  Sum: '<S5>/Plus'
   */
  rtb_Plus = (rtb_Merge > 4.15);

  /* End of Outputs for SubSystem: '<S6>/If Action Subsystem' */
  /* End of Outputs for SubSystem: '<S6>/If Action Subsystem1' */

  /* Sum: '<S4>/Sum2' */
  rtb_Sum2 = rtb_Plus;

  /* If: '<S8>/If' */
  if (rtb_Merge < 4.05) {
    /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem' incorporates:
     *  ActionPort: '<S14>/Action Port'
     */
    /* Sum: '<S5>/Plus' incorporates:
     *  Constant: '<S8>/Constant'
     *  Inport: '<S14>/In1'
     */
    rtb_Plus = 16.0;

    /* End of Outputs for SubSystem: '<S8>/If Action Subsystem' */
  } else if (rtb_Merge < 4.1) {
    /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S16>/Action Port'
     */
    /* Sum: '<S5>/Plus' incorporates:
     *  Constant: '<S4>/Constant'
     *  Gain: '<S4>/Gain'
     *  Inport: '<S16>/In1'
     *  Sum: '<S4>/Sum'
     */
    rtb_Plus = -242.0 * rtb_Merge + 996.1;

    /* End of Outputs for SubSystem: '<S8>/If Action Subsystem2' */
  } else {
    /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S15>/Action Port'
     */
    /* Sum: '<S5>/Plus' incorporates:
     *  Constant: '<S8>/Constant1'
     *  Inport: '<S15>/In1'
     */
    rtb_Plus = 3.9;

    /* End of Outputs for SubSystem: '<S8>/If Action Subsystem1' */
  }

  /* End of If: '<S8>/If' */

  /* S-Function (raptor_sfun_can_txmsg): '<S4>/raptor_can_txmsg' incorporates:
   *  Constant: '<S4>/Constant1'
   */

  /* S-Function Block:<S4>/raptor_can_txmsg */
  {
    uint8_T data[8U] = { 0, 0, 0, 0, 0, 0, 0, 0, };

    uint32_T temp;
    uint8_T temp_shift;

    /* Signal: charger_control     */
    /* charger_control     - StartBit: 32U, BitLength: 8U, Endian: 0U */

    /* signal type is unsigned */
    if (rtb_Sum2 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_Sum2 > 255.0000000000F)
      temp = (uint32_T)255U;
    else {
      if ((real_T)rtb_Sum2 < 0)
        temp = (uint32_T)(int32_T)((rtb_Sum2));
      else
        temp = (uint32_T)((rtb_Sum2));
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[4U] |= temp_shift;

    /* Signal: charger_max_current */
    /* charger_max_current - StartBit: 24U, BitLength: 16U, Endian: 1U */

    /* signal type is unsigned */
    if (rtb_Plus < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_Plus > 6553.5000000000F)
      temp = (uint32_T)65535U;
    else {
      if ((real_T)rtb_Plus < 0)
        temp = (uint32_T)(int32_T)((rtb_Plus) * 10.0f);
      else
        temp = (uint32_T)((rtb_Plus) * 10.0f);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[3U] |= temp_shift;
    temp_shift = (uint8_T)(temp >> 8);
    data[2U] |= temp_shift;

    /* Signal: charger_max_voltage */
    /* charger_max_voltage - StartBit: 8U, BitLength: 16U, Endian: 1U */

    /* signal type is unsigned */
    if (820.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (820.0 > 6553.5000000000F)
      temp = (uint32_T)65535U;
    else {
      if ((real_T)820.0 < 0)
        temp = (uint32_T)(int32_T)((820.0) * 10.0f);
      else
        temp = (uint32_T)((820.0) * 10.0f);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[1U] |= temp_shift;
    temp_shift = (uint8_T)(temp >> 8);
    data[0U] |= temp_shift;
    can_set_period_2013__0001(0U);
    can_send_2013__0001(403105268U & 0x1FFFFFFF, 1, 8U, &data[0]);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S4>/raptor_can_rxmsg1' */

  /* S-Function Block:<S4>/raptor_can_rxmsg1 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint32_T temp;
    can_get_2012__0001(&rtb_raptor_can_rxmsg1_o1, NULL, NULL, &data[0], 8);

    /* Signal: bcm_cell_vmax_b */
    temp = 0;
    temp |= (((uint32_T)data[6U]) & 240) >> 4;
    temp |= ((uint32_T)data[5U]) << 4;
    rtb_Plus = (((real_T) temp / (real_T) 500.0) );

    /* Signal: bcm_cell_vmin_b not connected */

    /* Signal: bcm_i_lem_b     not connected */

    /* Signal: bcm_vbat_b      not connected */

    /* Signal: bcm_vbus_b      not connected */

    /* Signal: bcm_vfuse_b     not connected */
  }

  /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem1' incorporates:
   *  ActionPort: '<S13>/Action Port'
   */
  /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem' incorporates:
   *  ActionPort: '<S12>/Action Port'
   */
  /* If: '<S7>/If' incorporates:
   *  Inport: '<S12>/In1'
   *  Inport: '<S13>/In1'
   *  Merge: '<S7>/Merge'
   */
  rtb_Merge = (rtb_Plus > 4.15);

  /* End of Outputs for SubSystem: '<S7>/If Action Subsystem' */
  /* End of Outputs for SubSystem: '<S7>/If Action Subsystem1' */

  /* Sum: '<S4>/Sum3' */
  rtb_Sum2 = rtb_Merge;

  /* If: '<S9>/If' */
  if (rtb_Plus < 4.05) {
    /* Outputs for IfAction SubSystem: '<S9>/If Action Subsystem' incorporates:
     *  ActionPort: '<S17>/Action Port'
     */
    /* Sum: '<S5>/Plus' incorporates:
     *  Constant: '<S9>/Constant'
     *  Inport: '<S17>/In1'
     */
    rtb_Plus = 16.0;

    /* End of Outputs for SubSystem: '<S9>/If Action Subsystem' */
  } else if (rtb_Plus < 4.1) {
    /* Outputs for IfAction SubSystem: '<S9>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S19>/Action Port'
     */
    /* Sum: '<S5>/Plus' incorporates:
     *  Constant: '<S4>/Constant3'
     *  Gain: '<S4>/Gain2'
     *  Inport: '<S19>/In1'
     *  Sum: '<S4>/Sum1'
     */
    rtb_Plus = -242.0 * rtb_Plus + 996.1;

    /* End of Outputs for SubSystem: '<S9>/If Action Subsystem2' */
  } else {
    /* Outputs for IfAction SubSystem: '<S9>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S18>/Action Port'
     */
    /* Sum: '<S5>/Plus' incorporates:
     *  Constant: '<S9>/Constant1'
     *  Inport: '<S18>/In1'
     */
    rtb_Plus = 3.9;

    /* End of Outputs for SubSystem: '<S9>/If Action Subsystem1' */
  }

  /* End of If: '<S9>/If' */

  /* S-Function (raptor_sfun_can_txmsg): '<S4>/raptor_can_txmsg1' incorporates:
   *  Constant: '<S4>/Constant4'
   */

  /* S-Function Block:<S4>/raptor_can_txmsg1 */
  {
    uint8_T data[8U] = { 0, 0, 0, 0, 0, 0, 0, 0, };

    uint32_T temp;
    uint8_T temp_shift;

    /* Signal: charger_control     */
    /* charger_control     - StartBit: 32U, BitLength: 8U, Endian: 0U */

    /* signal type is unsigned */
    if (rtb_Sum2 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_Sum2 > 255.0000000000F)
      temp = (uint32_T)255U;
    else {
      if ((real_T)rtb_Sum2 < 0)
        temp = (uint32_T)(int32_T)((rtb_Sum2));
      else
        temp = (uint32_T)((rtb_Sum2));
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[4U] |= temp_shift;

    /* Signal: charger_max_current */
    /* charger_max_current - StartBit: 24U, BitLength: 16U, Endian: 1U */

    /* signal type is unsigned */
    if (rtb_Plus < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_Plus > 6553.5000000000F)
      temp = (uint32_T)65535U;
    else {
      if ((real_T)rtb_Plus < 0)
        temp = (uint32_T)(int32_T)((rtb_Plus) * 10.0f);
      else
        temp = (uint32_T)((rtb_Plus) * 10.0f);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[3U] |= temp_shift;
    temp_shift = (uint8_T)(temp >> 8);
    data[2U] |= temp_shift;

    /* Signal: charger_max_voltage */
    /* charger_max_voltage - StartBit: 8U, BitLength: 16U, Endian: 1U */

    /* signal type is unsigned */
    if (820.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (820.0 > 6553.5000000000F)
      temp = (uint32_T)65535U;
    else {
      if ((real_T)820.0 < 0)
        temp = (uint32_T)(int32_T)((820.0) * 10.0f);
      else
        temp = (uint32_T)((820.0) * 10.0f);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[1U] |= temp_shift;
    temp_shift = (uint8_T)(temp >> 8);
    data[0U] |= temp_shift;
    can_set_period_2014__0001(0U);
    can_send_2014__0001(403105780U & 0x1FFFFFFF, 1, 8U, &data[0]);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S5>/raptor_can_rxmsg' */

  /* S-Function Block:<S5>/raptor_can_rxmsg */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint32_T temp;
    can_get_2096__0001(&rtb_raptor_can_rxmsg_o1_i, NULL, NULL, &data[0], 8);

    /* Signal: bcm_cell_vmax_a */
    temp = 0;
    temp |= (((uint32_T)data[6U]) & 240) >> 4;
    temp |= ((uint32_T)data[5U]) << 4;
    rtb_Plus = (((real_T) temp / (real_T) 500.0) );

    /* Signal: bcm_cell_vmin_a not connected */

    /* Signal: bcm_i_lem_a     not connected */

    /* Signal: bcm_vbat_a      not connected */

    /* Signal: bcm_vbus_a      not connected */

    /* Signal: bcm_vfuse_a     not connected */
  }

  /* If: '<S20>/If' incorporates:
   *  Sum: '<S5>/Plus'
   */
  rtb_Plus = (rtb_Plus > 0.0);

  /* S-Function (raptor_sfun_can_txmsg): '<S5>/raptor_can_txmsg' */

  /* S-Function Block:<S5>/raptor_can_txmsg */
  {
    uint8_T data[4U] = { 0, 0, 0, 0, };

    uint32_T temp;
    uint8_T temp_shift;

    /* Signal: hsc_bcm_enable      */
    /* hsc_bcm_enable      - StartBit: 0U, BitLength: 1U, Endian: 1U */

    /* signal type is unsigned */
    if (rtb_Plus < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_Plus > 1.0000000000F)
      temp = (uint32_T)1U;
    else {
      if ((real_T)rtb_Plus < 0)
        temp = (uint32_T)(int32_T)((rtb_Plus));
      else
        temp = (uint32_T)((rtb_Plus));
    }

    temp_shift = (uint8_T)(temp >> 0);
    temp_shift &= ((uint8_T)1U);
    data[0U] |= temp_shift;

    /* Signal: hsc_bcm_epo         */
    /* hsc_bcm_epo         - StartBit: 1U, BitLength: 1U, Endian: 1U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 1.0000000000F)
      temp = (uint32_T)1U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0));
      else
        temp = (uint32_T)((0.0));
    }

    temp_shift = (uint8_T)(temp << 1);
    temp_shift &= ((uint8_T)2U);
    data[0U] |= temp_shift;

    /* Signal: hsc_bcm_leakage_ena */
    /* hsc_bcm_leakage_ena - StartBit: 3U, BitLength: 1U, Endian: 1U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 1.0000000000F)
      temp = (uint32_T)1U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0));
      else
        temp = (uint32_T)((0.0));
    }

    temp_shift = (uint8_T)(temp << 3);
    temp_shift &= ((uint8_T)8U);
    data[0U] |= temp_shift;

    /* Signal: hsc_bcm_mainc_close */
    /* hsc_bcm_mainc_close - StartBit: 2U, BitLength: 1U, Endian: 1U */

    /* signal type is unsigned */
    if (rtb_Plus < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_Plus > 1.0000000000F)
      temp = (uint32_T)1U;
    else {
      if ((real_T)rtb_Plus < 0)
        temp = (uint32_T)(int32_T)((rtb_Plus));
      else
        temp = (uint32_T)((rtb_Plus));
    }

    temp_shift = (uint8_T)(temp << 2);
    temp_shift &= ((uint8_T)4U);
    data[0U] |= temp_shift;
    can_set_period_2097__0001(0U);
    can_send_2097__0001(1024U & 0x7FF, 0, 4U, &data[0]);
  }
}

/* Model step function */
void EB_Charging_Program_Feb_step(void)
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
void EB_Charging_Program_Feb_initialize(void)
{
  /* Registration code */

  /* states (dwork) */
  (void) memset((void *)&EB_Charging_Program_Feb_DWork, 0,
                sizeof(D_Work_EB_Charging_Program_Feb));

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

  EB_Charging_Program_Feb_PrevZCSigState.StoreEEPROM_Trig_ZCE = ZERO_ZCSIG;

  /* SystemInitialize for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' incorporates:
   *  SubSystem: '<S2>/Background'
   */
  EB_Charging_Program_Feb_Background_Init();

  /* End of SystemInitialize for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' */

  /* Enable for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' */

  /* Level2 S-Function Block: '<Root>/raptor_timed_trigger' (raptor_sfun_timed_trigger) */

  /* Enable Subsystem */
  EB_Charging_Program_Feb_Foreground_Enable();

  /* End of Enable for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' */

  /* Enable for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' incorporates:
   *  SubSystem: '<Root>/Foreground'
   */
  EB_Charging_Program_Feb_Foreground_Enable();

  /* End of Enable for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' */

  /* Enable for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' */

  /* Level2 S-Function Block: '<S2>/raptor_timed_trigger' (raptor_sfun_timed_trigger) */

  /* Enable Subsystem */

  /* End of Enable for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' */
}

/* Model terminate function */
void EB_Charging_Program_Feb_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
