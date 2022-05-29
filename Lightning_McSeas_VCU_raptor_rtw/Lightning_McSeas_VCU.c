/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Lightning_McSeas_VCU.c
 *
 * Code generated for Simulink model 'Lightning_McSeas_VCU'.
 *
 * Model version                  : 6.154
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Thu May 26 11:24:05 2022
 *
 * Target selection: raptor.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Lightning_McSeas_VCU.h"
#include "Lightning_McSeas_VCU_private.h"

/* Block states (default storage) */
D_Work_Lightning_McSeas_VCU Lightning_McSeas_VCU_DWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates_Lightning_McSeas_VCU Lightning_McSeas_VCU_PrevZCSigState;

/* System initialize for function-call system: '<S2>/Background' */
void Lightning_McSeas_VCU_Background_Init(void)
{
  /* Start for S-Function (raptor_sfun_analog_in): '<S33>/raptor_analog_in1' */

  /* S-Function Block: WAKE_INPUT1 */
  {
  }

  /* Start for S-Function (raptor_sfun_digital_out): '<S27>/raptor_digital_out' */

  /* S-Function Block: POWER_HOLD */
  {
  }

  /* Start for S-Function (raptor_sfun_internal_measurement): '<S42>/raptor_internal_measurement' */

  /* S-Function Block: WAKE_SOURCE */
  {
  }

  /* InitializeConditions for S-Function (raptor_sfun_delta_time): '<S41>/raptor_delta_time' */
  Lightning_McSeas_VCU_DWork.raptor_delta_time_DWORK1 = ticks();

  /* InitializeConditions for UnitDelay: '<S41>/Unit Delay' */
  Lightning_McSeas_VCU_DWork.UnitDelay_DSTATE = 1U;

  /* InitializeConditions for UnitDelay: '<S42>/init = 1' */
  Lightning_McSeas_VCU_DWork.init1_DSTATE = true;
  Lightning_McSeas_VCU_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE = POS_ZCSIG;

  /* End of SystemInitialize for SubSystem: '<S27>/Raise Shutdown Event' */
  Lightning_McSeas_VCU_PrevZCSigState.RaiseStartupEvent_Trig_ZCE = ZERO_ZCSIG;

  /* End of SystemInitialize for SubSystem: '<S27>/Raise Startup Event' */
}

/* System reset for function-call system: '<S2>/Background' */
void Lightning_McSeas_VCU_Background_Reset(void)
{
  /* InitializeConditions for S-Function (raptor_sfun_delta_time): '<S41>/raptor_delta_time' */
  Lightning_McSeas_VCU_DWork.raptor_delta_time_DWORK1 = ticks();

  /* InitializeConditions for UnitDelay: '<S41>/Unit Delay' */
  Lightning_McSeas_VCU_DWork.UnitDelay_DSTATE = 1U;

  /* InitializeConditions for UnitDelay: '<S42>/init = 1' */
  Lightning_McSeas_VCU_DWork.init1_DSTATE = true;

  /* SystemReset for Triggered SubSystem: '<S27>/Raise Shutdown Event' */
  Lightning_McSeas_VCU_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE = POS_ZCSIG;

  /* End of SystemReset for SubSystem: '<S27>/Raise Shutdown Event' */

  /* SystemReset for Triggered SubSystem: '<S27>/Raise Startup Event' */
  Lightning_McSeas_VCU_PrevZCSigState.RaiseStartupEvent_Trig_ZCE = ZERO_ZCSIG;

  /* End of SystemReset for SubSystem: '<S27>/Raise Startup Event' */
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

  /* S-Function (raptor_sfun_lin_state): '<S33>/raptor_lin_state' */
  /* S-Function Block: <S33>/raptor_lin_state */
  {
    rtb_raptor_lin_state_o1 = LIN2_GetStatus(LIN2_LIN2_NODE, (uint32_t *)
      &rtb_raptor_lin_state_o3, (uint32_t *)&rtb_raptor_lin_state_o2);
  }

  /* RelationalOperator: '<S44>/Relational Operator' incorporates:
   *  UnitDelay: '<S44>/Delay Input1'
   */
  rtb_RelationalOperator = (rtb_raptor_lin_state_o2 ==
    Lightning_McSeas_VCU_DWork.DelayInput1_DSTATE);

  /* Logic: '<S33>/Logical Operator3' */
  rtb_Compare_n = !rtb_RelationalOperator;

  /* MultiPortSwitch: '<S38>/Multiport Switch1' incorporates:
   *  Constant: '<S38>/Constant1'
   */
  if (!rtb_Compare_n) {
    /* MultiPortSwitch: '<S38>/Multiport Switch' incorporates:
     *  Constant: '<S38>/Constant'
     *  Logic: '<S38>/Logical Operator1'
     *  Sum: '<S38>/Add'
     *  UnitDelay: '<S38>/Unit Delay1'
     *  UnitDelay: '<S38>/Unit Delay2'
     */
    if (Lightning_McSeas_VCU_DWork.UnitDelay2_DSTATE || (!rtb_RelationalOperator))
    {
      rtb_MultiportSwitch1 = Lightning_McSeas_VCU_DWork.UnitDelay1_DSTATE;
    } else {
      rtb_MultiportSwitch1 = Lightning_McSeas_VCU_DWork.UnitDelay1_DSTATE + 1U;
    }

    /* End of MultiPortSwitch: '<S38>/Multiport Switch' */
  } else {
    rtb_MultiportSwitch1 = 0U;
  }

  /* End of MultiPortSwitch: '<S38>/Multiport Switch1' */
  /* Logic: '<S38>/Logical Operator3' incorporates:
   *  Logic: '<S38>/Logical Operator4'
   *  RelationalOperator: '<S38>/Relational Operator'
   *  S-Function (raptor_sfun_adjustment): '<S38>/raptor_adjustment'
   */
  rtb_RelationalOperator = ((rtb_MultiportSwitch1 >=
    (Wake_LIN2_SleepDelayTime_Data())) && (!rtb_Compare_n));

  /* S-Function (raptor_sfun_can_state): '<S33>/raptor_can_state1' */
  /* S-Function Block: <S33>/raptor_can_state1 */
  UNUSED_VAR(rtb_raptor_can_state1_o1);
  get_CAN_bus_state(CAN2, (uint32_t*)&rtb_raptor_can_state1_o2, (uint32_t*)
                    &rtb_raptor_can_state1_o3);

  /* Logic: '<S33>/Logical Operator' incorporates:
   *  Logic: '<S37>/Logical Operator1'
   *  MultiPortSwitch: '<S37>/Multiport Switch1'
   *  RelationalOperator: '<S43>/Relational Operator'
   *  UnitDelay: '<S43>/Delay Input1'
   */
  rtb_Compare_n = (rtb_raptor_can_state1_o2 !=
                   Lightning_McSeas_VCU_DWork.DelayInput1_DSTATE_j);

  /* MultiPortSwitch: '<S37>/Multiport Switch1' incorporates:
   *  Constant: '<S37>/Constant1'
   */
  if (!rtb_Compare_n) {
    /* MultiPortSwitch: '<S37>/Multiport Switch' incorporates:
     *  Constant: '<S37>/Constant'
     *  Logic: '<S37>/Logical Operator1'
     *  Sum: '<S37>/Add'
     *  UnitDelay: '<S37>/Unit Delay1'
     *  UnitDelay: '<S37>/Unit Delay2'
     */
    if (Lightning_McSeas_VCU_DWork.UnitDelay2_DSTATE_b || rtb_Compare_n) {
      rtb_MultiportSwitch1_a = Lightning_McSeas_VCU_DWork.UnitDelay1_DSTATE_m;
    } else {
      rtb_MultiportSwitch1_a = Lightning_McSeas_VCU_DWork.UnitDelay1_DSTATE_m +
        1U;
    }

    /* End of MultiPortSwitch: '<S37>/Multiport Switch' */
  } else {
    rtb_MultiportSwitch1_a = 0U;
  }

  /* Logic: '<S37>/Logical Operator3' incorporates:
   *  Logic: '<S37>/Logical Operator4'
   *  RelationalOperator: '<S37>/Relational Operator'
   *  S-Function (raptor_sfun_adjustment): '<S37>/raptor_adjustment'
   */
  rtb_RelationalOperator_i = ((rtb_MultiportSwitch1_a >=
    (Wake_CAN2_SleepDelayTime_Data())) && (!rtb_Compare_n));

  /* S-Function (raptor_sfun_analog_in): '<S33>/raptor_analog_in1' */
  /* S-Function Block: WAKE_INPUT1 */
  {
    rtb_raptor_analog_in1 = ADC_Read_Chan(KEYSW);
  }

  /* RelationalOperator: '<S33>/Relational Operator1' incorporates:
   *  S-Function (raptor_sfun_adjustment): '<S33>/raptor_adjustment1'
   */
  rtb_RelationalOperator1 = (rtb_raptor_analog_in1 > ((uint16_T)
    (WAKE_INPUT1_Threshold_Data())));

  /* S-Function (raptor_sfun_delta_time): '<S41>/raptor_delta_time' */
  {
    rtb_raptor_delta_time = GetDeltaTime_ms((uint32_t*)
      &Lightning_McSeas_VCU_DWork.raptor_delta_time_DWORK1);
  }

  /* MultiPortSwitch: '<S41>/Multiport Switch1' incorporates:
   *  Constant: '<S41>/Constant'
   *  RelationalOperator: '<S45>/FixPt Relational Operator'
   *  Sum: '<S41>/Add'
   *  UnitDelay: '<S41>/Unit Delay'
   *  UnitDelay: '<S45>/Delay Input1'
   */
  if (rtb_RelationalOperator1 == Lightning_McSeas_VCU_DWork.DelayInput1_DSTATE_o)
  {
    rtb_MultiportSwitch1_b = rtb_raptor_delta_time +
      Lightning_McSeas_VCU_DWork.UnitDelay_DSTATE;
  } else {
    rtb_MultiportSwitch1_b = 0U;
  }

  /* End of MultiPortSwitch: '<S41>/Multiport Switch1' */
  /* MultiPortSwitch: '<S46>/Multiport Switch' incorporates:
   *  Constant: '<S46>/Constant'
   *  Logic: '<S41>/Logical Operator2'
   *  Logic: '<S41>/Logical Operator3'
   *  RelationalOperator: '<S41>/Relational Operator1'
   *  S-Function (raptor_sfun_adjustment): '<S41>/raptor_adjustment4'
   */
  if (rtb_RelationalOperator1 || (rtb_MultiportSwitch1_b < (KeySwLoTimeThr_Data())))
  {
    /* MultiPortSwitch: '<S46>/Multiport Switch1' incorporates:
     *  Constant: '<S46>/Constant1'
     *  UnitDelay: '<S46>/Unit Delay'
     */
    if (!rtb_RelationalOperator1) {
      rtb_MultiportSwitch_d = Lightning_McSeas_VCU_DWork.UnitDelay_DSTATE_i;
    } else {
      rtb_MultiportSwitch_d = true;
    }

    /* End of MultiPortSwitch: '<S46>/Multiport Switch1' */
  } else {
    rtb_MultiportSwitch_d = false;
  }

  /* End of MultiPortSwitch: '<S46>/Multiport Switch' */

  /* Sum: '<S42>/Add1' incorporates:
   *  Constant: '<S39>/Constant'
   *  Constant: '<S40>/Constant'
   *  Gain: '<S42>/Gain12'
   *  Gain: '<S42>/Gain6'
   *  Gain: '<S42>/Gain8'
   *  Logic: '<S33>/Logical Operator1'
   *  Logic: '<S33>/Logical Operator2'
   *  Logic: '<S33>/Logical Operator4'
   *  Logic: '<S33>/Logical Operator5'
   *  RelationalOperator: '<S39>/Compare'
   *  RelationalOperator: '<S40>/Compare'
   */
  rtb_Add1 = (uint16_T)(((uint32_T)(((rtb_raptor_lin_state_o2 > 0U) &&
    (!rtb_RelationalOperator)) << 2) + (((rtb_raptor_can_state1_o2 > 0U) &&
    (!rtb_RelationalOperator_i)) << 1)) + rtb_MultiportSwitch_d);

  /* S-Function (raptor_sfun_internal_measurement): '<S42>/raptor_internal_measurement' incorporates:
   *  Gain: '<S42>/Gain4'
   *  Gain: '<S42>/Gain5'
   *  S-Function (raptor_sfun_adjustment): '<S42>/raptor_adjustment'
   *  S-Function (raptor_sfun_adjustment): '<S42>/raptor_adjustment1'
   *  S-Function (raptor_sfun_adjustment): '<S42>/raptor_adjustment2'
   *  Sum: '<S42>/Add'
   */
  rtb_raptor_internal_measurement = (uint16_T)(((uint32_T)
    ((GCM48Wake_LIN2_cal_Data()) << 2) + ((GCM48Wake_CAN2_cal_Data()) << 1)) +
    (GCM48Wake_INPUT1_cal_Data()));

  /* S-Function (sfix_bitop): '<S42>/Bitwise AND' */
  rtb_BitwiseAND = (uint16_T)(rtb_Add1 & rtb_raptor_internal_measurement);

  /* RelationalOperator: '<S47>/Compare' incorporates:
   *  Constant: '<S47>/Constant'
   */
  rtb_Compare_n = (rtb_BitwiseAND > 0);

  /* Logic: '<S27>/Logical Operator1' incorporates:
   *  S-Function (raptor_sfun_data_read): '<S27>/raptor_data_read1'
   */
  rtb_KeepOnrequestiscurrentlytrue = (rtb_Compare_n || KeepModuleOn_Data());

  /* MultiPortSwitch: '<S28>/Multiport Switch1' incorporates:
   *  Constant: '<S28>/Constant1'
   */
  if (!rtb_KeepOnrequestiscurrentlytrue) {
    /* MultiPortSwitch: '<S28>/Multiport Switch' incorporates:
     *  Constant: '<S28>/Constant'
     *  Sum: '<S28>/Add'
     *  UnitDelay: '<S28>/Unit Delay1'
     *  UnitDelay: '<S28>/Unit Delay2'
     */
    if (Lightning_McSeas_VCU_DWork.UnitDelay2_DSTATE_j) {
      rtb_MultiportSwitch1_p = Lightning_McSeas_VCU_DWork.UnitDelay1_DSTATE_a;
    } else {
      rtb_MultiportSwitch1_p = Lightning_McSeas_VCU_DWork.UnitDelay1_DSTATE_a +
        1U;
    }

    /* End of MultiPortSwitch: '<S28>/Multiport Switch' */
  } else {
    rtb_MultiportSwitch1_p = 0U;
  }

  /* End of MultiPortSwitch: '<S28>/Multiport Switch1' */
  /* Logic: '<S28>/Logical Operator3' incorporates:
   *  Logic: '<S28>/Logical Operator4'
   *  RelationalOperator: '<S28>/Relational Operator'
   *  S-Function (raptor_sfun_adjustment): '<S28>/raptor_adjustment'
   */
  rtb_LogicalOperator3_m = ((rtb_MultiportSwitch1_p >=
    (Wake_DlyStopOfFgndTaskTime_Data())) && (!rtb_KeepOnrequestiscurrentlytrue));

  /* MultiPortSwitch: '<S31>/Multiport Switch' incorporates:
   *  Constant: '<S31>/Constant'
   */
  if (!rtb_LogicalOperator3_m) {
    /* MultiPortSwitch: '<S31>/Multiport Switch1' incorporates:
     *  Constant: '<S31>/Constant1'
     *  UnitDelay: '<S31>/Unit Delay'
     */
    if (!rtb_KeepOnrequestiscurrentlytrue) {
      rtb_MultiportSwitch_ko = Lightning_McSeas_VCU_DWork.UnitDelay_DSTATE_ik;
    } else {
      rtb_MultiportSwitch_ko = true;
    }

    /* End of MultiPortSwitch: '<S31>/Multiport Switch1' */
  } else {
    rtb_MultiportSwitch_ko = false;
  }

  /* End of MultiPortSwitch: '<S31>/Multiport Switch' */

  /* Logic: '<S27>/Logical Operator4' */
  rtb_KeepOnrequestiscurrentlytrue = (rtb_KeepOnrequestiscurrentlytrue ||
    rtb_MultiportSwitch_ko);

  /* Outputs for Triggered SubSystem: '<S27>/Raise Shutdown Event' incorporates:
   *  TriggerPort: '<S29>/init state = 1 to trigger at wakeup if awoken by a wake source  that we want to ignore'
   */
  if ((!rtb_KeepOnrequestiscurrentlytrue) &&
      (Lightning_McSeas_VCU_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE !=
       ZERO_ZCSIG)) {
    /* S-Function (raptor_sfun_data_write): '<S29>/raptor_data_write' incorporates:
     *  Constant: '<S29>/Constant'
     */
    FgndTasksStopped_Data() = true;

    /* S-Function (fcgen): '<S29>/Function-Call Generator' incorporates:
     *  SubSystem: '<S29>/raptor_shutdown'
     */
    /* S-Function (raptor_sfun_shutdown): '<S34>/raptor_data_write' */
    /* S-Function Block */
    {
      extern void App_Shutdown(void);
      App_Shutdown();
    }

    /* End of Outputs for S-Function (fcgen): '<S29>/Function-Call Generator' */
  }

  Lightning_McSeas_VCU_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE =
    rtb_KeepOnrequestiscurrentlytrue;

  /* End of Outputs for SubSystem: '<S27>/Raise Shutdown Event' */

  /* Outputs for Triggered SubSystem: '<S27>/Raise Startup Event' incorporates:
   *  TriggerPort: '<S30>/init state zero so it triggers at wake if wake request is true'
   */
  if (rtb_KeepOnrequestiscurrentlytrue &&
      (Lightning_McSeas_VCU_PrevZCSigState.RaiseStartupEvent_Trig_ZCE !=
       POS_ZCSIG)) {
    /* S-Function (raptor_sfun_measurement): '<S30>/raptor_measurement1' incorporates:
     *  Constant: '<S30>/Constant'
     */
    Wake_Debug_StartupEventRaised_Data() = true;

    /* S-Function (raptor_sfun_data_write): '<S30>/raptor_data_write' incorporates:
     *  Constant: '<S30>/Constant1'
     */
    FgndTasksStopped_Data() = false;

    /* S-Function (fcgen): '<S30>/Function-Call Generator' incorporates:
     *  SubSystem: '<S30>/raptor_startup'
     */
    /* S-Function (raptor_sfun_startup): '<S35>/raptor_data_write' */
    /* S-Function Block */
    {
      extern void App_Startup(void);
      App_Startup();
    }

    /* End of Outputs for S-Function (fcgen): '<S30>/Function-Call Generator' */
  }

  /* Outputs for Triggered SubSystem: '<S27>/Raise Shutdown Event' incorporates:
   *  TriggerPort: '<S29>/init state = 1 to trigger at wakeup if awoken by a wake source  that we want to ignore'
   */
  Lightning_McSeas_VCU_PrevZCSigState.RaiseStartupEvent_Trig_ZCE =
    rtb_KeepOnrequestiscurrentlytrue;

  /* End of Outputs for SubSystem: '<S27>/Raise Shutdown Event' */
  /* End of Outputs for SubSystem: '<S27>/Raise Startup Event' */

  /* UnitDelay: '<S27>/Unit Delay' */
  rtb_UnitDelay_l = Lightning_McSeas_VCU_DWork.UnitDelay_DSTATE_a;

  /* Outputs for Triggered SubSystem: '<S27>/Store EEPROM' incorporates:
   *  TriggerPort: '<S32>/Trigger'
   */
  if ((!Lightning_McSeas_VCU_DWork.UnitDelay_DSTATE_a) &&
      (Lightning_McSeas_VCU_PrevZCSigState.StoreEEPROM_Trig_ZCE != ZERO_ZCSIG))
  {
    /* S-Function (fcgen): '<S32>/Function-Call Generator' incorporates:
     *  SubSystem: '<S32>/raptor_store_nv'
     */
    /* S-Function (raptor_sfun_store_nv): '<S36>/raptor_data_write' */
    /* S-Function Block */
    {
      App_EE_Store();
    }

    /* End of Outputs for S-Function (fcgen): '<S32>/Function-Call Generator' */
  }

  /* End of UnitDelay: '<S27>/Unit Delay' */
  Lightning_McSeas_VCU_PrevZCSigState.StoreEEPROM_Trig_ZCE = rtb_UnitDelay_l;

  /* End of Outputs for SubSystem: '<S27>/Store EEPROM' */

  /* S-Function (raptor_sfun_nv_status): '<S27>/raptor_sfun_nv_status' */
  /* S-Function Block */
  {
    rtb_raptor_sfun_nv_status = (EEPROM_State_Data() == EE_STORE_IN_PROGESS);
  }

  /* Logic: '<S27>/Logical Operator2' incorporates:
   *  UnitDelay: '<S27>/Unit Delay1'
   */
  rtb_LogicalOperator2_e = (rtb_raptor_sfun_nv_status ||
    rtb_KeepOnrequestiscurrentlytrue ||
    Lightning_McSeas_VCU_DWork.UnitDelay1_DSTATE_o);

  /* S-Function (raptor_sfun_digital_out): '<S27>/raptor_digital_out' */
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

  /* S-Function (raptor_sfun_measurement): '<S28>/raptor_measurement' */
  Wake_DlyStopOfFgndTaskTTmr_Data() = rtb_MultiportSwitch1_p;

  /* S-Function (raptor_sfun_data_write): '<S33>/raptor_data_write1' */
  KeySw_Bgnd_Data() = rtb_MultiportSwitch_d;

  /* S-Function (raptor_sfun_measurement): '<S33>/raptor_measurement1' */
  Wake_INPUT1_Vlts_Data() = rtb_raptor_analog_in1;

  /* S-Function (raptor_sfun_measurement): '<S33>/raptor_measurement2' */
  Wake_LIN2_RxCount_Data() = rtb_raptor_lin_state_o2;

  /* S-Function (raptor_sfun_measurement): '<S33>/raptor_measurement5' */
  Wake_CAN2_RxCount_Data() = rtb_raptor_can_state1_o2;

  /* S-Function (raptor_sfun_measurement): '<S37>/raptor_measurement' */
  Wake_CAN2_SleepDelayTTmr_Data() = rtb_MultiportSwitch1_a;

  /* S-Function (raptor_sfun_measurement): '<S38>/raptor_measurement' */
  Wake_LIN2_SleepDelayTTmr_Data() = rtb_MultiportSwitch1;

  /* S-Function (raptor_sfun_measurement): '<S41>/raptor_measurement3' */
  dt_read_Data() = rtb_raptor_delta_time;

  /* Outputs for Enabled SubSystem: '<S42>/Startup Wake Source' incorporates:
   *  EnablePort: '<S48>/Enable'
   */
  /* UnitDelay: '<S42>/init = 1' */
  if (Lightning_McSeas_VCU_DWork.init1_DSTATE) {
    /* S-Function (raptor_sfun_measurement): '<S48>/raptor_measurement' */
    WakeSource_Startup_Data() = rtb_BitwiseAND;
  }

  /* End of UnitDelay: '<S42>/init = 1' */
  /* End of Outputs for SubSystem: '<S42>/Startup Wake Source' */

  /* S-Function (raptor_sfun_data_write): '<S42>/raptor_data_write1' */
  Wake_AnyWakeSourceActive_Data() = rtb_Compare_n;

  /* S-Function (raptor_sfun_data_write): '<S42>/raptor_data_write2' */
  Wake_SourceBitAndWakeConfigRegister_Data() = rtb_BitwiseAND;

  /* S-Function (raptor_sfun_data_write): '<S42>/raptor_data_write3' */
  WakeSource_Current_Data() = rtb_Add1;

  /* S-Function (raptor_sfun_measurement): '<S42>/raptor_measurement2' */
  WakeConfigRegister_Data() = rtb_raptor_internal_measurement;

  /* S-Function (raptor_sfun_internal_measurement): '<S42>/raptor_internal_measurement' */
  /* S-Function Block: WAKE_SOURCE */
  {
    extern uint8_t Get_Wake_Source( void );
    rtb_raptor_internal_measurement = Get_Wake_Source();
  }

  /* S-Function (raptor_sfun_measurement): '<S42>/raptor_measurement' */
  WakeSource_RaptorIntrnlMeas_Data() = rtb_raptor_internal_measurement;

  /* Update for UnitDelay: '<S44>/Delay Input1' */
  Lightning_McSeas_VCU_DWork.DelayInput1_DSTATE = rtb_raptor_lin_state_o2;

  /* Update for UnitDelay: '<S38>/Unit Delay2' */
  Lightning_McSeas_VCU_DWork.UnitDelay2_DSTATE = rtb_RelationalOperator;

  /* Update for UnitDelay: '<S38>/Unit Delay1' */
  Lightning_McSeas_VCU_DWork.UnitDelay1_DSTATE = rtb_MultiportSwitch1;

  /* Update for UnitDelay: '<S43>/Delay Input1' */
  Lightning_McSeas_VCU_DWork.DelayInput1_DSTATE_j = rtb_raptor_can_state1_o2;

  /* Update for UnitDelay: '<S37>/Unit Delay2' */
  Lightning_McSeas_VCU_DWork.UnitDelay2_DSTATE_b = rtb_RelationalOperator_i;

  /* Update for UnitDelay: '<S37>/Unit Delay1' */
  Lightning_McSeas_VCU_DWork.UnitDelay1_DSTATE_m = rtb_MultiportSwitch1_a;

  /* Update for UnitDelay: '<S45>/Delay Input1' */
  Lightning_McSeas_VCU_DWork.DelayInput1_DSTATE_o = rtb_RelationalOperator1;

  /* Update for UnitDelay: '<S41>/Unit Delay' */
  Lightning_McSeas_VCU_DWork.UnitDelay_DSTATE = rtb_MultiportSwitch1_b;

  /* Update for UnitDelay: '<S46>/Unit Delay' */
  Lightning_McSeas_VCU_DWork.UnitDelay_DSTATE_i = rtb_MultiportSwitch_d;

  /* Update for UnitDelay: '<S28>/Unit Delay2' */
  Lightning_McSeas_VCU_DWork.UnitDelay2_DSTATE_j = rtb_LogicalOperator3_m;

  /* Update for UnitDelay: '<S28>/Unit Delay1' */
  Lightning_McSeas_VCU_DWork.UnitDelay1_DSTATE_a = rtb_MultiportSwitch1_p;

  /* Update for UnitDelay: '<S31>/Unit Delay' */
  Lightning_McSeas_VCU_DWork.UnitDelay_DSTATE_ik = rtb_MultiportSwitch_ko;

  /* Update for UnitDelay: '<S27>/Unit Delay' */
  Lightning_McSeas_VCU_DWork.UnitDelay_DSTATE_a =
    rtb_KeepOnrequestiscurrentlytrue;

  /* Update for UnitDelay: '<S27>/Unit Delay1' */
  Lightning_McSeas_VCU_DWork.UnitDelay1_DSTATE_o = rtb_UnitDelay_l;

  /* Update for UnitDelay: '<S42>/init = 1' incorporates:
   *  Constant: '<S42>/Constant'
   */
  Lightning_McSeas_VCU_DWork.init1_DSTATE = false;
}

/* System initialize for function-call system: '<Root>/Foreground' */
void Lightning_McSeas_VCU_Foreground_Init(void)
{
  /* Start for S-Function (raptor_sfun_analog_in): '<S7>/raptor_analog_in' */

  /* S-Function Block: AN10 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S7>/raptor_analog_in1' */

  /* S-Function Block: AN9 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S8>/raptor_analog_in' */

  /* S-Function Block: AN7 */
  {
  }

  /* Start for S-Function (raptor_sfun_analog_in): '<S8>/raptor_analog_in1' */

  /* S-Function Block: AN8 */
  {
  }

  /* Start for S-Function (raptor_sfun_pwm_out): '<S11>/raptor_pwm_out' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S11>/Constant1'
   */

  /* S-Function Block: LSO2 */
  {
  }

  /* Start for S-Function (raptor_sfun_digital_in): '<S26>/raptor_digital_in' */

  /* S-Function Block: DG1 */
  {
    extern void din_pad_config(E_DIGITAL_INPUT din);
    din_pad_config(DG1_DG);
  }

  /* Start for S-Function (raptor_sfun_digital_in): '<S26>/raptor_digital_in1' */

  /* S-Function Block: DG2 */
  {
    extern void din_pad_config(E_DIGITAL_INPUT din);
    din_pad_config(DG2_DG);
  }
}

/* Enable for function-call system: '<Root>/Foreground' */
void Lightning_McSeas_VCU_Foreground_Enable(void)
{
  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S7>/raptor_can_txmsg' */
  /* Level2 S-Function Block: '<S7>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_8__0002(0U);

  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S8>/raptor_can_txmsg' */
  /* Level2 S-Function Block: '<S8>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_14__0002(0U);

  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S10>/raptor_can_txmsg4' */
  /* Level2 S-Function Block: '<S10>/raptor_can_txmsg4' (raptor_sfun_can_txmsg) */
  can_set_period_72__0002(0U);

  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S10>/raptor_can_txmsg3' */
  /* Level2 S-Function Block: '<S10>/raptor_can_txmsg3' (raptor_sfun_can_txmsg) */
  can_set_period_71__0005(0U);

  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S12>/raptor_can_txmsg' incorporates:
   *  Constant: '<S12>/Constant'
   */
  /* Level2 S-Function Block: '<S12>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_420__0005(0U);

  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S12>/raptor_can_txmsg1' incorporates:
   *  Constant: '<S12>/Constant'
   */
  /* Level2 S-Function Block: '<S12>/raptor_can_txmsg1' (raptor_sfun_can_txmsg) */
  can_set_period_421__0002(0U);

  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S26>/raptor_can_txmsg' */
  /* Level2 S-Function Block: '<S26>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_459__0002(0U);
}

/* Disable for function-call system: '<Root>/Foreground' */
void Lightning_McSeas_VCU_Foreground_Disable(void)
{
  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S7>/raptor_can_txmsg' */
  /* Level2 S-Function Block: '<S7>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_8__0002(0);

  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S8>/raptor_can_txmsg' */
  /* Level2 S-Function Block: '<S8>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_14__0002(0);

  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S10>/raptor_can_txmsg4' */
  /* Level2 S-Function Block: '<S10>/raptor_can_txmsg4' (raptor_sfun_can_txmsg) */
  can_set_period_72__0002(0);

  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S10>/raptor_can_txmsg3' */
  /* Level2 S-Function Block: '<S10>/raptor_can_txmsg3' (raptor_sfun_can_txmsg) */
  can_set_period_71__0005(0);

  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S12>/raptor_can_txmsg' incorporates:
   *  Constant: '<S12>/Constant'
   */
  /* Level2 S-Function Block: '<S12>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_420__0005(0);

  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S12>/raptor_can_txmsg1' incorporates:
   *  Constant: '<S12>/Constant'
   */
  /* Level2 S-Function Block: '<S12>/raptor_can_txmsg1' (raptor_sfun_can_txmsg) */
  can_set_period_421__0002(0);

  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S26>/raptor_can_txmsg' */
  /* Level2 S-Function Block: '<S26>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_459__0002(0);
}

/* Output and update for function-call system: '<Root>/Foreground' */
void Lightning_McSeas_VCU_Foreground(void)
{
  /* local block i/o variables */
  real_T rtb_raptor_can_rxmsg_o2;
  real_T rtb_raptor_can_rxmsg_o3;
  real_T rtb_Merge;
  real_T rtb_Merge_n;
  real_T rtb_Merge_j;
  uint16_T rtb_raptor_can_rxmsg_o1;
  uint16_T rtb_raptor_can_rxmsg2_o1;
  uint16_T rtb_raptor_can_rxmsg1_o1;
  boolean_T rtb_raptor_digital_in1;
  boolean_T rtb_raptor_digital_in;
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

    /* Signal: Gearbox1 */
    /* Gearbox1 - StartBit: 0U, BitLength: 16U, Endian: 0U */

    /* signal type is unsigned */

    /* Optimize the checks out since both the min and max are within the limits of this particular data type */
    {
      temp = (uint32_T)((((uint16_T)ADC_Read_Chan(AN10))));
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[0U] |= temp_shift;
    temp_shift = (uint8_T)(temp >> 8);
    data[1U] |= temp_shift;

    /* Signal: Gearbox2 */
    /* Gearbox2 - StartBit: 16U, BitLength: 16U, Endian: 0U */

    /* signal type is unsigned */

    /* Optimize the checks out since both the min and max are within the limits of this particular data type */
    {
      temp = (uint32_T)((((uint16_T)ADC_Read_Chan(AN9))));
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[2U] |= temp_shift;
    temp_shift = (uint8_T)(temp >> 8);
    data[3U] |= temp_shift;
    can_set_period_8__0002(0U);
    can_send_8__0002(1307U & 0x7FF, 0, 8U, &data[0]);
  }

  /* S-Function (raptor_sfun_can_txmsg): '<S8>/raptor_can_txmsg' incorporates:
   *  S-Function (raptor_sfun_analog_in): '<S8>/raptor_analog_in'
   *  S-Function (raptor_sfun_analog_in): '<S8>/raptor_analog_in1'
   */

  /* S-Function Block:<S8>/raptor_can_txmsg */
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
    can_set_period_14__0002(0U);
    can_send_14__0002(1305U & 0x7FF, 0, 8U, &data[0]);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S9>/raptor_can_rxmsg' */

  /* S-Function Block:<S9>/raptor_can_rxmsg */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint32_T temp;
    can_get_446__0002(&rtb_raptor_can_rxmsg_o1, NULL, NULL, &data[0], 8);

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
    rtb_Merge_n = (((real_T) temp ) + (real_T)-1230.0);

    /* Signal: Channel_4 */
    temp = 0;
    temp |= ((uint32_T)data[6U]) ;
    temp |= ((uint32_T)data[7U]) << 8;
    rtb_Merge_j = (((real_T) temp ) + (real_T)-1230.0);
  }

  /* Gain: '<S10>/Gain2' */
  rtb_Gain2 = 51.0 * rtb_Merge_n;

  /* S-Function (raptor_sfun_can_txmsg): '<S10>/raptor_can_txmsg4' */

  /* S-Function Block:<S10>/raptor_can_txmsg4 */
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
    can_set_period_72__0002(0U);
    can_send_72__0002(31U & 0x7FF, 0, 2U, &data[0]);
  }

  /* Gain: '<S10>/Gain1' */
  rtb_Gain2 = 51.0 * rtb_Merge_j;

  /* S-Function (raptor_sfun_can_txmsg): '<S10>/raptor_can_txmsg3' */

  /* S-Function Block:<S10>/raptor_can_txmsg3 */
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
    can_set_period_71__0005(0U);
    can_send_71__0005(32U & 0x7FF, 0, 2U, &data[0]);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S9>/raptor_can_rxmsg2' */

  /* S-Function Block:<S9>/raptor_can_rxmsg2 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint32_T temp;
    can_get_448__0002(&rtb_raptor_can_rxmsg2_o1, NULL, NULL, &data[0], 8);

    /* Signal: Channel_10     */
    temp = 0;
    temp |= ((uint32_T)data[0U]) ;
    temp |= ((uint32_T)data[1U]) << 8;
    rtb_Merge_j = (((real_T) temp ) + (real_T)-1230.0);

    /* Signal: Channel_9      */
    temp = 0;
    temp |= ((uint32_T)data[2U]) ;
    temp |= ((uint32_T)data[3U]) << 8;
    rtb_Merge_n = (((real_T) temp ) + (real_T)-1230.0);

    /* Signal: NewSignal_0007 not connected */

    /* Signal: NewSignal_0008 not connected */
  }

  /* Outputs for IfAction SubSystem: '<S13>/If Action Subsystem1' incorporates:
   *  ActionPort: '<S15>/Action Port'
   */
  /* Outputs for IfAction SubSystem: '<S13>/If Action Subsystem' incorporates:
   *  ActionPort: '<S14>/Action Port'
   */
  /* If: '<S13>/If' incorporates:
   *  Inport: '<S14>/Xa'
   *  Inport: '<S15>/Xb'
   *  S-Function (raptor_sfun_digital_in): '<S26>/raptor_digital_in'
   */
  rtb_raptor_digital_in = (rtb_Merge_n > 1200.0);

  /* End of Outputs for SubSystem: '<S13>/If Action Subsystem' */
  /* End of Outputs for SubSystem: '<S13>/If Action Subsystem1' */

  /* S-Function (raptor_sfun_pwm_out): '<S11>/raptor_pwm_out' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S11>/Constant1'
   */
  /* S-Function Block: LSO2 */
  {
    uint16_T u_dutyCycle = ((uint16_T)10000U);
    uint32_T u_frequency = 100U;
    if (!rtb_raptor_digital_in) {
      u_dutyCycle = 0U;
    }

    set_hw_output_pwm(LSO2, u_frequency, u_dutyCycle, rtb_raptor_digital_in);
  }

  /* Outputs for IfAction SubSystem: '<S18>/If Action Subsystem1' incorporates:
   *  ActionPort: '<S25>/Action Port'
   */
  /* Outputs for IfAction SubSystem: '<S18>/If Action Subsystem' incorporates:
   *  ActionPort: '<S24>/Action Port'
   */
  /* If: '<S18>/If' incorporates:
   *  Inport: '<S24>/Xa'
   *  Inport: '<S25>/Xb'
   *  Merge: '<S18>/Merge'
   */
  rtb_Merge_n = (rtb_Merge_j > 250.0);

  /* End of Outputs for SubSystem: '<S18>/If Action Subsystem' */
  /* End of Outputs for SubSystem: '<S18>/If Action Subsystem1' */

  /* Outputs for IfAction SubSystem: '<S16>/If Action Subsystem1' incorporates:
   *  ActionPort: '<S20>/Action Port'
   */
  /* Outputs for IfAction SubSystem: '<S16>/If Action Subsystem' incorporates:
   *  ActionPort: '<S19>/Action Port'
   */
  /* If: '<S16>/If' incorporates:
   *  Inport: '<S19>/Xa'
   *  Inport: '<S20>/Xb'
   *  Merge: '<S16>/Merge'
   */
  rtb_Merge_j = (rtb_Merge_j > 1200.0);

  /* End of Outputs for SubSystem: '<S16>/If Action Subsystem' */
  /* End of Outputs for SubSystem: '<S16>/If Action Subsystem1' */

  /* S-Function (raptor_sfun_can_rxmsg): '<S9>/raptor_can_rxmsg1' */

  /* S-Function Block:<S9>/raptor_can_rxmsg1 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint32_T temp;
    can_get_447__0002(&rtb_raptor_can_rxmsg1_o1, NULL, NULL, &data[0], 8);

    /* Signal: Channel_5 */
    temp = 0;
    temp |= ((uint32_T)data[0U]) ;
    temp |= ((uint32_T)data[1U]) << 8;
    rtb_Merge = (((real_T) temp ) + (real_T)-1230.0);

    /* Signal: Channel_6 not connected */

    /* Signal: Channel_7 not connected */

    /* Signal: Channel_8 not connected */
  }

  /* If: '<S17>/If' */
  if (rtb_Merge > 1200.0) {
    /* Outputs for IfAction SubSystem: '<S17>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S22>/Action Port'
     */
    /* Merge: '<S17>/Merge' incorporates:
     *  Constant: '<S17>/Constant2'
     *  Inport: '<S22>/Xb'
     */
    rtb_Merge = 1.0;

    /* End of Outputs for SubSystem: '<S17>/If Action Subsystem3' */
  } else if (rtb_Merge > 250.0) {
    /* Outputs for IfAction SubSystem: '<S17>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S21>/Action Port'
     */
    /* Merge: '<S17>/Merge' incorporates:
     *  Constant: '<S17>/Constant1'
     *  Inport: '<S21>/Xb'
     */
    rtb_Merge = 0.0;

    /* End of Outputs for SubSystem: '<S17>/If Action Subsystem2' */
  } else {
    /* Outputs for IfAction SubSystem: '<S17>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S23>/Action Port'
     */
    /* Merge: '<S17>/Merge' incorporates:
     *  Constant: '<S17>/Constant3'
     *  Inport: '<S23>/Xb'
     */
    rtb_Merge = -1.0;

    /* End of Outputs for SubSystem: '<S17>/If Action Subsystem4' */
  }

  /* End of If: '<S17>/If' */

  /* Gain: '<S12>/Gain' incorporates:
   *  Product: '<S12>/Product1'
   */
  rtb_Gain2 = rtb_raptor_can_rxmsg_o2 * rtb_Merge * -3.128;

  /* S-Function (raptor_sfun_can_txmsg): '<S12>/raptor_can_txmsg' incorporates:
   *  Constant: '<S12>/Constant'
   */

  /* S-Function Block:<S12>/raptor_can_txmsg */
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
    if (rtb_Merge_n < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_Merge_n > 3.0000000000F)
      temp = (uint32_T)3U;
    else {
      if ((real_T)rtb_Merge_n < 0)
        temp = (uint32_T)(int32_T)((rtb_Merge_n));
      else
        temp = (uint32_T)((rtb_Merge_n));
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
    if (rtb_Gain2 < -8032.7500000000F)
      temp = (uint32_T)0U;
    else if (rtb_Gain2 > 8351.0000000000F)
      temp = (uint32_T)65535U;
    else {
      if ((real_T)rtb_Gain2 < 0)
        temp = (uint32_T)(int32_T)((rtb_Gain2- -8032.75f) * 4.0f);
      else
        temp = (uint32_T)((rtb_Gain2- -8032.75f) * 4.0f);
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
    can_set_period_420__0005(0U);
    can_send_420__0005(218038727U & 0x1FFFFFFF, 1, 8U, &data[0]);
  }

  /* Gain: '<S12>/Gain1' incorporates:
   *  Product: '<S12>/Product'
   */
  rtb_Gain2 = rtb_raptor_can_rxmsg_o3 * rtb_Merge * 3.128;

  /* S-Function (raptor_sfun_can_txmsg): '<S12>/raptor_can_txmsg1' incorporates:
   *  Constant: '<S12>/Constant'
   */

  /* S-Function Block:<S12>/raptor_can_txmsg1 */
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
    if (rtb_Merge_n < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_Merge_n > 3.0000000000F)
      temp = (uint32_T)3U;
    else {
      if ((real_T)rtb_Merge_n < 0)
        temp = (uint32_T)(int32_T)((rtb_Merge_n));
      else
        temp = (uint32_T)((rtb_Merge_n));
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
    if (rtb_Gain2 < -8032.7500000000F)
      temp = (uint32_T)0U;
    else if (rtb_Gain2 > 8351.0000000000F)
      temp = (uint32_T)65535U;
    else {
      if ((real_T)rtb_Gain2 < 0)
        temp = (uint32_T)(int32_T)((rtb_Gain2- -8032.75f) * 4.0f);
      else
        temp = (uint32_T)((rtb_Gain2- -8032.75f) * 4.0f);
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
    can_set_period_421__0002(0U);
    can_send_421__0002(218042823U & 0x1FFFFFFF, 1, 8U, &data[0]);
  }

  /* S-Function (raptor_sfun_digital_in): '<S26>/raptor_digital_in' */
  /* S-Function Block: DG1 */
  {
    rtb_raptor_digital_in = (boolean_T) Digital_Input_Read_Chan(DG1_DG);
  }

  /* S-Function (raptor_sfun_digital_in): '<S26>/raptor_digital_in1' */
  /* S-Function Block: DG2 */
  {
    rtb_raptor_digital_in1 = (boolean_T) Digital_Input_Read_Chan(DG2_DG);
  }

  /* S-Function (raptor_sfun_can_txmsg): '<S26>/raptor_can_txmsg' */

  /* S-Function Block:<S26>/raptor_can_txmsg */
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
    can_set_period_459__0002(0U);
    can_send_459__0002(1306U & 0x7FF, 0, 8U, &data[0]);
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

  /* SystemInitialize for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' incorporates:
   *  SubSystem: '<Root>/Foreground'
   */
  Lightning_McSeas_VCU_Foreground_Init();

  /* End of SystemInitialize for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' */

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
