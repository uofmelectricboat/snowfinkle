/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode.c
 *
 * Code generated for Simulink model 'Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode'.
 *
 * Model version                  : 6.169
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Mon Apr 17 16:47:54 2023
 *
 * Target selection: raptor.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode.h"
#include "Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_private.h"

/* Block states (default storage) */
D_Work_Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates_Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_PrevZCSigState;

/* System initialize for function-call system: '<S2>/Background' */
void Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_Background_Init(void)
{
  /* Start for S-Function (raptor_sfun_analog_in): '<S35>/raptor_analog_in1' */

  /* S-Function Block: WAKE_INPUT1 */
  {
  }

  /* Start for S-Function (raptor_sfun_digital_out): '<S29>/raptor_digital_out' */

  /* S-Function Block: POWER_HOLD */
  {
  }

  /* Start for S-Function (raptor_sfun_internal_measurement): '<S44>/raptor_internal_measurement' */

  /* S-Function Block: WAKE_SOURCE */
  {
  }

  /* InitializeConditions for S-Function (raptor_sfun_delta_time): '<S43>/raptor_delta_time' */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.raptor_delta_time_DWORK1 =
    ticks();

  /* InitializeConditions for UnitDelay: '<S43>/Unit Delay' */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay_DSTATE = 1U;

  /* InitializeConditions for UnitDelay: '<S44>/init = 1' */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.init1_DSTATE = true;
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE
    = POS_ZCSIG;

  /* End of SystemInitialize for SubSystem: '<S29>/Raise Shutdown Event' */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_PrevZCSigState.RaiseStartupEvent_Trig_ZCE
    = ZERO_ZCSIG;

  /* End of SystemInitialize for SubSystem: '<S29>/Raise Startup Event' */
}

/* System reset for function-call system: '<S2>/Background' */
void Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_Background_Reset(void)
{
  /* InitializeConditions for S-Function (raptor_sfun_delta_time): '<S43>/raptor_delta_time' */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.raptor_delta_time_DWORK1 =
    ticks();

  /* InitializeConditions for UnitDelay: '<S43>/Unit Delay' */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay_DSTATE = 1U;

  /* InitializeConditions for UnitDelay: '<S44>/init = 1' */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.init1_DSTATE = true;

  /* SystemReset for Triggered SubSystem: '<S29>/Raise Shutdown Event' */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE
    = POS_ZCSIG;

  /* End of SystemReset for SubSystem: '<S29>/Raise Shutdown Event' */

  /* SystemReset for Triggered SubSystem: '<S29>/Raise Startup Event' */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_PrevZCSigState.RaiseStartupEvent_Trig_ZCE
    = ZERO_ZCSIG;

  /* End of SystemReset for SubSystem: '<S29>/Raise Startup Event' */
}

/* Output and update for function-call system: '<S2>/Background' */
void Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_Background(void)
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

  /* S-Function (raptor_sfun_lin_state): '<S35>/raptor_lin_state' */
  /* S-Function Block: <S35>/raptor_lin_state */
  {
    rtb_raptor_lin_state_o1 = LIN2_GetStatus(LIN2_LIN2_NODE, (uint32_t *)
      &rtb_raptor_lin_state_o3, (uint32_t *)&rtb_raptor_lin_state_o2);
  }

  /* RelationalOperator: '<S46>/Relational Operator' incorporates:
   *  UnitDelay: '<S46>/Delay Input1'
   */
  rtb_RelationalOperator = (rtb_raptor_lin_state_o2 ==
    Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.DelayInput1_DSTATE);

  /* Logic: '<S35>/Logical Operator3' */
  rtb_Compare_n = !rtb_RelationalOperator;

  /* MultiPortSwitch: '<S40>/Multiport Switch1' incorporates:
   *  Constant: '<S40>/Constant1'
   */
  if (!rtb_Compare_n) {
    /* MultiPortSwitch: '<S40>/Multiport Switch' incorporates:
     *  Constant: '<S40>/Constant'
     *  Logic: '<S40>/Logical Operator1'
     *  Sum: '<S40>/Add'
     *  UnitDelay: '<S40>/Unit Delay1'
     *  UnitDelay: '<S40>/Unit Delay2'
     */
    if (Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay2_DSTATE ||
        (!rtb_RelationalOperator)) {
      rtb_MultiportSwitch1 =
        Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay1_DSTATE;
    } else {
      rtb_MultiportSwitch1 =
        Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay1_DSTATE +
        1U;
    }

    /* End of MultiPortSwitch: '<S40>/Multiport Switch' */
  } else {
    rtb_MultiportSwitch1 = 0U;
  }

  /* End of MultiPortSwitch: '<S40>/Multiport Switch1' */
  /* Logic: '<S40>/Logical Operator3' incorporates:
   *  Logic: '<S40>/Logical Operator4'
   *  RelationalOperator: '<S40>/Relational Operator'
   *  S-Function (raptor_sfun_adjustment): '<S40>/raptor_adjustment'
   */
  rtb_RelationalOperator = ((rtb_MultiportSwitch1 >=
    (Wake_LIN2_SleepDelayTime_Data())) && (!rtb_Compare_n));

  /* S-Function (raptor_sfun_can_state): '<S35>/raptor_can_state1' */
  /* S-Function Block: <S35>/raptor_can_state1 */
  UNUSED_VAR(rtb_raptor_can_state1_o1);
  get_CAN_bus_state(CAN2, (uint32_t*)&rtb_raptor_can_state1_o2, (uint32_t*)
                    &rtb_raptor_can_state1_o3);

  /* Logic: '<S35>/Logical Operator' incorporates:
   *  Logic: '<S39>/Logical Operator1'
   *  MultiPortSwitch: '<S39>/Multiport Switch1'
   *  RelationalOperator: '<S45>/Relational Operator'
   *  UnitDelay: '<S45>/Delay Input1'
   */
  rtb_Compare_n = (rtb_raptor_can_state1_o2 !=
                   Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.DelayInput1_DSTATE_j);

  /* MultiPortSwitch: '<S39>/Multiport Switch1' incorporates:
   *  Constant: '<S39>/Constant1'
   */
  if (!rtb_Compare_n) {
    /* MultiPortSwitch: '<S39>/Multiport Switch' incorporates:
     *  Constant: '<S39>/Constant'
     *  Logic: '<S39>/Logical Operator1'
     *  Sum: '<S39>/Add'
     *  UnitDelay: '<S39>/Unit Delay1'
     *  UnitDelay: '<S39>/Unit Delay2'
     */
    if (Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay2_DSTATE_b
        || rtb_Compare_n) {
      rtb_MultiportSwitch1_a =
        Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay1_DSTATE_m;
    } else {
      rtb_MultiportSwitch1_a =
        Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay1_DSTATE_m
        + 1U;
    }

    /* End of MultiPortSwitch: '<S39>/Multiport Switch' */
  } else {
    rtb_MultiportSwitch1_a = 0U;
  }

  /* Logic: '<S39>/Logical Operator3' incorporates:
   *  Logic: '<S39>/Logical Operator4'
   *  RelationalOperator: '<S39>/Relational Operator'
   *  S-Function (raptor_sfun_adjustment): '<S39>/raptor_adjustment'
   */
  rtb_RelationalOperator_i = ((rtb_MultiportSwitch1_a >=
    (Wake_CAN2_SleepDelayTime_Data())) && (!rtb_Compare_n));

  /* S-Function (raptor_sfun_analog_in): '<S35>/raptor_analog_in1' */
  /* S-Function Block: WAKE_INPUT1 */
  {
    rtb_raptor_analog_in1 = ADC_Read_Chan(KEYSW);
  }

  /* RelationalOperator: '<S35>/Relational Operator1' incorporates:
   *  S-Function (raptor_sfun_adjustment): '<S35>/raptor_adjustment1'
   */
  rtb_RelationalOperator1 = (rtb_raptor_analog_in1 > ((uint16_T)
    (WAKE_INPUT1_Threshold_Data())));

  /* S-Function (raptor_sfun_delta_time): '<S43>/raptor_delta_time' */
  {
    rtb_raptor_delta_time = GetDeltaTime_ms((uint32_t*)
      &Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.raptor_delta_time_DWORK1);
  }

  /* MultiPortSwitch: '<S43>/Multiport Switch1' incorporates:
   *  Constant: '<S43>/Constant'
   *  RelationalOperator: '<S47>/FixPt Relational Operator'
   *  Sum: '<S43>/Add'
   *  UnitDelay: '<S43>/Unit Delay'
   *  UnitDelay: '<S47>/Delay Input1'
   */
  if (rtb_RelationalOperator1 ==
      Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.DelayInput1_DSTATE_o)
  {
    rtb_MultiportSwitch1_b = rtb_raptor_delta_time +
      Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay_DSTATE;
  } else {
    rtb_MultiportSwitch1_b = 0U;
  }

  /* End of MultiPortSwitch: '<S43>/Multiport Switch1' */
  /* MultiPortSwitch: '<S48>/Multiport Switch' incorporates:
   *  Constant: '<S48>/Constant'
   *  Logic: '<S43>/Logical Operator2'
   *  Logic: '<S43>/Logical Operator3'
   *  RelationalOperator: '<S43>/Relational Operator1'
   *  S-Function (raptor_sfun_adjustment): '<S43>/raptor_adjustment4'
   */
  if (rtb_RelationalOperator1 || (rtb_MultiportSwitch1_b < (KeySwLoTimeThr_Data())))
  {
    /* MultiPortSwitch: '<S48>/Multiport Switch1' incorporates:
     *  Constant: '<S48>/Constant1'
     *  UnitDelay: '<S48>/Unit Delay'
     */
    if (!rtb_RelationalOperator1) {
      rtb_MultiportSwitch_d =
        Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay_DSTATE_i;
    } else {
      rtb_MultiportSwitch_d = true;
    }

    /* End of MultiPortSwitch: '<S48>/Multiport Switch1' */
  } else {
    rtb_MultiportSwitch_d = false;
  }

  /* End of MultiPortSwitch: '<S48>/Multiport Switch' */

  /* Sum: '<S44>/Add1' incorporates:
   *  Constant: '<S41>/Constant'
   *  Constant: '<S42>/Constant'
   *  Gain: '<S44>/Gain12'
   *  Gain: '<S44>/Gain6'
   *  Gain: '<S44>/Gain8'
   *  Logic: '<S35>/Logical Operator1'
   *  Logic: '<S35>/Logical Operator2'
   *  Logic: '<S35>/Logical Operator4'
   *  Logic: '<S35>/Logical Operator5'
   *  RelationalOperator: '<S41>/Compare'
   *  RelationalOperator: '<S42>/Compare'
   */
  rtb_Add1 = (uint16_T)(((uint32_T)(((rtb_raptor_lin_state_o2 > 0U) &&
    (!rtb_RelationalOperator)) << 2) + (((rtb_raptor_can_state1_o2 > 0U) &&
    (!rtb_RelationalOperator_i)) << 1)) + rtb_MultiportSwitch_d);

  /* S-Function (raptor_sfun_internal_measurement): '<S44>/raptor_internal_measurement' incorporates:
   *  Gain: '<S44>/Gain4'
   *  Gain: '<S44>/Gain5'
   *  S-Function (raptor_sfun_adjustment): '<S44>/raptor_adjustment'
   *  S-Function (raptor_sfun_adjustment): '<S44>/raptor_adjustment1'
   *  S-Function (raptor_sfun_adjustment): '<S44>/raptor_adjustment2'
   *  Sum: '<S44>/Add'
   */
  rtb_raptor_internal_measurement = (uint16_T)(((uint32_T)
    ((GCM48Wake_LIN2_cal_Data()) << 2) + ((GCM48Wake_CAN2_cal_Data()) << 1)) +
    (GCM48Wake_INPUT1_cal_Data()));

  /* S-Function (sfix_bitop): '<S44>/Bitwise AND' */
  rtb_BitwiseAND = (uint16_T)(rtb_Add1 & rtb_raptor_internal_measurement);

  /* RelationalOperator: '<S49>/Compare' incorporates:
   *  Constant: '<S49>/Constant'
   */
  rtb_Compare_n = (rtb_BitwiseAND > 0);

  /* Logic: '<S29>/Logical Operator1' incorporates:
   *  S-Function (raptor_sfun_data_read): '<S29>/raptor_data_read1'
   */
  rtb_KeepOnrequestiscurrentlytrue = (rtb_Compare_n || KeepModuleOn_Data());

  /* MultiPortSwitch: '<S30>/Multiport Switch1' incorporates:
   *  Constant: '<S30>/Constant1'
   */
  if (!rtb_KeepOnrequestiscurrentlytrue) {
    /* MultiPortSwitch: '<S30>/Multiport Switch' incorporates:
     *  Constant: '<S30>/Constant'
     *  Sum: '<S30>/Add'
     *  UnitDelay: '<S30>/Unit Delay1'
     *  UnitDelay: '<S30>/Unit Delay2'
     */
    if (Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay2_DSTATE_j)
    {
      rtb_MultiportSwitch1_p =
        Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay1_DSTATE_a;
    } else {
      rtb_MultiportSwitch1_p =
        Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay1_DSTATE_a
        + 1U;
    }

    /* End of MultiPortSwitch: '<S30>/Multiport Switch' */
  } else {
    rtb_MultiportSwitch1_p = 0U;
  }

  /* End of MultiPortSwitch: '<S30>/Multiport Switch1' */
  /* Logic: '<S30>/Logical Operator3' incorporates:
   *  Logic: '<S30>/Logical Operator4'
   *  RelationalOperator: '<S30>/Relational Operator'
   *  S-Function (raptor_sfun_adjustment): '<S30>/raptor_adjustment'
   */
  rtb_LogicalOperator3_m = ((rtb_MultiportSwitch1_p >=
    (Wake_DlyStopOfFgndTaskTime_Data())) && (!rtb_KeepOnrequestiscurrentlytrue));

  /* MultiPortSwitch: '<S33>/Multiport Switch' incorporates:
   *  Constant: '<S33>/Constant'
   */
  if (!rtb_LogicalOperator3_m) {
    /* MultiPortSwitch: '<S33>/Multiport Switch1' incorporates:
     *  Constant: '<S33>/Constant1'
     *  UnitDelay: '<S33>/Unit Delay'
     */
    if (!rtb_KeepOnrequestiscurrentlytrue) {
      rtb_MultiportSwitch_ko =
        Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay_DSTATE_ik;
    } else {
      rtb_MultiportSwitch_ko = true;
    }

    /* End of MultiPortSwitch: '<S33>/Multiport Switch1' */
  } else {
    rtb_MultiportSwitch_ko = false;
  }

  /* End of MultiPortSwitch: '<S33>/Multiport Switch' */

  /* Logic: '<S29>/Logical Operator4' */
  rtb_KeepOnrequestiscurrentlytrue = (rtb_KeepOnrequestiscurrentlytrue ||
    rtb_MultiportSwitch_ko);

  /* Outputs for Triggered SubSystem: '<S29>/Raise Shutdown Event' incorporates:
   *  TriggerPort: '<S31>/init state = 1 to trigger at wakeup if awoken by a wake source  that we want to ignore'
   */
  if ((!rtb_KeepOnrequestiscurrentlytrue) &&
      (Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE
       != ZERO_ZCSIG)) {
    /* S-Function (raptor_sfun_data_write): '<S31>/raptor_data_write' incorporates:
     *  Constant: '<S31>/Constant'
     */
    FgndTasksStopped_Data() = true;

    /* S-Function (fcgen): '<S31>/Function-Call Generator' incorporates:
     *  SubSystem: '<S31>/raptor_shutdown'
     */
    /* S-Function (raptor_sfun_shutdown): '<S36>/raptor_data_write' */
    /* S-Function Block */
    {
      extern void App_Shutdown(void);
      App_Shutdown();
    }

    /* End of Outputs for S-Function (fcgen): '<S31>/Function-Call Generator' */
  }

  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE
    = rtb_KeepOnrequestiscurrentlytrue;

  /* End of Outputs for SubSystem: '<S29>/Raise Shutdown Event' */

  /* Outputs for Triggered SubSystem: '<S29>/Raise Startup Event' incorporates:
   *  TriggerPort: '<S32>/init state zero so it triggers at wake if wake request is true'
   */
  if (rtb_KeepOnrequestiscurrentlytrue &&
      (Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_PrevZCSigState.RaiseStartupEvent_Trig_ZCE
       != POS_ZCSIG)) {
    /* S-Function (raptor_sfun_measurement): '<S32>/raptor_measurement1' incorporates:
     *  Constant: '<S32>/Constant'
     */
    Wake_Debug_StartupEventRaised_Data() = true;

    /* S-Function (raptor_sfun_data_write): '<S32>/raptor_data_write' incorporates:
     *  Constant: '<S32>/Constant1'
     */
    FgndTasksStopped_Data() = false;

    /* S-Function (fcgen): '<S32>/Function-Call Generator' incorporates:
     *  SubSystem: '<S32>/raptor_startup'
     */
    /* S-Function (raptor_sfun_startup): '<S37>/raptor_data_write' */
    /* S-Function Block */
    {
      extern void App_Startup(void);
      App_Startup();
    }

    /* End of Outputs for S-Function (fcgen): '<S32>/Function-Call Generator' */
  }

  /* Outputs for Triggered SubSystem: '<S29>/Raise Shutdown Event' incorporates:
   *  TriggerPort: '<S31>/init state = 1 to trigger at wakeup if awoken by a wake source  that we want to ignore'
   */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_PrevZCSigState.RaiseStartupEvent_Trig_ZCE
    = rtb_KeepOnrequestiscurrentlytrue;

  /* End of Outputs for SubSystem: '<S29>/Raise Shutdown Event' */
  /* End of Outputs for SubSystem: '<S29>/Raise Startup Event' */

  /* UnitDelay: '<S29>/Unit Delay' */
  rtb_UnitDelay_l =
    Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay_DSTATE_a;

  /* Outputs for Triggered SubSystem: '<S29>/Store EEPROM' incorporates:
   *  TriggerPort: '<S34>/Trigger'
   */
  if ((!Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay_DSTATE_a)
      &&
      (Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_PrevZCSigState.StoreEEPROM_Trig_ZCE
       != ZERO_ZCSIG)) {
    /* S-Function (fcgen): '<S34>/Function-Call Generator' incorporates:
     *  SubSystem: '<S34>/raptor_store_nv'
     */
    /* S-Function (raptor_sfun_store_nv): '<S38>/raptor_data_write' */
    /* S-Function Block */
    {
      App_EE_Store();
    }

    /* End of Outputs for S-Function (fcgen): '<S34>/Function-Call Generator' */
  }

  /* End of UnitDelay: '<S29>/Unit Delay' */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_PrevZCSigState.StoreEEPROM_Trig_ZCE
    = rtb_UnitDelay_l;

  /* End of Outputs for SubSystem: '<S29>/Store EEPROM' */

  /* S-Function (raptor_sfun_nv_status): '<S29>/raptor_sfun_nv_status' */
  /* S-Function Block */
  {
    rtb_raptor_sfun_nv_status = (EEPROM_State_Data() == EE_STORE_IN_PROGESS);
  }

  /* Logic: '<S29>/Logical Operator2' incorporates:
   *  UnitDelay: '<S29>/Unit Delay1'
   */
  rtb_LogicalOperator2_e = (rtb_raptor_sfun_nv_status ||
    rtb_KeepOnrequestiscurrentlytrue ||
    Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay1_DSTATE_o);

  /* S-Function (raptor_sfun_digital_out): '<S29>/raptor_digital_out' */
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

  /* S-Function (raptor_sfun_measurement): '<S30>/raptor_measurement' */
  Wake_DlyStopOfFgndTaskTTmr_Data() = rtb_MultiportSwitch1_p;

  /* S-Function (raptor_sfun_data_write): '<S35>/raptor_data_write1' */
  KeySw_Bgnd_Data() = rtb_MultiportSwitch_d;

  /* S-Function (raptor_sfun_measurement): '<S35>/raptor_measurement1' */
  Wake_INPUT1_Vlts_Data() = rtb_raptor_analog_in1;

  /* S-Function (raptor_sfun_measurement): '<S35>/raptor_measurement2' */
  Wake_LIN2_RxCount_Data() = rtb_raptor_lin_state_o2;

  /* S-Function (raptor_sfun_measurement): '<S35>/raptor_measurement5' */
  Wake_CAN2_RxCount_Data() = rtb_raptor_can_state1_o2;

  /* S-Function (raptor_sfun_measurement): '<S39>/raptor_measurement' */
  Wake_CAN2_SleepDelayTTmr_Data() = rtb_MultiportSwitch1_a;

  /* S-Function (raptor_sfun_measurement): '<S40>/raptor_measurement' */
  Wake_LIN2_SleepDelayTTmr_Data() = rtb_MultiportSwitch1;

  /* S-Function (raptor_sfun_measurement): '<S43>/raptor_measurement3' */
  dt_read_Data() = rtb_raptor_delta_time;

  /* Outputs for Enabled SubSystem: '<S44>/Startup Wake Source' incorporates:
   *  EnablePort: '<S50>/Enable'
   */
  /* UnitDelay: '<S44>/init = 1' */
  if (Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.init1_DSTATE) {
    /* S-Function (raptor_sfun_measurement): '<S50>/raptor_measurement' */
    WakeSource_Startup_Data() = rtb_BitwiseAND;
  }

  /* End of UnitDelay: '<S44>/init = 1' */
  /* End of Outputs for SubSystem: '<S44>/Startup Wake Source' */

  /* S-Function (raptor_sfun_data_write): '<S44>/raptor_data_write1' */
  Wake_AnyWakeSourceActive_Data() = rtb_Compare_n;

  /* S-Function (raptor_sfun_data_write): '<S44>/raptor_data_write2' */
  Wake_SourceBitAndWakeConfigRegister_Data() = rtb_BitwiseAND;

  /* S-Function (raptor_sfun_data_write): '<S44>/raptor_data_write3' */
  WakeSource_Current_Data() = rtb_Add1;

  /* S-Function (raptor_sfun_measurement): '<S44>/raptor_measurement2' */
  WakeConfigRegister_Data() = rtb_raptor_internal_measurement;

  /* S-Function (raptor_sfun_internal_measurement): '<S44>/raptor_internal_measurement' */
  /* S-Function Block: WAKE_SOURCE */
  {
    extern uint8_t Get_Wake_Source( void );
    rtb_raptor_internal_measurement = Get_Wake_Source();
  }

  /* S-Function (raptor_sfun_measurement): '<S44>/raptor_measurement' */
  WakeSource_RaptorIntrnlMeas_Data() = rtb_raptor_internal_measurement;

  /* Update for UnitDelay: '<S46>/Delay Input1' */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.DelayInput1_DSTATE =
    rtb_raptor_lin_state_o2;

  /* Update for UnitDelay: '<S40>/Unit Delay2' */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay2_DSTATE =
    rtb_RelationalOperator;

  /* Update for UnitDelay: '<S40>/Unit Delay1' */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay1_DSTATE =
    rtb_MultiportSwitch1;

  /* Update for UnitDelay: '<S45>/Delay Input1' */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.DelayInput1_DSTATE_j =
    rtb_raptor_can_state1_o2;

  /* Update for UnitDelay: '<S39>/Unit Delay2' */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay2_DSTATE_b =
    rtb_RelationalOperator_i;

  /* Update for UnitDelay: '<S39>/Unit Delay1' */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay1_DSTATE_m =
    rtb_MultiportSwitch1_a;

  /* Update for UnitDelay: '<S47>/Delay Input1' */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.DelayInput1_DSTATE_o =
    rtb_RelationalOperator1;

  /* Update for UnitDelay: '<S43>/Unit Delay' */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay_DSTATE =
    rtb_MultiportSwitch1_b;

  /* Update for UnitDelay: '<S48>/Unit Delay' */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay_DSTATE_i =
    rtb_MultiportSwitch_d;

  /* Update for UnitDelay: '<S30>/Unit Delay2' */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay2_DSTATE_j =
    rtb_LogicalOperator3_m;

  /* Update for UnitDelay: '<S30>/Unit Delay1' */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay1_DSTATE_a =
    rtb_MultiportSwitch1_p;

  /* Update for UnitDelay: '<S33>/Unit Delay' */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay_DSTATE_ik =
    rtb_MultiportSwitch_ko;

  /* Update for UnitDelay: '<S29>/Unit Delay' */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay_DSTATE_a =
    rtb_KeepOnrequestiscurrentlytrue;

  /* Update for UnitDelay: '<S29>/Unit Delay1' */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.UnitDelay1_DSTATE_o =
    rtb_UnitDelay_l;

  /* Update for UnitDelay: '<S44>/init = 1' incorporates:
   *  Constant: '<S44>/Constant'
   */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork.init1_DSTATE = false;
}

/* System initialize for function-call system: '<Root>/Foreground' */
void Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_Foreground_Init(void)
{
  /* Start for S-Function (raptor_sfun_analog_in): '<S7>/raptor_analog_in' */

  /* S-Function Block: AN7 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S7>/raptor_analog_in1' */

  /* S-Function Block: AN8 */
  {
  }

  /* Start for S-Function (raptor_sfun_digital_in): '<S28>/raptor_digital_in' */

  /* S-Function Block: DG1 */
  {
    extern void din_pad_config(E_DIGITAL_INPUT din);
    din_pad_config(DG1_DG);
  }

  /* Start for S-Function (raptor_sfun_digital_in): '<S28>/raptor_digital_in1' */

  /* S-Function Block: DG2 */
  {
    extern void din_pad_config(E_DIGITAL_INPUT din);
    din_pad_config(DG2_DG);
  }
}

/* Enable for function-call system: '<Root>/Foreground' */
void Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_Foreground_Enable(void)
{
  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S7>/raptor_can_txmsg' */
  /* Level2 S-Function Block: '<S7>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_1092__0067(0U);

  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S9>/raptor_can_txmsg4' */
  /* Level2 S-Function Block: '<S9>/raptor_can_txmsg4' (raptor_sfun_can_txmsg) */
  can_set_period_1156__0067(0U);

  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S9>/raptor_can_txmsg3' */
  /* Level2 S-Function Block: '<S9>/raptor_can_txmsg3' (raptor_sfun_can_txmsg) */
  can_set_period_1155__007(0U);

  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S10>/raptor_can_txmsg' */
  /* Level2 S-Function Block: '<S10>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_1242__0067(0U);

  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S11>/raptor_can_txmsg' incorporates:
   *  Constant: '<S11>/Constant'
   */
  /* Level2 S-Function Block: '<S11>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_1530__007(0U);

  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S11>/raptor_can_txmsg1' incorporates:
   *  Constant: '<S11>/Constant'
   */
  /* Level2 S-Function Block: '<S11>/raptor_can_txmsg1' (raptor_sfun_can_txmsg) */
  can_set_period_1531__0067(0U);

  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S28>/raptor_can_txmsg' */
  /* Level2 S-Function Block: '<S28>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_1569__0012(0U);
}

/* Disable for function-call system: '<Root>/Foreground' */
void Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_Foreground_Disable(void)
{
  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S7>/raptor_can_txmsg' */
  /* Level2 S-Function Block: '<S7>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_1092__0067(0);

  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S9>/raptor_can_txmsg4' */
  /* Level2 S-Function Block: '<S9>/raptor_can_txmsg4' (raptor_sfun_can_txmsg) */
  can_set_period_1156__0067(0);

  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S9>/raptor_can_txmsg3' */
  /* Level2 S-Function Block: '<S9>/raptor_can_txmsg3' (raptor_sfun_can_txmsg) */
  can_set_period_1155__007(0);

  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S10>/raptor_can_txmsg' */
  /* Level2 S-Function Block: '<S10>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_1242__0067(0);

  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S11>/raptor_can_txmsg' incorporates:
   *  Constant: '<S11>/Constant'
   */
  /* Level2 S-Function Block: '<S11>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_1530__007(0);

  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S11>/raptor_can_txmsg1' incorporates:
   *  Constant: '<S11>/Constant'
   */
  /* Level2 S-Function Block: '<S11>/raptor_can_txmsg1' (raptor_sfun_can_txmsg) */
  can_set_period_1531__0067(0);

  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S28>/raptor_can_txmsg' */
  /* Level2 S-Function Block: '<S28>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_1569__0012(0);
}

/* Output and update for function-call system: '<Root>/Foreground' */
void Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_Foreground(void)
{
  /* local block i/o variables */
  real_T rtb_raptor_can_rxmsg_o2;
  real_T rtb_raptor_can_rxmsg_o3;
  real_T rtb_Merge_j;
  real_T rtb_Merge_d;
  uint16_T rtb_raptor_can_rxmsg_o1;
  uint16_T rtb_raptor_can_rxmsg2_o1;
  uint16_T rtb_raptor_can_rxmsg1_o1;
  boolean_T rtb_raptor_digital_in;
  boolean_T rtb_raptor_digital_in1;
  real_T rtb_Gain;
  real_T rtb_Gain2;

  /* S-Function (raptor_sfun_can_txmsg): '<S7>/raptor_can_txmsg' incorporates:
   *  S-Function (raptor_sfun_analog_in): '<S7>/raptor_analog_in'
   *  S-Function (raptor_sfun_analog_in): '<S7>/raptor_analog_in1'
   */

  /* S-Function Block:<S7>/raptor_can_txmsg */
  {
    uint8_T data[8U] = { 0, 0, 0, 0, 0, 0, 0, 0, };

    uint32_T temp;
    uint8_T temp_shift;

    /* Signal: FrontUltrasonic */
    /* FrontUltrasonic - StartBit: 0U, BitLength: 16U, Endian: 0U */

    /* signal type is unsigned */

    /* Optimize the checks out since both the min and max are within the limits of this particular data type */
    {
      temp = (uint32_T)((((uint16_T)ADC_Read_Chan(AN7))));
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[0U] |= temp_shift;
    temp_shift = (uint8_T)(temp >> 8);
    data[1U] |= temp_shift;

    /* Signal: RearUltrasonic  */
    /* RearUltrasonic  - StartBit: 16U, BitLength: 16U, Endian: 0U */

    /* signal type is unsigned */

    /* Optimize the checks out since both the min and max are within the limits of this particular data type */
    {
      temp = (uint32_T)((((uint16_T)ADC_Read_Chan(AN8))));
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[2U] |= temp_shift;
    temp_shift = (uint8_T)(temp >> 8);
    data[3U] |= temp_shift;
    can_set_period_1092__0067(0U);
    can_send_1092__0067(1305U & 0x7FF, 0, 8U, &data[0]);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S8>/raptor_can_rxmsg' */

  /* S-Function Block:<S8>/raptor_can_rxmsg */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint32_T temp;
    can_get_1556__0012(&rtb_raptor_can_rxmsg_o1, NULL, NULL, &data[0], 8);

    /* Signal: Channel_1 */
    temp = 0;
    temp |= ((uint32_T)data[0U]) ;
    temp |= ((uint32_T)data[1U]) << 8;
    rtb_raptor_can_rxmsg_o2 = (((real_T) temp ) + (real_T)-1230.0);

    /* Signal: Channel_2 */
    temp = 0;
    temp |= ((uint32_T)data[2U]) ;
    temp |= ((uint32_T)data[3U]) << 8;
    rtb_raptor_can_rxmsg_o3 = (((real_T) temp ) + (real_T)-1230.0);

    /* Signal: Channel_3 */
    temp = 0;
    temp |= ((uint32_T)data[4U]) ;
    temp |= ((uint32_T)data[5U]) << 8;
    rtb_Merge_d = (((real_T) temp ) + (real_T)-1230.0);

    /* Signal: Channel_4 */
    temp = 0;
    temp |= ((uint32_T)data[6U]) ;
    temp |= ((uint32_T)data[7U]) << 8;
    rtb_Merge_j = (((real_T) temp ) + (real_T)-1230.0);
  }

  /* Gain: '<S9>/Gain2' */
  rtb_Gain2 = 51.0 * rtb_Merge_d;

  /* S-Function (raptor_sfun_can_txmsg): '<S9>/raptor_can_txmsg4' */

  /* S-Function Block:<S9>/raptor_can_txmsg4 */
  {
    uint8_T data[2U] = { 0, 0, };

    uint32_T temp;
    uint8_T temp_shift;

    /* Signal: position_send2 */
    /* position_send2 - StartBit: 0U, BitLength: 16U, Endian: 0U */

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
    can_set_period_1156__0067(0U);
    can_send_1156__0067(31U & 0x7FF, 0, 2U, &data[0]);
  }

  /* Gain: '<S9>/Gain1' */
  rtb_Gain2 = 51.0 * rtb_Merge_j;

  /* S-Function (raptor_sfun_can_txmsg): '<S9>/raptor_can_txmsg3' */

  /* S-Function Block:<S9>/raptor_can_txmsg3 */
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
    can_set_period_1155__007(0U);
    can_send_1155__007(32U & 0x7FF, 0, 2U, &data[0]);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S8>/raptor_can_rxmsg2' */

  /* S-Function Block:<S8>/raptor_can_rxmsg2 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint32_T temp;
    can_get_1558__0012(&rtb_raptor_can_rxmsg2_o1, NULL, NULL, &data[0], 8);

    /* Signal: Channel_10     */
    temp = 0;
    temp |= ((uint32_T)data[0U]) ;
    temp |= ((uint32_T)data[1U]) << 8;
    rtb_Merge_j = (((real_T) temp ) + (real_T)-1230.0);

    /* Signal: Channel_9      */
    temp = 0;
    temp |= ((uint32_T)data[2U]) ;
    temp |= ((uint32_T)data[3U]) << 8;
    rtb_Merge_d = (((real_T) temp ) + (real_T)-1230.0);

    /* Signal: NewSignal_0007 not connected */

    /* Signal: NewSignal_0008 not connected */
  }

  /* Outputs for IfAction SubSystem: '<S13>/If Action Subsystem1' incorporates:
   *  ActionPort: '<S17>/Action Port'
   */
  /* Outputs for IfAction SubSystem: '<S13>/If Action Subsystem' incorporates:
   *  ActionPort: '<S16>/Action Port'
   */
  /* If: '<S13>/If' incorporates:
   *  Inport: '<S16>/Xa'
   *  Inport: '<S17>/Xb'
   */
  rtb_Gain2 = (rtb_Merge_d > 250.0);

  /* End of Outputs for SubSystem: '<S13>/If Action Subsystem' */
  /* End of Outputs for SubSystem: '<S13>/If Action Subsystem1' */

  /* Outputs for IfAction SubSystem: '<S12>/If Action Subsystem1' incorporates:
   *  ActionPort: '<S15>/Action Port'
   */
  /* Outputs for IfAction SubSystem: '<S12>/If Action Subsystem' incorporates:
   *  ActionPort: '<S14>/Action Port'
   */
  /* If: '<S12>/If' incorporates:
   *  Inport: '<S14>/Xa'
   *  Inport: '<S15>/Xb'
   *  Merge: '<S19>/Merge'
   */
  rtb_Merge_d = (rtb_Merge_d > 1200.0);

  /* End of Outputs for SubSystem: '<S12>/If Action Subsystem' */
  /* End of Outputs for SubSystem: '<S12>/If Action Subsystem1' */

  /* S-Function (raptor_sfun_can_txmsg): '<S10>/raptor_can_txmsg' */

  /* S-Function Block:<S10>/raptor_can_txmsg */
  {
    uint8_T data[4U] = { 0, 0, 0, 0, };

    uint32_T temp;
    uint8_T temp_shift;

    /* Signal: hsc_bcm_enable      */
    /* hsc_bcm_enable      - StartBit: 0U, BitLength: 1U, Endian: 1U */

    /* signal type is unsigned */
    if (rtb_Gain2 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_Gain2 > 1.0000000000F)
      temp = (uint32_T)1U;
    else {
      if ((real_T)rtb_Gain2 < 0)
        temp = (uint32_T)(int32_T)((rtb_Gain2));
      else
        temp = (uint32_T)((rtb_Gain2));
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
    if (rtb_Merge_d < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_Merge_d > 1.0000000000F)
      temp = (uint32_T)1U;
    else {
      if ((real_T)rtb_Merge_d < 0)
        temp = (uint32_T)(int32_T)((rtb_Merge_d));
      else
        temp = (uint32_T)((rtb_Merge_d));
    }

    temp_shift = (uint8_T)(temp << 2);
    temp_shift &= ((uint8_T)4U);
    data[0U] |= temp_shift;
    can_set_period_1242__0067(0U);
    can_send_1242__0067(1024U & 0x7FF, 0, 4U, &data[0]);
  }

  /* Outputs for IfAction SubSystem: '<S20>/If Action Subsystem1' incorporates:
   *  ActionPort: '<S27>/Action Port'
   */
  /* Outputs for IfAction SubSystem: '<S20>/If Action Subsystem' incorporates:
   *  ActionPort: '<S26>/Action Port'
   */
  /* If: '<S20>/If' incorporates:
   *  Inport: '<S26>/Xa'
   *  Inport: '<S27>/Xb'
   */
  rtb_Gain2 = (rtb_Merge_j > 250.0);

  /* End of Outputs for SubSystem: '<S20>/If Action Subsystem' */
  /* End of Outputs for SubSystem: '<S20>/If Action Subsystem1' */

  /* Outputs for IfAction SubSystem: '<S18>/If Action Subsystem1' incorporates:
   *  ActionPort: '<S22>/Action Port'
   */
  /* Outputs for IfAction SubSystem: '<S18>/If Action Subsystem' incorporates:
   *  ActionPort: '<S21>/Action Port'
   */
  /* If: '<S18>/If' incorporates:
   *  Inport: '<S21>/Xa'
   *  Inport: '<S22>/Xb'
   *  Merge: '<S18>/Merge'
   */
  rtb_Merge_j = (rtb_Merge_j > 1200.0);

  /* End of Outputs for SubSystem: '<S18>/If Action Subsystem' */
  /* End of Outputs for SubSystem: '<S18>/If Action Subsystem1' */

  /* S-Function (raptor_sfun_can_rxmsg): '<S8>/raptor_can_rxmsg1' */

  /* S-Function Block:<S8>/raptor_can_rxmsg1 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint32_T temp;
    can_get_1557__0012(&rtb_raptor_can_rxmsg1_o1, NULL, NULL, &data[0], 8);

    /* Signal: Channel_5 */
    temp = 0;
    temp |= ((uint32_T)data[0U]) ;
    temp |= ((uint32_T)data[1U]) << 8;
    rtb_Merge_d = (((real_T) temp ) + (real_T)-1230.0);

    /* Signal: Channel_6 not connected */

    /* Signal: Channel_7 not connected */

    /* Signal: Channel_8 not connected */
  }

  /* If: '<S19>/If' */
  if (rtb_Merge_d > 1200.0) {
    /* Outputs for IfAction SubSystem: '<S19>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S24>/Action Port'
     */
    /* Merge: '<S19>/Merge' incorporates:
     *  Constant: '<S19>/Constant2'
     *  Inport: '<S24>/Xb'
     */
    rtb_Merge_d = 1.0;

    /* End of Outputs for SubSystem: '<S19>/If Action Subsystem3' */
  } else if (rtb_Merge_d > 250.0) {
    /* Outputs for IfAction SubSystem: '<S19>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S23>/Action Port'
     */
    /* Merge: '<S19>/Merge' incorporates:
     *  Constant: '<S19>/Constant1'
     *  Inport: '<S23>/Xb'
     */
    rtb_Merge_d = 0.0;

    /* End of Outputs for SubSystem: '<S19>/If Action Subsystem2' */
  } else {
    /* Outputs for IfAction SubSystem: '<S19>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S25>/Action Port'
     */
    /* Merge: '<S19>/Merge' incorporates:
     *  Constant: '<S19>/Constant3'
     *  Inport: '<S25>/Xb'
     */
    rtb_Merge_d = -1.0;

    /* End of Outputs for SubSystem: '<S19>/If Action Subsystem4' */
  }

  /* End of If: '<S19>/If' */

  /* Gain: '<S11>/Gain' incorporates:
   *  Product: '<S11>/Product1'
   */
  rtb_Gain = rtb_raptor_can_rxmsg_o2 * rtb_Merge_d * -2.0;

  /* S-Function (raptor_sfun_can_txmsg): '<S11>/raptor_can_txmsg' incorporates:
   *  Constant: '<S11>/Constant'
   */

  /* S-Function Block:<S11>/raptor_can_txmsg */
  {
    uint8_T data[8U] = { 0, 0, 0, 0, 0, 0, 0, 0, };

    uint32_T temp;
    uint8_T temp_shift;

    /* Signal: I1_CommandAcCurrent    */
    /* I1_CommandAcCurrent    - StartBit: 32U, BitLength: 16U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < -1600.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 1676.7500000000F)
      temp = (uint32_T)65535U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0- -1600.0f) * 20.0f);
      else
        temp = (uint32_T)((0.0- -1600.0f) * 20.0f);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[4U] |= temp_shift;
    temp_shift = (uint8_T)(temp >> 8);
    data[5U] |= temp_shift;

    /* Signal: I1_CommandContact      */
    /* I1_CommandContact      - StartBit: 6U, BitLength: 2U, Endian: 0U */

    /* signal type is unsigned */
    if (rtb_Gain2 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_Gain2 > 3.0000000000F)
      temp = (uint32_T)3U;
    else {
      if ((real_T)rtb_Gain2 < 0)
        temp = (uint32_T)(int32_T)((rtb_Gain2));
      else
        temp = (uint32_T)((rtb_Gain2));
    }

    temp_shift = (uint8_T)(temp << 6);
    temp_shift &= ((uint8_T)192U);
    data[0U] |= temp_shift;

    /* Signal: I1_CommandEnable       */
    /* I1_CommandEnable       - StartBit: 0U, BitLength: 2U, Endian: 0U */

    /* signal type is unsigned */
    if (rtb_Merge_j < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_Merge_j > 3.0000000000F)
      temp = (uint32_T)3U;
    else {
      if ((real_T)rtb_Merge_j < 0)
        temp = (uint32_T)(int32_T)((rtb_Merge_j));
      else
        temp = (uint32_T)((rtb_Merge_j));
    }

    temp_shift = (uint8_T)(temp >> 0);
    temp_shift &= ((uint8_T)3U);
    data[0U] |= temp_shift;

    /* Signal: I1_CommandFan          */
    /* I1_CommandFan          - StartBit: 8U, BitLength: 2U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 3.0000000000F)
      temp = (uint32_T)3U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0));
      else
        temp = (uint32_T)((0.0));
    }

    temp_shift = (uint8_T)(temp >> 0);
    temp_shift &= ((uint8_T)3U);
    data[1U] |= temp_shift;

    /* Signal: I1_CommandSpeed        */
    /* I1_CommandSpeed        - StartBit: 16U, BitLength: 16U, Endian: 0U */

    /* signal type is unsigned */
    if (rtb_Gain < -8032.7500000000F)
      temp = (uint32_T)0U;
    else if (rtb_Gain > 8351.0000000000F)
      temp = (uint32_T)65535U;
    else {
      if ((real_T)rtb_Gain < 0)
        temp = (uint32_T)(int32_T)((rtb_Gain- -8032.75f) * 4.0f);
      else
        temp = (uint32_T)((rtb_Gain- -8032.75f) * 4.0f);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[2U] |= temp_shift;
    temp_shift = (uint8_T)(temp >> 8);
    data[3U] |= temp_shift;

    /* Signal: I1_CommandVoltage      */
    /* I1_CommandVoltage      - StartBit: 48U, BitLength: 16U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 3276.7500000000F)
      temp = (uint32_T)65535U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0) * 20.0f);
      else
        temp = (uint32_T)((0.0) * 20.0f);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[6U] |= temp_shift;
    temp_shift = (uint8_T)(temp >> 8);
    data[7U] |= temp_shift;

    /* Signal: I1_EnableDebugMessages */
    /* I1_EnableDebugMessages - StartBit: 10U, BitLength: 2U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 3.0000000000F)
      temp = (uint32_T)3U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0));
      else
        temp = (uint32_T)((0.0));
    }

    temp_shift = (uint8_T)(temp << 2);
    temp_shift &= ((uint8_T)12U);
    data[1U] |= temp_shift;

    /* Signal: I1_ReqControlMode      */
    /* I1_ReqControlMode      - StartBit: 2U, BitLength: 4U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 15.0000000000F)
      temp = (uint32_T)15U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0));
      else
        temp = (uint32_T)((0.0));
    }

    temp_shift = (uint8_T)(temp << 2);
    temp_shift &= ((uint8_T)60U);
    data[0U] |= temp_shift;
    can_set_period_1530__007(0U);
    can_send_1530__007(218038727U & 0x1FFFFFFF, 1, 8U, &data[0]);
  }

  /* Gain: '<S11>/Gain1' incorporates:
   *  Product: '<S11>/Product'
   */
  rtb_Gain = rtb_raptor_can_rxmsg_o3 * rtb_Merge_d * 2.0;

  /* S-Function (raptor_sfun_can_txmsg): '<S11>/raptor_can_txmsg1' incorporates:
   *  Constant: '<S11>/Constant'
   */

  /* S-Function Block:<S11>/raptor_can_txmsg1 */
  {
    uint8_T data[8U] = { 0, 0, 0, 0, 0, 0, 0, 0, };

    uint32_T temp;
    uint8_T temp_shift;

    /* Signal: I2_CommandAcCurrent    */
    /* I2_CommandAcCurrent    - StartBit: 32U, BitLength: 16U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < -1600.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 1676.7500000000F)
      temp = (uint32_T)65535U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0- -1600.0f) * 20.0f);
      else
        temp = (uint32_T)((0.0- -1600.0f) * 20.0f);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[4U] |= temp_shift;
    temp_shift = (uint8_T)(temp >> 8);
    data[5U] |= temp_shift;

    /* Signal: I2_CommandContact      */
    /* I2_CommandContact      - StartBit: 6U, BitLength: 2U, Endian: 0U */

    /* signal type is unsigned */
    if (rtb_Gain2 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_Gain2 > 3.0000000000F)
      temp = (uint32_T)3U;
    else {
      if ((real_T)rtb_Gain2 < 0)
        temp = (uint32_T)(int32_T)((rtb_Gain2));
      else
        temp = (uint32_T)((rtb_Gain2));
    }

    temp_shift = (uint8_T)(temp << 6);
    temp_shift &= ((uint8_T)192U);
    data[0U] |= temp_shift;

    /* Signal: I2_CommandEnable       */
    /* I2_CommandEnable       - StartBit: 0U, BitLength: 2U, Endian: 0U */

    /* signal type is unsigned */
    if (rtb_Merge_j < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_Merge_j > 3.0000000000F)
      temp = (uint32_T)3U;
    else {
      if ((real_T)rtb_Merge_j < 0)
        temp = (uint32_T)(int32_T)((rtb_Merge_j));
      else
        temp = (uint32_T)((rtb_Merge_j));
    }

    temp_shift = (uint8_T)(temp >> 0);
    temp_shift &= ((uint8_T)3U);
    data[0U] |= temp_shift;

    /* Signal: I2_CommandFan          */
    /* I2_CommandFan          - StartBit: 8U, BitLength: 2U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 3.0000000000F)
      temp = (uint32_T)3U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0));
      else
        temp = (uint32_T)((0.0));
    }

    temp_shift = (uint8_T)(temp >> 0);
    temp_shift &= ((uint8_T)3U);
    data[1U] |= temp_shift;

    /* Signal: I2_CommandSpeed        */
    /* I2_CommandSpeed        - StartBit: 16U, BitLength: 16U, Endian: 0U */

    /* signal type is unsigned */
    if (rtb_Gain < -8032.7500000000F)
      temp = (uint32_T)0U;
    else if (rtb_Gain > 8351.0000000000F)
      temp = (uint32_T)65535U;
    else {
      if ((real_T)rtb_Gain < 0)
        temp = (uint32_T)(int32_T)((rtb_Gain- -8032.75f) * 4.0f);
      else
        temp = (uint32_T)((rtb_Gain- -8032.75f) * 4.0f);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[2U] |= temp_shift;
    temp_shift = (uint8_T)(temp >> 8);
    data[3U] |= temp_shift;

    /* Signal: I2_CommandVoltage      */
    /* I2_CommandVoltage      - StartBit: 48U, BitLength: 16U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 3276.7500000000F)
      temp = (uint32_T)65535U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0) * 20.0f);
      else
        temp = (uint32_T)((0.0) * 20.0f);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[6U] |= temp_shift;
    temp_shift = (uint8_T)(temp >> 8);
    data[7U] |= temp_shift;

    /* Signal: I2_EnableDebugMessages */
    /* I2_EnableDebugMessages - StartBit: 10U, BitLength: 2U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 3.0000000000F)
      temp = (uint32_T)3U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0));
      else
        temp = (uint32_T)((0.0));
    }

    temp_shift = (uint8_T)(temp << 2);
    temp_shift &= ((uint8_T)12U);
    data[1U] |= temp_shift;

    /* Signal: I2_ReqControlMode      */
    /* I2_ReqControlMode      - StartBit: 2U, BitLength: 4U, Endian: 0U */

    /* signal type is unsigned */
    if (0.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 15.0000000000F)
      temp = (uint32_T)15U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0));
      else
        temp = (uint32_T)((0.0));
    }

    temp_shift = (uint8_T)(temp << 2);
    temp_shift &= ((uint8_T)60U);
    data[0U] |= temp_shift;
    can_set_period_1531__0067(0U);
    can_send_1531__0067(218042823U & 0x1FFFFFFF, 1, 8U, &data[0]);
  }

  /* S-Function (raptor_sfun_digital_in): '<S28>/raptor_digital_in' */
  /* S-Function Block: DG1 */
  {
    rtb_raptor_digital_in = (boolean_T) Digital_Input_Read_Chan(DG1_DG);
  }

  /* S-Function (raptor_sfun_digital_in): '<S28>/raptor_digital_in1' */
  /* S-Function Block: DG2 */
  {
    rtb_raptor_digital_in1 = (boolean_T) Digital_Input_Read_Chan(DG2_DG);
  }

  /* S-Function (raptor_sfun_can_txmsg): '<S28>/raptor_can_txmsg' */

  /* S-Function Block:<S28>/raptor_can_txmsg */
  {
    uint8_T data[8U] = { 0, 0, 0, 0, 0, 0, 0, 0, };

    uint32_T temp;
    uint8_T temp_shift;

    /* Signal: Water_Sensor_1 */
    /* Water_Sensor_1 - StartBit: 0U, BitLength: 1U, Endian: 0U */

    /* signal type is unsigned */

    /* Optimize the checks out since both the min and max are within the limits of this particular data type */
    {
      temp = (uint32_T)((rtb_raptor_digital_in));
    }

    temp_shift = (uint8_T)(temp >> 0);
    temp_shift &= ((uint8_T)1U);
    data[0U] |= temp_shift;

    /* Signal: Water_Sensor_2 */
    /* Water_Sensor_2 - StartBit: 1U, BitLength: 1U, Endian: 0U */

    /* signal type is unsigned */

    /* Optimize the checks out since both the min and max are within the limits of this particular data type */
    {
      temp = (uint32_T)((rtb_raptor_digital_in1));
    }

    temp_shift = (uint8_T)(temp << 1);
    temp_shift &= ((uint8_T)2U);
    data[0U] |= temp_shift;
    can_set_period_1569__0012(0U);
    can_send_1569__0012(1306U & 0x7FF, 0, 8U, &data[0]);
  }
}

/* Model step function */
void Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_step(void)
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
void Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_initialize(void)
{
  /* Registration code */

  /* states (dwork) */
  (void) memset((void *)&Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_DWork, 0,
                sizeof(D_Work_Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode));

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

  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_PrevZCSigState.StoreEEPROM_Trig_ZCE
    = ZERO_ZCSIG;

  /* SystemInitialize for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' incorporates:
   *  SubSystem: '<Root>/Foreground'
   */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_Foreground_Init();

  /* End of SystemInitialize for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' */

  /* SystemInitialize for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' incorporates:
   *  SubSystem: '<S2>/Background'
   */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_Background_Init();

  /* End of SystemInitialize for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' */

  /* Enable for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' */

  /* Level2 S-Function Block: '<Root>/raptor_timed_trigger' (raptor_sfun_timed_trigger) */

  /* Enable Subsystem */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_Foreground_Enable();

  /* End of Enable for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' */

  /* Enable for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' incorporates:
   *  SubSystem: '<Root>/Foreground'
   */
  Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_Foreground_Enable();

  /* End of Enable for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' */

  /* Enable for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' */

  /* Level2 S-Function Block: '<S2>/raptor_timed_trigger' (raptor_sfun_timed_trigger) */

  /* Enable Subsystem */

  /* End of Enable for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' */
}

/* Model terminate function */
void Lightning_McSeas_VCU_OLD_CONTROLLER_Speed_Mode_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
