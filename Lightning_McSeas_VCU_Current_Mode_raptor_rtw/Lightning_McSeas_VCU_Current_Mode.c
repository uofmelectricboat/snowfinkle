/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Lightning_McSeas_VCU_Current_Mode.c
 *
 * Code generated for Simulink model 'Lightning_McSeas_VCU_Current_Mode'.
 *
 * Model version                  : 6.200
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Fri Jan 27 12:39:18 2023
 *
 * Target selection: raptor.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Lightning_McSeas_VCU_Current_Mode.h"
#include "Lightning_McSeas_VCU_Current_Mode_private.h"

/* Block states (default storage) */
D_Work_Lightning_McSeas_VCU_Current_Mode Lightning_McSeas_VCU_Current_Mode_DWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates_Lightning_McSeas_VCU_Current_Mode
  Lightning_McSeas_VCU_Current_Mode_PrevZCSigState;

/* System initialize for function-call system: '<S2>/Background' */
void Lightning_McSeas_VCU_Current_Mode_Background_Init(void)
{
  /* Start for S-Function (raptor_sfun_analog_in): '<S45>/raptor_analog_in1' */

  /* S-Function Block: WAKE_INPUT1 */
  {
  }

  /* Start for S-Function (raptor_sfun_digital_out): '<S39>/raptor_digital_out' */

  /* S-Function Block: POWER_HOLD */
  {
  }

  /* Start for S-Function (raptor_sfun_internal_measurement): '<S54>/raptor_internal_measurement' */

  /* S-Function Block: WAKE_SOURCE */
  {
  }

  /* InitializeConditions for S-Function (raptor_sfun_delta_time): '<S53>/raptor_delta_time' */
  Lightning_McSeas_VCU_Current_Mode_DWork.raptor_delta_time_DWORK1 = ticks();

  /* InitializeConditions for UnitDelay: '<S53>/Unit Delay' */
  Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay_DSTATE = 1U;

  /* InitializeConditions for UnitDelay: '<S54>/init = 1' */
  Lightning_McSeas_VCU_Current_Mode_DWork.init1_DSTATE = true;
  Lightning_McSeas_VCU_Current_Mode_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE =
    POS_ZCSIG;

  /* End of SystemInitialize for SubSystem: '<S39>/Raise Shutdown Event' */
  Lightning_McSeas_VCU_Current_Mode_PrevZCSigState.RaiseStartupEvent_Trig_ZCE =
    ZERO_ZCSIG;

  /* End of SystemInitialize for SubSystem: '<S39>/Raise Startup Event' */
}

/* System reset for function-call system: '<S2>/Background' */
void Lightning_McSeas_VCU_Current_Mode_Background_Reset(void)
{
  /* InitializeConditions for S-Function (raptor_sfun_delta_time): '<S53>/raptor_delta_time' */
  Lightning_McSeas_VCU_Current_Mode_DWork.raptor_delta_time_DWORK1 = ticks();

  /* InitializeConditions for UnitDelay: '<S53>/Unit Delay' */
  Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay_DSTATE = 1U;

  /* InitializeConditions for UnitDelay: '<S54>/init = 1' */
  Lightning_McSeas_VCU_Current_Mode_DWork.init1_DSTATE = true;

  /* SystemReset for Triggered SubSystem: '<S39>/Raise Shutdown Event' */
  Lightning_McSeas_VCU_Current_Mode_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE =
    POS_ZCSIG;

  /* End of SystemReset for SubSystem: '<S39>/Raise Shutdown Event' */

  /* SystemReset for Triggered SubSystem: '<S39>/Raise Startup Event' */
  Lightning_McSeas_VCU_Current_Mode_PrevZCSigState.RaiseStartupEvent_Trig_ZCE =
    ZERO_ZCSIG;

  /* End of SystemReset for SubSystem: '<S39>/Raise Startup Event' */
}

/* Output and update for function-call system: '<S2>/Background' */
void Lightning_McSeas_VCU_Current_Mode_Background(void)
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

  /* S-Function (raptor_sfun_lin_state): '<S45>/raptor_lin_state' */
  /* S-Function Block: <S45>/raptor_lin_state */
  {
    rtb_raptor_lin_state_o1 = LIN2_GetStatus(LIN2_LIN2_NODE, (uint32_t *)
      &rtb_raptor_lin_state_o3, (uint32_t *)&rtb_raptor_lin_state_o2);
  }

  /* RelationalOperator: '<S56>/Relational Operator' incorporates:
   *  UnitDelay: '<S56>/Delay Input1'
   */
  rtb_RelationalOperator = (rtb_raptor_lin_state_o2 ==
    Lightning_McSeas_VCU_Current_Mode_DWork.DelayInput1_DSTATE);

  /* Logic: '<S45>/Logical Operator3' */
  rtb_Compare_n = !rtb_RelationalOperator;

  /* MultiPortSwitch: '<S50>/Multiport Switch1' incorporates:
   *  Constant: '<S50>/Constant1'
   */
  if (!rtb_Compare_n) {
    /* MultiPortSwitch: '<S50>/Multiport Switch' incorporates:
     *  Constant: '<S50>/Constant'
     *  Logic: '<S50>/Logical Operator1'
     *  Sum: '<S50>/Add'
     *  UnitDelay: '<S50>/Unit Delay1'
     *  UnitDelay: '<S50>/Unit Delay2'
     */
    if (Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay2_DSTATE ||
        (!rtb_RelationalOperator)) {
      rtb_MultiportSwitch1 =
        Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay1_DSTATE;
    } else {
      rtb_MultiportSwitch1 =
        Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay1_DSTATE + 1U;
    }

    /* End of MultiPortSwitch: '<S50>/Multiport Switch' */
  } else {
    rtb_MultiportSwitch1 = 0U;
  }

  /* End of MultiPortSwitch: '<S50>/Multiport Switch1' */
  /* Logic: '<S50>/Logical Operator3' incorporates:
   *  Logic: '<S50>/Logical Operator4'
   *  RelationalOperator: '<S50>/Relational Operator'
   *  S-Function (raptor_sfun_adjustment): '<S50>/raptor_adjustment'
   */
  rtb_RelationalOperator = ((rtb_MultiportSwitch1 >=
    (Wake_LIN2_SleepDelayTime_Data())) && (!rtb_Compare_n));

  /* S-Function (raptor_sfun_can_state): '<S45>/raptor_can_state1' */
  /* S-Function Block: <S45>/raptor_can_state1 */
  UNUSED_VAR(rtb_raptor_can_state1_o1);
  get_CAN_bus_state(CAN2, (uint32_t*)&rtb_raptor_can_state1_o2, (uint32_t*)
                    &rtb_raptor_can_state1_o3);

  /* Logic: '<S45>/Logical Operator' incorporates:
   *  Logic: '<S49>/Logical Operator1'
   *  MultiPortSwitch: '<S49>/Multiport Switch1'
   *  RelationalOperator: '<S55>/Relational Operator'
   *  UnitDelay: '<S55>/Delay Input1'
   */
  rtb_Compare_n = (rtb_raptor_can_state1_o2 !=
                   Lightning_McSeas_VCU_Current_Mode_DWork.DelayInput1_DSTATE_j);

  /* MultiPortSwitch: '<S49>/Multiport Switch1' incorporates:
   *  Constant: '<S49>/Constant1'
   */
  if (!rtb_Compare_n) {
    /* MultiPortSwitch: '<S49>/Multiport Switch' incorporates:
     *  Constant: '<S49>/Constant'
     *  Logic: '<S49>/Logical Operator1'
     *  Sum: '<S49>/Add'
     *  UnitDelay: '<S49>/Unit Delay1'
     *  UnitDelay: '<S49>/Unit Delay2'
     */
    if (Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay2_DSTATE_b ||
        rtb_Compare_n) {
      rtb_MultiportSwitch1_a =
        Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay1_DSTATE_m;
    } else {
      rtb_MultiportSwitch1_a =
        Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay1_DSTATE_m + 1U;
    }

    /* End of MultiPortSwitch: '<S49>/Multiport Switch' */
  } else {
    rtb_MultiportSwitch1_a = 0U;
  }

  /* Logic: '<S49>/Logical Operator3' incorporates:
   *  Logic: '<S49>/Logical Operator4'
   *  RelationalOperator: '<S49>/Relational Operator'
   *  S-Function (raptor_sfun_adjustment): '<S49>/raptor_adjustment'
   */
  rtb_RelationalOperator_i = ((rtb_MultiportSwitch1_a >=
    (Wake_CAN2_SleepDelayTime_Data())) && (!rtb_Compare_n));

  /* S-Function (raptor_sfun_analog_in): '<S45>/raptor_analog_in1' */
  /* S-Function Block: WAKE_INPUT1 */
  {
    rtb_raptor_analog_in1 = ADC_Read_Chan(KEYSW);
  }

  /* RelationalOperator: '<S45>/Relational Operator1' incorporates:
   *  S-Function (raptor_sfun_adjustment): '<S45>/raptor_adjustment1'
   */
  rtb_RelationalOperator1 = (rtb_raptor_analog_in1 > ((uint16_T)
    (WAKE_INPUT1_Threshold_Data())));

  /* S-Function (raptor_sfun_delta_time): '<S53>/raptor_delta_time' */
  {
    rtb_raptor_delta_time = GetDeltaTime_ms((uint32_t*)
      &Lightning_McSeas_VCU_Current_Mode_DWork.raptor_delta_time_DWORK1);
  }

  /* MultiPortSwitch: '<S53>/Multiport Switch1' incorporates:
   *  Constant: '<S53>/Constant'
   *  RelationalOperator: '<S57>/FixPt Relational Operator'
   *  Sum: '<S53>/Add'
   *  UnitDelay: '<S53>/Unit Delay'
   *  UnitDelay: '<S57>/Delay Input1'
   */
  if (rtb_RelationalOperator1 ==
      Lightning_McSeas_VCU_Current_Mode_DWork.DelayInput1_DSTATE_o) {
    rtb_MultiportSwitch1_b = rtb_raptor_delta_time +
      Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay_DSTATE;
  } else {
    rtb_MultiportSwitch1_b = 0U;
  }

  /* End of MultiPortSwitch: '<S53>/Multiport Switch1' */
  /* MultiPortSwitch: '<S58>/Multiport Switch' incorporates:
   *  Constant: '<S58>/Constant'
   *  Logic: '<S53>/Logical Operator2'
   *  Logic: '<S53>/Logical Operator3'
   *  RelationalOperator: '<S53>/Relational Operator1'
   *  S-Function (raptor_sfun_adjustment): '<S53>/raptor_adjustment4'
   */
  if (rtb_RelationalOperator1 || (rtb_MultiportSwitch1_b < (KeySwLoTimeThr_Data())))
  {
    /* MultiPortSwitch: '<S58>/Multiport Switch1' incorporates:
     *  Constant: '<S58>/Constant1'
     *  UnitDelay: '<S58>/Unit Delay'
     */
    if (!rtb_RelationalOperator1) {
      rtb_MultiportSwitch_d =
        Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay_DSTATE_i;
    } else {
      rtb_MultiportSwitch_d = true;
    }

    /* End of MultiPortSwitch: '<S58>/Multiport Switch1' */
  } else {
    rtb_MultiportSwitch_d = false;
  }

  /* End of MultiPortSwitch: '<S58>/Multiport Switch' */

  /* Sum: '<S54>/Add1' incorporates:
   *  Constant: '<S51>/Constant'
   *  Constant: '<S52>/Constant'
   *  Gain: '<S54>/Gain12'
   *  Gain: '<S54>/Gain6'
   *  Gain: '<S54>/Gain8'
   *  Logic: '<S45>/Logical Operator1'
   *  Logic: '<S45>/Logical Operator2'
   *  Logic: '<S45>/Logical Operator4'
   *  Logic: '<S45>/Logical Operator5'
   *  RelationalOperator: '<S51>/Compare'
   *  RelationalOperator: '<S52>/Compare'
   */
  rtb_Add1 = (uint16_T)(((uint32_T)(((rtb_raptor_lin_state_o2 > 0U) &&
    (!rtb_RelationalOperator)) << 2) + (((rtb_raptor_can_state1_o2 > 0U) &&
    (!rtb_RelationalOperator_i)) << 1)) + rtb_MultiportSwitch_d);

  /* S-Function (raptor_sfun_internal_measurement): '<S54>/raptor_internal_measurement' incorporates:
   *  Gain: '<S54>/Gain4'
   *  Gain: '<S54>/Gain5'
   *  S-Function (raptor_sfun_adjustment): '<S54>/raptor_adjustment'
   *  S-Function (raptor_sfun_adjustment): '<S54>/raptor_adjustment1'
   *  S-Function (raptor_sfun_adjustment): '<S54>/raptor_adjustment2'
   *  Sum: '<S54>/Add'
   */
  rtb_raptor_internal_measurement = (uint16_T)(((uint32_T)
    ((GCM48Wake_LIN2_cal_Data()) << 2) + ((GCM48Wake_CAN2_cal_Data()) << 1)) +
    (GCM48Wake_INPUT1_cal_Data()));

  /* S-Function (sfix_bitop): '<S54>/Bitwise AND' */
  rtb_BitwiseAND = (uint16_T)(rtb_Add1 & rtb_raptor_internal_measurement);

  /* RelationalOperator: '<S59>/Compare' incorporates:
   *  Constant: '<S59>/Constant'
   */
  rtb_Compare_n = (rtb_BitwiseAND > 0);

  /* Logic: '<S39>/Logical Operator1' incorporates:
   *  S-Function (raptor_sfun_data_read): '<S39>/raptor_data_read1'
   */
  rtb_KeepOnrequestiscurrentlytrue = (rtb_Compare_n || KeepModuleOn_Data());

  /* MultiPortSwitch: '<S40>/Multiport Switch1' incorporates:
   *  Constant: '<S40>/Constant1'
   */
  if (!rtb_KeepOnrequestiscurrentlytrue) {
    /* MultiPortSwitch: '<S40>/Multiport Switch' incorporates:
     *  Constant: '<S40>/Constant'
     *  Sum: '<S40>/Add'
     *  UnitDelay: '<S40>/Unit Delay1'
     *  UnitDelay: '<S40>/Unit Delay2'
     */
    if (Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay2_DSTATE_j) {
      rtb_MultiportSwitch1_p =
        Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay1_DSTATE_a;
    } else {
      rtb_MultiportSwitch1_p =
        Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay1_DSTATE_a + 1U;
    }

    /* End of MultiPortSwitch: '<S40>/Multiport Switch' */
  } else {
    rtb_MultiportSwitch1_p = 0U;
  }

  /* End of MultiPortSwitch: '<S40>/Multiport Switch1' */
  /* Logic: '<S40>/Logical Operator3' incorporates:
   *  Logic: '<S40>/Logical Operator4'
   *  RelationalOperator: '<S40>/Relational Operator'
   *  S-Function (raptor_sfun_adjustment): '<S40>/raptor_adjustment'
   */
  rtb_LogicalOperator3_m = ((rtb_MultiportSwitch1_p >=
    (Wake_DlyStopOfFgndTaskTime_Data())) && (!rtb_KeepOnrequestiscurrentlytrue));

  /* MultiPortSwitch: '<S43>/Multiport Switch' incorporates:
   *  Constant: '<S43>/Constant'
   */
  if (!rtb_LogicalOperator3_m) {
    /* MultiPortSwitch: '<S43>/Multiport Switch1' incorporates:
     *  Constant: '<S43>/Constant1'
     *  UnitDelay: '<S43>/Unit Delay'
     */
    if (!rtb_KeepOnrequestiscurrentlytrue) {
      rtb_MultiportSwitch_ko =
        Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay_DSTATE_ik;
    } else {
      rtb_MultiportSwitch_ko = true;
    }

    /* End of MultiPortSwitch: '<S43>/Multiport Switch1' */
  } else {
    rtb_MultiportSwitch_ko = false;
  }

  /* End of MultiPortSwitch: '<S43>/Multiport Switch' */

  /* Logic: '<S39>/Logical Operator4' */
  rtb_KeepOnrequestiscurrentlytrue = (rtb_KeepOnrequestiscurrentlytrue ||
    rtb_MultiportSwitch_ko);

  /* Outputs for Triggered SubSystem: '<S39>/Raise Shutdown Event' incorporates:
   *  TriggerPort: '<S41>/init state = 1 to trigger at wakeup if awoken by a wake source  that we want to ignore'
   */
  if ((!rtb_KeepOnrequestiscurrentlytrue) &&
      (Lightning_McSeas_VCU_Current_Mode_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE
       != ZERO_ZCSIG)) {
    /* S-Function (raptor_sfun_data_write): '<S41>/raptor_data_write' incorporates:
     *  Constant: '<S41>/Constant'
     */
    FgndTasksStopped_Data() = true;

    /* S-Function (fcgen): '<S41>/Function-Call Generator' incorporates:
     *  SubSystem: '<S41>/raptor_shutdown'
     */
    /* S-Function (raptor_sfun_shutdown): '<S46>/raptor_data_write' */
    /* S-Function Block */
    {
      extern void App_Shutdown(void);
      App_Shutdown();
    }

    /* End of Outputs for S-Function (fcgen): '<S41>/Function-Call Generator' */
  }

  Lightning_McSeas_VCU_Current_Mode_PrevZCSigState.RaiseShutdownEvent_Trig_ZCE =
    rtb_KeepOnrequestiscurrentlytrue;

  /* End of Outputs for SubSystem: '<S39>/Raise Shutdown Event' */

  /* Outputs for Triggered SubSystem: '<S39>/Raise Startup Event' incorporates:
   *  TriggerPort: '<S42>/init state zero so it triggers at wake if wake request is true'
   */
  if (rtb_KeepOnrequestiscurrentlytrue &&
      (Lightning_McSeas_VCU_Current_Mode_PrevZCSigState.RaiseStartupEvent_Trig_ZCE
       != POS_ZCSIG)) {
    /* S-Function (raptor_sfun_measurement): '<S42>/raptor_measurement1' incorporates:
     *  Constant: '<S42>/Constant'
     */
    Wake_Debug_StartupEventRaised_Data() = true;

    /* S-Function (raptor_sfun_data_write): '<S42>/raptor_data_write' incorporates:
     *  Constant: '<S42>/Constant1'
     */
    FgndTasksStopped_Data() = false;

    /* S-Function (fcgen): '<S42>/Function-Call Generator' incorporates:
     *  SubSystem: '<S42>/raptor_startup'
     */
    /* S-Function (raptor_sfun_startup): '<S47>/raptor_data_write' */
    /* S-Function Block */
    {
      extern void App_Startup(void);
      App_Startup();
    }

    /* End of Outputs for S-Function (fcgen): '<S42>/Function-Call Generator' */
  }

  /* Outputs for Triggered SubSystem: '<S39>/Raise Shutdown Event' incorporates:
   *  TriggerPort: '<S41>/init state = 1 to trigger at wakeup if awoken by a wake source  that we want to ignore'
   */
  Lightning_McSeas_VCU_Current_Mode_PrevZCSigState.RaiseStartupEvent_Trig_ZCE =
    rtb_KeepOnrequestiscurrentlytrue;

  /* End of Outputs for SubSystem: '<S39>/Raise Shutdown Event' */
  /* End of Outputs for SubSystem: '<S39>/Raise Startup Event' */

  /* UnitDelay: '<S39>/Unit Delay' */
  rtb_UnitDelay_l = Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay_DSTATE_a;

  /* Outputs for Triggered SubSystem: '<S39>/Store EEPROM' incorporates:
   *  TriggerPort: '<S44>/Trigger'
   */
  if ((!Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay_DSTATE_a) &&
      (Lightning_McSeas_VCU_Current_Mode_PrevZCSigState.StoreEEPROM_Trig_ZCE !=
       ZERO_ZCSIG)) {
    /* S-Function (fcgen): '<S44>/Function-Call Generator' incorporates:
     *  SubSystem: '<S44>/raptor_store_nv'
     */
    /* S-Function (raptor_sfun_store_nv): '<S48>/raptor_data_write' */
    /* S-Function Block */
    {
      App_EE_Store();
    }

    /* End of Outputs for S-Function (fcgen): '<S44>/Function-Call Generator' */
  }

  /* End of UnitDelay: '<S39>/Unit Delay' */
  Lightning_McSeas_VCU_Current_Mode_PrevZCSigState.StoreEEPROM_Trig_ZCE =
    rtb_UnitDelay_l;

  /* End of Outputs for SubSystem: '<S39>/Store EEPROM' */

  /* S-Function (raptor_sfun_nv_status): '<S39>/raptor_sfun_nv_status' */
  /* S-Function Block */
  {
    rtb_raptor_sfun_nv_status = (EEPROM_State_Data() == EE_STORE_IN_PROGESS);
  }

  /* Logic: '<S39>/Logical Operator2' incorporates:
   *  UnitDelay: '<S39>/Unit Delay1'
   */
  rtb_LogicalOperator2_e = (rtb_raptor_sfun_nv_status ||
    rtb_KeepOnrequestiscurrentlytrue ||
    Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay1_DSTATE_o);

  /* S-Function (raptor_sfun_digital_out): '<S39>/raptor_digital_out' */
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

  /* S-Function (raptor_sfun_measurement): '<S40>/raptor_measurement' */
  Wake_DlyStopOfFgndTaskTTmr_Data() = rtb_MultiportSwitch1_p;

  /* S-Function (raptor_sfun_data_write): '<S45>/raptor_data_write1' */
  KeySw_Bgnd_Data() = rtb_MultiportSwitch_d;

  /* S-Function (raptor_sfun_measurement): '<S45>/raptor_measurement1' */
  Wake_INPUT1_Vlts_Data() = rtb_raptor_analog_in1;

  /* S-Function (raptor_sfun_measurement): '<S45>/raptor_measurement2' */
  Wake_LIN2_RxCount_Data() = rtb_raptor_lin_state_o2;

  /* S-Function (raptor_sfun_measurement): '<S45>/raptor_measurement5' */
  Wake_CAN2_RxCount_Data() = rtb_raptor_can_state1_o2;

  /* S-Function (raptor_sfun_measurement): '<S49>/raptor_measurement' */
  Wake_CAN2_SleepDelayTTmr_Data() = rtb_MultiportSwitch1_a;

  /* S-Function (raptor_sfun_measurement): '<S50>/raptor_measurement' */
  Wake_LIN2_SleepDelayTTmr_Data() = rtb_MultiportSwitch1;

  /* S-Function (raptor_sfun_measurement): '<S53>/raptor_measurement3' */
  dt_read_Data() = rtb_raptor_delta_time;

  /* Outputs for Enabled SubSystem: '<S54>/Startup Wake Source' incorporates:
   *  EnablePort: '<S60>/Enable'
   */
  /* UnitDelay: '<S54>/init = 1' */
  if (Lightning_McSeas_VCU_Current_Mode_DWork.init1_DSTATE) {
    /* S-Function (raptor_sfun_measurement): '<S60>/raptor_measurement' */
    WakeSource_Startup_Data() = rtb_BitwiseAND;
  }

  /* End of UnitDelay: '<S54>/init = 1' */
  /* End of Outputs for SubSystem: '<S54>/Startup Wake Source' */

  /* S-Function (raptor_sfun_data_write): '<S54>/raptor_data_write1' */
  Wake_AnyWakeSourceActive_Data() = rtb_Compare_n;

  /* S-Function (raptor_sfun_data_write): '<S54>/raptor_data_write2' */
  Wake_SourceBitAndWakeConfigRegister_Data() = rtb_BitwiseAND;

  /* S-Function (raptor_sfun_data_write): '<S54>/raptor_data_write3' */
  WakeSource_Current_Data() = rtb_Add1;

  /* S-Function (raptor_sfun_measurement): '<S54>/raptor_measurement2' */
  WakeConfigRegister_Data() = rtb_raptor_internal_measurement;

  /* S-Function (raptor_sfun_internal_measurement): '<S54>/raptor_internal_measurement' */
  /* S-Function Block: WAKE_SOURCE */
  {
    extern uint8_t Get_Wake_Source( void );
    rtb_raptor_internal_measurement = Get_Wake_Source();
  }

  /* S-Function (raptor_sfun_measurement): '<S54>/raptor_measurement' */
  WakeSource_RaptorIntrnlMeas_Data() = rtb_raptor_internal_measurement;

  /* Update for UnitDelay: '<S56>/Delay Input1' */
  Lightning_McSeas_VCU_Current_Mode_DWork.DelayInput1_DSTATE =
    rtb_raptor_lin_state_o2;

  /* Update for UnitDelay: '<S50>/Unit Delay2' */
  Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay2_DSTATE =
    rtb_RelationalOperator;

  /* Update for UnitDelay: '<S50>/Unit Delay1' */
  Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay1_DSTATE =
    rtb_MultiportSwitch1;

  /* Update for UnitDelay: '<S55>/Delay Input1' */
  Lightning_McSeas_VCU_Current_Mode_DWork.DelayInput1_DSTATE_j =
    rtb_raptor_can_state1_o2;

  /* Update for UnitDelay: '<S49>/Unit Delay2' */
  Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay2_DSTATE_b =
    rtb_RelationalOperator_i;

  /* Update for UnitDelay: '<S49>/Unit Delay1' */
  Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay1_DSTATE_m =
    rtb_MultiportSwitch1_a;

  /* Update for UnitDelay: '<S57>/Delay Input1' */
  Lightning_McSeas_VCU_Current_Mode_DWork.DelayInput1_DSTATE_o =
    rtb_RelationalOperator1;

  /* Update for UnitDelay: '<S53>/Unit Delay' */
  Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay_DSTATE =
    rtb_MultiportSwitch1_b;

  /* Update for UnitDelay: '<S58>/Unit Delay' */
  Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay_DSTATE_i =
    rtb_MultiportSwitch_d;

  /* Update for UnitDelay: '<S40>/Unit Delay2' */
  Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay2_DSTATE_j =
    rtb_LogicalOperator3_m;

  /* Update for UnitDelay: '<S40>/Unit Delay1' */
  Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay1_DSTATE_a =
    rtb_MultiportSwitch1_p;

  /* Update for UnitDelay: '<S43>/Unit Delay' */
  Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay_DSTATE_ik =
    rtb_MultiportSwitch_ko;

  /* Update for UnitDelay: '<S39>/Unit Delay' */
  Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay_DSTATE_a =
    rtb_KeepOnrequestiscurrentlytrue;

  /* Update for UnitDelay: '<S39>/Unit Delay1' */
  Lightning_McSeas_VCU_Current_Mode_DWork.UnitDelay1_DSTATE_o = rtb_UnitDelay_l;

  /* Update for UnitDelay: '<S54>/init = 1' incorporates:
   *  Constant: '<S54>/Constant'
   */
  Lightning_McSeas_VCU_Current_Mode_DWork.init1_DSTATE = false;
}

/* System initialize for function-call system: '<Root>/Foreground' */
void Lightning_McSeas_VCU_Current_Mode_Foreground_Init(void)
{
  /* Start for S-Function (raptor_sfun_digital_in): '<S38>/raptor_digital_in' */

  /* S-Function Block: DG1 */
  {
    extern void din_pad_config(E_DIGITAL_INPUT din);
    din_pad_config(DG1_DG);
  }

  /* Start for S-Function (raptor_sfun_digital_in): '<S38>/raptor_digital_in1' */

  /* S-Function Block: DG2 */
  {
    extern void din_pad_config(E_DIGITAL_INPUT din);
    din_pad_config(DG2_DG);
  }
}

/* Enable for function-call system: '<Root>/Foreground' */
void Lightning_McSeas_VCU_Current_Mode_Foreground_Enable(void)
{
  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S8>/raptor_can_txmsg4' */
  /* Level2 S-Function Block: '<S8>/raptor_can_txmsg4' (raptor_sfun_can_txmsg) */
  can_set_period_72__0002(0U);

  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S8>/raptor_can_txmsg3' */
  /* Level2 S-Function Block: '<S8>/raptor_can_txmsg3' (raptor_sfun_can_txmsg) */
  can_set_period_71__0005(0U);

  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S9>/raptor_can_txmsg' incorporates:
   *  Constant: '<S9>/Constant1'
   */
  /* Level2 S-Function Block: '<S9>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_175__0002(0U);

  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S9>/raptor_can_txmsg1' incorporates:
   *  Constant: '<S9>/Constant1'
   */
  /* Level2 S-Function Block: '<S9>/raptor_can_txmsg1' (raptor_sfun_can_txmsg) */
  can_set_period_176__0002(0U);

  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S9>/raptor_can_txmsg3' */
  /* Level2 S-Function Block: '<S9>/raptor_can_txmsg3' (raptor_sfun_can_txmsg) */
  can_set_period_177__0002(0U);

  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S10>/raptor_can_txmsg' */
  /* Level2 S-Function Block: '<S10>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_285__0002(0U);

  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S11>/raptor_can_txmsg' incorporates:
   *  Constant: '<S11>/Constant'
   */
  /* Level2 S-Function Block: '<S11>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_573__0004(0U);

  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S11>/raptor_can_txmsg1' incorporates:
   *  Constant: '<S11>/Constant'
   */
  /* Level2 S-Function Block: '<S11>/raptor_can_txmsg1' (raptor_sfun_can_txmsg) */
  can_set_period_574__0001(0U);

  /* Enable for S-Function (raptor_sfun_can_txmsg): '<S38>/raptor_can_txmsg' */
  /* Level2 S-Function Block: '<S38>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_612__0001(0U);
}

/* Disable for function-call system: '<Root>/Foreground' */
void Lightning_McSeas_VCU_Current_Mode_Foreground_Disable(void)
{
  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S8>/raptor_can_txmsg4' */
  /* Level2 S-Function Block: '<S8>/raptor_can_txmsg4' (raptor_sfun_can_txmsg) */
  can_set_period_72__0002(0);

  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S8>/raptor_can_txmsg3' */
  /* Level2 S-Function Block: '<S8>/raptor_can_txmsg3' (raptor_sfun_can_txmsg) */
  can_set_period_71__0005(0);

  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S9>/raptor_can_txmsg' incorporates:
   *  Constant: '<S9>/Constant1'
   */
  /* Level2 S-Function Block: '<S9>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_175__0002(0);

  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S9>/raptor_can_txmsg1' incorporates:
   *  Constant: '<S9>/Constant1'
   */
  /* Level2 S-Function Block: '<S9>/raptor_can_txmsg1' (raptor_sfun_can_txmsg) */
  can_set_period_176__0002(0);

  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S9>/raptor_can_txmsg3' */
  /* Level2 S-Function Block: '<S9>/raptor_can_txmsg3' (raptor_sfun_can_txmsg) */
  can_set_period_177__0002(0);

  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S10>/raptor_can_txmsg' */
  /* Level2 S-Function Block: '<S10>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_285__0002(0);

  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S11>/raptor_can_txmsg' incorporates:
   *  Constant: '<S11>/Constant'
   */
  /* Level2 S-Function Block: '<S11>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_573__0004(0);

  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S11>/raptor_can_txmsg1' incorporates:
   *  Constant: '<S11>/Constant'
   */
  /* Level2 S-Function Block: '<S11>/raptor_can_txmsg1' (raptor_sfun_can_txmsg) */
  can_set_period_574__0001(0);

  /* Disable for S-Function (raptor_sfun_can_txmsg): '<S38>/raptor_can_txmsg' */
  /* Level2 S-Function Block: '<S38>/raptor_can_txmsg' (raptor_sfun_can_txmsg) */
  can_set_period_612__0001(0);
}

/* Output and update for function-call system: '<Root>/Foreground' */
void Lightning_McSeas_VCU_Current_Mode_Foreground(void)
{
  /* local block i/o variables */
  real_T rtb_raptor_can_rxmsg_o2;
  real_T rtb_raptor_can_rxmsg_o3_l;
  real_T rtb_raptor_can_rxmsg1_o2;
  real_T rtb_raptor_can_rxmsg1_o5;
  real_T rtb_raptor_can_rxmsg1_o3_f;
  real_T rtb_Merge;
  real_T rtb_Merge_j;
  real_T rtb_raptor_can_rxmsg1_o4_f;
  real_T rtb_Merge_d;
  real_T rtb_raptor_can_rxmsg1_o2_a;
  uint16_T rtb_raptor_can_rxmsg_o1;
  uint16_T rtb_raptor_can_rxmsg_o1_i;
  uint16_T rtb_raptor_can_rxmsg1_o1;
  uint16_T rtb_raptor_can_rxmsg1_o1_k;
  uint16_T rtb_raptor_can_rxmsg2_o1;
  boolean_T rtb_raptor_digital_in;
  boolean_T rtb_raptor_digital_in1;
  real_T rtb_Gain2;

  /* S-Function (raptor_sfun_can_rxmsg): '<S7>/raptor_can_rxmsg' */

  /* S-Function Block:<S7>/raptor_can_rxmsg */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint32_T temp;
    can_get_599__0001(&rtb_raptor_can_rxmsg_o1, NULL, NULL, &data[0], 8);

    /* Signal: Channel_1 */
    temp = 0;
    temp |= ((uint32_T)data[0U]) ;
    temp |= ((uint32_T)data[1U]) << 8;
    rtb_raptor_can_rxmsg_o2 = (((real_T) temp ) + (real_T)-1230.0);

    /* Signal: Channel_2 */
    temp = 0;
    temp |= ((uint32_T)data[2U]) ;
    temp |= ((uint32_T)data[3U]) << 8;
    rtb_raptor_can_rxmsg_o3_l = (((real_T) temp ) + (real_T)-1230.0);

    /* Signal: Channel_3 */
    temp = 0;
    temp |= ((uint32_T)data[4U]) ;
    temp |= ((uint32_T)data[5U]) << 8;
    rtb_raptor_can_rxmsg1_o4_f = (((real_T) temp ) + (real_T)-1230.0);

    /* Signal: Channel_4 */
    temp = 0;
    temp |= ((uint32_T)data[6U]) ;
    temp |= ((uint32_T)data[7U]) << 8;
    rtb_raptor_can_rxmsg1_o3_f = (((real_T) temp ) + (real_T)-1230.0);
  }

  /* Gain: '<S8>/Gain2' */
  rtb_Gain2 = 51.0 * rtb_raptor_can_rxmsg1_o4_f;

  /* S-Function (raptor_sfun_can_txmsg): '<S8>/raptor_can_txmsg4' */

  /* S-Function Block:<S8>/raptor_can_txmsg4 */
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

  /* Gain: '<S8>/Gain1' */
  rtb_Gain2 = 51.0 * rtb_raptor_can_rxmsg1_o3_f;

  /* S-Function (raptor_sfun_can_txmsg): '<S8>/raptor_can_txmsg3' */

  /* S-Function Block:<S8>/raptor_can_txmsg3 */
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

  /* S-Function (raptor_sfun_can_rxmsg): '<S9>/raptor_can_rxmsg' */

  /* S-Function Block:<S9>/raptor_can_rxmsg */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint32_T temp;
    can_get_173__0002(&rtb_raptor_can_rxmsg_o1_i, NULL, NULL, &data[0], 8);

    /* Signal: bcm_cell_vmax_b */
    temp = 0;
    temp |= (((uint32_T)data[6U]) & 240) >> 4;
    temp |= ((uint32_T)data[5U]) << 4;
    rtb_raptor_can_rxmsg1_o3_f = (((real_T) temp / (real_T) 500.0) );

    /* Signal: bcm_cell_vmin_b not connected */

    /* Signal: bcm_i_lem_b     not connected */

    /* Signal: bcm_vbat_b      not connected */

    /* Signal: bcm_vbus_b      not connected */

    /* Signal: bcm_vfuse_b     not connected */
  }

  /* Outputs for IfAction SubSystem: '<S12>/If Action Subsystem1' incorporates:
   *  ActionPort: '<S16>/Action Port'
   */
  /* Outputs for IfAction SubSystem: '<S12>/If Action Subsystem' incorporates:
   *  ActionPort: '<S15>/Action Port'
   */
  /* If: '<S12>/If' incorporates:
   *  Inport: '<S15>/In1'
   *  Inport: '<S16>/In1'
   *  S-Function (raptor_sfun_can_rxmsg): '<S9>/raptor_can_rxmsg1'
   */
  rtb_raptor_can_rxmsg1_o4_f = !(rtb_raptor_can_rxmsg1_o3_f > 4.15);

  /* End of Outputs for SubSystem: '<S12>/If Action Subsystem' */
  /* End of Outputs for SubSystem: '<S12>/If Action Subsystem1' */

  /* S-Function (raptor_sfun_can_rxmsg): '<S7>/raptor_can_rxmsg1' */

  /* S-Function Block:<S7>/raptor_can_rxmsg1 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint32_T temp;
    can_get_600__0001(&rtb_raptor_can_rxmsg1_o1, NULL, NULL, &data[0], 8);

    /* Signal: Channel_5 */
    temp = 0;
    temp |= ((uint32_T)data[0U]) ;
    temp |= ((uint32_T)data[1U]) << 8;
    rtb_raptor_can_rxmsg1_o2 = (((real_T) temp ) + (real_T)-1230.0);

    /* Signal: Channel_6 not connected */

    /* Signal: Channel_7 not connected */

    /* Signal: Channel_8 */
    temp = 0;
    temp |= ((uint32_T)data[6U]) ;
    temp |= ((uint32_T)data[7U]) << 8;
    rtb_raptor_can_rxmsg1_o2_a = (((real_T) temp ) + (real_T)-1230.0);
  }

  /* Outputs for IfAction SubSystem: '<S14>/If Action Subsystem1' incorporates:
   *  ActionPort: '<S21>/Action Port'
   */
  /* Outputs for IfAction SubSystem: '<S14>/If Action Subsystem' incorporates:
   *  ActionPort: '<S20>/Action Port'
   */
  /* If: '<S14>/If' incorporates:
   *  Inport: '<S20>/In1'
   *  Inport: '<S21>/In1'
   *  S-Function (raptor_sfun_can_rxmsg): '<S9>/raptor_can_rxmsg1'
   */
  rtb_raptor_can_rxmsg1_o2_a = !(rtb_raptor_can_rxmsg1_o2_a > 1200.0);

  /* End of Outputs for SubSystem: '<S14>/If Action Subsystem' */
  /* End of Outputs for SubSystem: '<S14>/If Action Subsystem1' */

  /* S-Function (raptor_sfun_can_rxmsg): '<S9>/raptor_can_rxmsg1' incorporates:
   *  Product: '<S9>/Product'
   */
  rtb_raptor_can_rxmsg1_o4_f *= rtb_raptor_can_rxmsg1_o2_a;

  /* If: '<S13>/If' */
  if (rtb_raptor_can_rxmsg1_o3_f < 4.05) {
    /* Outputs for IfAction SubSystem: '<S13>/If Action Subsystem' incorporates:
     *  ActionPort: '<S17>/Action Port'
     */
    /* S-Function (raptor_sfun_can_rxmsg): '<S9>/raptor_can_rxmsg1' incorporates:
     *  Constant: '<S13>/Constant'
     *  Inport: '<S17>/In1'
     */
    rtb_raptor_can_rxmsg1_o2_a = 16.0;

    /* End of Outputs for SubSystem: '<S13>/If Action Subsystem' */
  } else if (rtb_raptor_can_rxmsg1_o3_f < 4.1) {
    /* Outputs for IfAction SubSystem: '<S13>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S19>/Action Port'
     */
    /* S-Function (raptor_sfun_can_rxmsg): '<S9>/raptor_can_rxmsg1' incorporates:
     *  Constant: '<S9>/Constant'
     *  Gain: '<S9>/Gain'
     *  Inport: '<S19>/In1'
     *  Sum: '<S9>/Sum'
     */
    rtb_raptor_can_rxmsg1_o2_a = -242.0 * rtb_raptor_can_rxmsg1_o3_f + 996.1;

    /* End of Outputs for SubSystem: '<S13>/If Action Subsystem2' */
  } else {
    /* Outputs for IfAction SubSystem: '<S13>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S18>/Action Port'
     */
    /* S-Function (raptor_sfun_can_rxmsg): '<S9>/raptor_can_rxmsg1' incorporates:
     *  Constant: '<S13>/Constant1'
     *  Inport: '<S18>/In1'
     */
    rtb_raptor_can_rxmsg1_o2_a = 3.9;

    /* End of Outputs for SubSystem: '<S13>/If Action Subsystem1' */
  }

  /* End of If: '<S13>/If' */

  /* S-Function (raptor_sfun_can_rxmsg): '<S9>/raptor_can_rxmsg1' incorporates:
   *  Gain: '<S9>/Gain1'
   */
  rtb_raptor_can_rxmsg1_o2_a *= 10.0;

  /* S-Function (raptor_sfun_can_txmsg): '<S9>/raptor_can_txmsg' incorporates:
   *  Constant: '<S9>/Constant1'
   */

  /* S-Function Block:<S9>/raptor_can_txmsg */
  {
    uint8_T data[8U] = { 0, 0, 0, 0, 0, 0, 0, 0, };

    uint32_T temp;
    uint8_T temp_shift;

    /* Signal: charger_control     */
    /* charger_control     - StartBit: 32U, BitLength: 8U, Endian: 0U */

    /* signal type is unsigned */
    if (rtb_raptor_can_rxmsg1_o4_f < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_raptor_can_rxmsg1_o4_f > 255.0000000000F)
      temp = (uint32_T)255U;
    else {
      if ((real_T)rtb_raptor_can_rxmsg1_o4_f < 0)
        temp = (uint32_T)(int32_T)((rtb_raptor_can_rxmsg1_o4_f));
      else
        temp = (uint32_T)((rtb_raptor_can_rxmsg1_o4_f));
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[4U] |= temp_shift;

    /* Signal: charger_max_current */
    /* charger_max_current - StartBit: 24U, BitLength: 16U, Endian: 1U */

    /* signal type is unsigned */
    if (rtb_raptor_can_rxmsg1_o2_a < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_raptor_can_rxmsg1_o2_a > 6553.5000000000F)
      temp = (uint32_T)65535U;
    else {
      if ((real_T)rtb_raptor_can_rxmsg1_o2_a < 0)
        temp = (uint32_T)(int32_T)((rtb_raptor_can_rxmsg1_o2_a) * 10.0f);
      else
        temp = (uint32_T)((rtb_raptor_can_rxmsg1_o2_a) * 10.0f);
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
    can_set_period_175__0002(0U);
    can_send_175__0002(403105268U & 0x1FFFFFFF, 1, 8U, &data[0]);
  }

  /* S-Function (raptor_sfun_can_txmsg): '<S9>/raptor_can_txmsg1' incorporates:
   *  Constant: '<S9>/Constant1'
   */

  /* S-Function Block:<S9>/raptor_can_txmsg1 */
  {
    uint8_T data[8U] = { 0, 0, 0, 0, 0, 0, 0, 0, };

    uint32_T temp;
    uint8_T temp_shift;

    /* Signal: charger_control     */
    /* charger_control     - StartBit: 32U, BitLength: 8U, Endian: 0U */

    /* signal type is unsigned */
    if (rtb_raptor_can_rxmsg1_o4_f < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_raptor_can_rxmsg1_o4_f > 255.0000000000F)
      temp = (uint32_T)255U;
    else {
      if ((real_T)rtb_raptor_can_rxmsg1_o4_f < 0)
        temp = (uint32_T)(int32_T)((rtb_raptor_can_rxmsg1_o4_f));
      else
        temp = (uint32_T)((rtb_raptor_can_rxmsg1_o4_f));
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[4U] |= temp_shift;

    /* Signal: charger_max_current */
    /* charger_max_current - StartBit: 24U, BitLength: 16U, Endian: 1U */

    /* signal type is unsigned */
    if (rtb_raptor_can_rxmsg1_o2_a < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_raptor_can_rxmsg1_o2_a > 6553.5000000000F)
      temp = (uint32_T)65535U;
    else {
      if ((real_T)rtb_raptor_can_rxmsg1_o2_a < 0)
        temp = (uint32_T)(int32_T)((rtb_raptor_can_rxmsg1_o2_a) * 10.0f);
      else
        temp = (uint32_T)((rtb_raptor_can_rxmsg1_o2_a) * 10.0f);
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
    can_set_period_176__0002(0U);
    can_send_176__0002(403105268U & 0x1FFFFFFF, 1, 8U, &data[0]);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S9>/raptor_can_rxmsg1' */

  /* S-Function Block:<S9>/raptor_can_rxmsg1 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint32_T temp;
    can_get_174__0002(&rtb_raptor_can_rxmsg1_o1_k, NULL, NULL, &data[0], 8);

    /* Signal: charger_comm_state     */
    temp = 0;
    temp |= (((uint32_T)data[4U]) & 16) >> 4;
    rtb_raptor_can_rxmsg1_o2_a = (((real_T) temp ) );

    /* Signal: charger_hw_stat        */
    temp = 0;
    temp |= (((uint32_T)data[4U]) & 1) ;
    rtb_raptor_can_rxmsg1_o3_f = (((real_T) temp ) );

    /* Signal: charger_input_voltage  */
    temp = 0;
    temp |= (((uint32_T)data[4U]) & 4) >> 2;
    rtb_raptor_can_rxmsg1_o4_f = (((real_T) temp ) );

    /* Signal: charger_output_current */
    temp = 0;
    temp |= ((uint32_T)data[3U]) ;
    temp |= ((uint32_T)data[2U]) << 8;
    rtb_raptor_can_rxmsg1_o5 = (((real_T) temp / (real_T) 10.0) );

    /* Signal: charger_output_voltage */
    temp = 0;
    temp |= ((uint32_T)data[1U]) ;
    temp |= ((uint32_T)data[0U]) << 8;
    rtb_Merge = (((real_T) temp / (real_T) 10.0) );

    /* Signal: charger_state          */
    temp = 0;
    temp |= (((uint32_T)data[4U]) & 8) >> 3;
    rtb_Merge_d = (((real_T) temp ) );

    /* Signal: charger_temp           */
    temp = 0;
    temp |= (((uint32_T)data[4U]) & 2) >> 1;
    rtb_Merge_j = (((real_T) temp ) );
  }

  /* S-Function (raptor_sfun_can_txmsg): '<S9>/raptor_can_txmsg3' */

  /* S-Function Block:<S9>/raptor_can_txmsg3 */
  {
    uint8_T data[8U] = { 0, 0, 0, 0, 0, 0, 0, 0, };

    uint32_T temp;
    uint8_T temp_shift;

    /* Signal: charger_comm_state     */
    /* charger_comm_state     - StartBit: 36U, BitLength: 1U, Endian: 0U */

    /* signal type is unsigned */
    if (rtb_raptor_can_rxmsg1_o2_a < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_raptor_can_rxmsg1_o2_a > 1.0000000000F)
      temp = (uint32_T)1U;
    else {
      if ((real_T)rtb_raptor_can_rxmsg1_o2_a < 0)
        temp = (uint32_T)(int32_T)((rtb_raptor_can_rxmsg1_o2_a));
      else
        temp = (uint32_T)((rtb_raptor_can_rxmsg1_o2_a));
    }

    temp_shift = (uint8_T)(temp << 4);
    temp_shift &= ((uint8_T)16U);
    data[4U] |= temp_shift;

    /* Signal: charger_hw_stat        */
    /* charger_hw_stat        - StartBit: 32U, BitLength: 1U, Endian: 0U */

    /* signal type is unsigned */
    if (rtb_raptor_can_rxmsg1_o3_f < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_raptor_can_rxmsg1_o3_f > 1.0000000000F)
      temp = (uint32_T)1U;
    else {
      if ((real_T)rtb_raptor_can_rxmsg1_o3_f < 0)
        temp = (uint32_T)(int32_T)((rtb_raptor_can_rxmsg1_o3_f));
      else
        temp = (uint32_T)((rtb_raptor_can_rxmsg1_o3_f));
    }

    temp_shift = (uint8_T)(temp >> 0);
    temp_shift &= ((uint8_T)1U);
    data[4U] |= temp_shift;

    /* Signal: charger_input_voltage  */
    /* charger_input_voltage  - StartBit: 34U, BitLength: 1U, Endian: 0U */

    /* signal type is unsigned */
    if (rtb_raptor_can_rxmsg1_o4_f < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_raptor_can_rxmsg1_o4_f > 1.0000000000F)
      temp = (uint32_T)1U;
    else {
      if ((real_T)rtb_raptor_can_rxmsg1_o4_f < 0)
        temp = (uint32_T)(int32_T)((rtb_raptor_can_rxmsg1_o4_f));
      else
        temp = (uint32_T)((rtb_raptor_can_rxmsg1_o4_f));
    }

    temp_shift = (uint8_T)(temp << 2);
    temp_shift &= ((uint8_T)4U);
    data[4U] |= temp_shift;

    /* Signal: charger_output_current */
    /* charger_output_current - StartBit: 24U, BitLength: 16U, Endian: 1U */

    /* signal type is unsigned */
    if (rtb_raptor_can_rxmsg1_o5 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_raptor_can_rxmsg1_o5 > 6553.5000000000F)
      temp = (uint32_T)65535U;
    else {
      if ((real_T)rtb_raptor_can_rxmsg1_o5 < 0)
        temp = (uint32_T)(int32_T)((rtb_raptor_can_rxmsg1_o5) * 10.0f);
      else
        temp = (uint32_T)((rtb_raptor_can_rxmsg1_o5) * 10.0f);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[3U] |= temp_shift;
    temp_shift = (uint8_T)(temp >> 8);
    data[2U] |= temp_shift;

    /* Signal: charger_output_voltage */
    /* charger_output_voltage - StartBit: 8U, BitLength: 16U, Endian: 1U */

    /* signal type is unsigned */
    if (rtb_Merge < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_Merge > 6553.5000000000F)
      temp = (uint32_T)65535U;
    else {
      if ((real_T)rtb_Merge < 0)
        temp = (uint32_T)(int32_T)((rtb_Merge) * 10.0f);
      else
        temp = (uint32_T)((rtb_Merge) * 10.0f);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[1U] |= temp_shift;
    temp_shift = (uint8_T)(temp >> 8);
    data[0U] |= temp_shift;

    /* Signal: charger_state          */
    /* charger_state          - StartBit: 35U, BitLength: 1U, Endian: 0U */

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

    temp_shift = (uint8_T)(temp << 3);
    temp_shift &= ((uint8_T)8U);
    data[4U] |= temp_shift;

    /* Signal: charger_temp           */
    /* charger_temp           - StartBit: 33U, BitLength: 1U, Endian: 0U */

    /* signal type is unsigned */
    if (rtb_Merge_j < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_Merge_j > 1.0000000000F)
      temp = (uint32_T)1U;
    else {
      if ((real_T)rtb_Merge_j < 0)
        temp = (uint32_T)(int32_T)((rtb_Merge_j));
      else
        temp = (uint32_T)((rtb_Merge_j));
    }

    temp_shift = (uint8_T)(temp << 1);
    temp_shift &= ((uint8_T)2U);
    data[4U] |= temp_shift;
    can_set_period_177__0002(0U);
    can_send_177__0002(419385573U & 0x1FFFFFFF, 1, 8U, &data[0]);
  }

  /* S-Function (raptor_sfun_can_rxmsg): '<S7>/raptor_can_rxmsg2' */

  /* S-Function Block:<S7>/raptor_can_rxmsg2 */
  {
    uint8_T data[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint32_T temp;
    can_get_601__0001(&rtb_raptor_can_rxmsg2_o1, NULL, NULL, &data[0], 8);

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

  /* Outputs for IfAction SubSystem: '<S23>/If Action Subsystem1' incorporates:
   *  ActionPort: '<S27>/Action Port'
   */
  /* Outputs for IfAction SubSystem: '<S23>/If Action Subsystem' incorporates:
   *  ActionPort: '<S26>/Action Port'
   */
  /* If: '<S23>/If' incorporates:
   *  Inport: '<S26>/Xa'
   *  Inport: '<S27>/Xb'
   *  Merge: '<S30>/Merge'
   */
  rtb_Merge = (rtb_Merge_d > 250.0);

  /* End of Outputs for SubSystem: '<S23>/If Action Subsystem' */
  /* End of Outputs for SubSystem: '<S23>/If Action Subsystem1' */

  /* Outputs for IfAction SubSystem: '<S22>/If Action Subsystem1' incorporates:
   *  ActionPort: '<S25>/Action Port'
   */
  /* Outputs for IfAction SubSystem: '<S22>/If Action Subsystem' incorporates:
   *  ActionPort: '<S24>/Action Port'
   */
  /* If: '<S22>/If' incorporates:
   *  Inport: '<S24>/Xa'
   *  Inport: '<S25>/Xb'
   *  Merge: '<S29>/Merge'
   */
  rtb_Merge_d = (rtb_Merge_d > 1200.0);

  /* End of Outputs for SubSystem: '<S22>/If Action Subsystem' */
  /* End of Outputs for SubSystem: '<S22>/If Action Subsystem1' */

  /* S-Function (raptor_sfun_can_txmsg): '<S10>/raptor_can_txmsg' */

  /* S-Function Block:<S10>/raptor_can_txmsg */
  {
    uint8_T data[4U] = { 0, 0, 0, 0, };

    uint32_T temp;
    uint8_T temp_shift;

    /* Signal: hsc_bcm_enable      */
    /* hsc_bcm_enable      - StartBit: 0U, BitLength: 1U, Endian: 1U */

    /* signal type is unsigned */
    if (rtb_Merge < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_Merge > 1.0000000000F)
      temp = (uint32_T)1U;
    else {
      if ((real_T)rtb_Merge < 0)
        temp = (uint32_T)(int32_T)((rtb_Merge));
      else
        temp = (uint32_T)((rtb_Merge));
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
    can_set_period_285__0002(0U);
    can_send_285__0002(1024U & 0x7FF, 0, 4U, &data[0]);
  }

  /* If: '<S29>/If' */
  if (rtb_raptor_can_rxmsg1_o2 > 1200.0) {
    /* Outputs for IfAction SubSystem: '<S29>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S34>/Action Port'
     */
    /* Merge: '<S29>/Merge' incorporates:
     *  Constant: '<S29>/Constant2'
     *  Inport: '<S34>/Xb'
     */
    rtb_Merge_d = 1.0;

    /* End of Outputs for SubSystem: '<S29>/If Action Subsystem3' */
  } else if (rtb_raptor_can_rxmsg1_o2 > 250.0) {
    /* Outputs for IfAction SubSystem: '<S29>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S33>/Action Port'
     */
    /* Merge: '<S29>/Merge' incorporates:
     *  Constant: '<S29>/Constant1'
     *  Inport: '<S33>/Xb'
     */
    rtb_Merge_d = 0.0;

    /* End of Outputs for SubSystem: '<S29>/If Action Subsystem2' */
  } else {
    /* Outputs for IfAction SubSystem: '<S29>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S35>/Action Port'
     */
    /* Merge: '<S29>/Merge' incorporates:
     *  Constant: '<S29>/Constant3'
     *  Inport: '<S35>/Xb'
     */
    rtb_Merge_d = -1.0;

    /* End of Outputs for SubSystem: '<S29>/If Action Subsystem4' */
  }

  /* End of If: '<S29>/If' */

  /* Gain: '<S11>/Gain' incorporates:
   *  Product: '<S11>/Product1'
   */
  rtb_Gain2 = rtb_raptor_can_rxmsg_o2 * rtb_Merge_d * -0.02;

  /* Outputs for IfAction SubSystem: '<S30>/If Action Subsystem1' incorporates:
   *  ActionPort: '<S37>/Action Port'
   */
  /* Outputs for IfAction SubSystem: '<S30>/If Action Subsystem' incorporates:
   *  ActionPort: '<S36>/Action Port'
   */
  /* If: '<S30>/If' incorporates:
   *  Inport: '<S36>/Xa'
   *  Inport: '<S37>/Xb'
   *  Merge: '<S30>/Merge'
   */
  rtb_Merge = (rtb_Merge_j > 250.0);

  /* End of Outputs for SubSystem: '<S30>/If Action Subsystem' */
  /* End of Outputs for SubSystem: '<S30>/If Action Subsystem1' */

  /* Outputs for IfAction SubSystem: '<S28>/If Action Subsystem1' incorporates:
   *  ActionPort: '<S32>/Action Port'
   */
  /* Outputs for IfAction SubSystem: '<S28>/If Action Subsystem' incorporates:
   *  ActionPort: '<S31>/Action Port'
   */
  /* If: '<S28>/If' incorporates:
   *  Inport: '<S31>/Xa'
   *  Inport: '<S32>/Xb'
   *  Merge: '<S28>/Merge'
   */
  rtb_Merge_j = (rtb_Merge_j > 1200.0);

  /* End of Outputs for SubSystem: '<S28>/If Action Subsystem' */
  /* End of Outputs for SubSystem: '<S28>/If Action Subsystem1' */

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
    if (rtb_Gain2 < -1600.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_Gain2 > 1676.7500000000F)
      temp = (uint32_T)65535U;
    else {
      if ((real_T)rtb_Gain2 < 0)
        temp = (uint32_T)(int32_T)((rtb_Gain2- -1600.0f) * 20.0f);
      else
        temp = (uint32_T)((rtb_Gain2- -1600.0f) * 20.0f);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[4U] |= temp_shift;
    temp_shift = (uint8_T)(temp >> 8);
    data[5U] |= temp_shift;

    /* Signal: I1_CommandContact      */
    /* I1_CommandContact      - StartBit: 6U, BitLength: 2U, Endian: 0U */

    /* signal type is unsigned */
    if (rtb_Merge < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_Merge > 3.0000000000F)
      temp = (uint32_T)3U;
    else {
      if ((real_T)rtb_Merge < 0)
        temp = (uint32_T)(int32_T)((rtb_Merge));
      else
        temp = (uint32_T)((rtb_Merge));
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
    if (0.0 < -8032.7500000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 8351.0000000000F)
      temp = (uint32_T)65535U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0- -8032.75f) * 4.0f);
      else
        temp = (uint32_T)((0.0- -8032.75f) * 4.0f);
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
    if (1.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (1.0 > 15.0000000000F)
      temp = (uint32_T)15U;
    else {
      if ((real_T)1.0 < 0)
        temp = (uint32_T)(int32_T)((1.0));
      else
        temp = (uint32_T)((1.0));
    }

    temp_shift = (uint8_T)(temp << 2);
    temp_shift &= ((uint8_T)60U);
    data[0U] |= temp_shift;
    can_set_period_573__0004(0U);
    can_send_573__0004(218038727U & 0x1FFFFFFF, 1, 8U, &data[0]);
  }

  /* Gain: '<S11>/Gain1' incorporates:
   *  Product: '<S11>/Product'
   */
  rtb_Gain2 = rtb_raptor_can_rxmsg_o3_l * rtb_Merge_d * 0.02;

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
    if (rtb_Gain2 < -1600.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_Gain2 > 1676.7500000000F)
      temp = (uint32_T)65535U;
    else {
      if ((real_T)rtb_Gain2 < 0)
        temp = (uint32_T)(int32_T)((rtb_Gain2- -1600.0f) * 20.0f);
      else
        temp = (uint32_T)((rtb_Gain2- -1600.0f) * 20.0f);
    }

    temp_shift = (uint8_T)(temp >> 0);
    data[4U] |= temp_shift;
    temp_shift = (uint8_T)(temp >> 8);
    data[5U] |= temp_shift;

    /* Signal: I2_CommandContact      */
    /* I2_CommandContact      - StartBit: 6U, BitLength: 2U, Endian: 0U */

    /* signal type is unsigned */
    if (rtb_Merge < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (rtb_Merge > 3.0000000000F)
      temp = (uint32_T)3U;
    else {
      if ((real_T)rtb_Merge < 0)
        temp = (uint32_T)(int32_T)((rtb_Merge));
      else
        temp = (uint32_T)((rtb_Merge));
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
    if (0.0 < -8032.7500000000F)
      temp = (uint32_T)0U;
    else if (0.0 > 8351.0000000000F)
      temp = (uint32_T)65535U;
    else {
      if ((real_T)0.0 < 0)
        temp = (uint32_T)(int32_T)((0.0- -8032.75f) * 4.0f);
      else
        temp = (uint32_T)((0.0- -8032.75f) * 4.0f);
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
    if (1.0 < 0.0000000000F)
      temp = (uint32_T)0U;
    else if (1.0 > 15.0000000000F)
      temp = (uint32_T)15U;
    else {
      if ((real_T)1.0 < 0)
        temp = (uint32_T)(int32_T)((1.0));
      else
        temp = (uint32_T)((1.0));
    }

    temp_shift = (uint8_T)(temp << 2);
    temp_shift &= ((uint8_T)60U);
    data[0U] |= temp_shift;
    can_set_period_574__0001(0U);
    can_send_574__0001(218042823U & 0x1FFFFFFF, 1, 8U, &data[0]);
  }

  /* S-Function (raptor_sfun_digital_in): '<S38>/raptor_digital_in' */
  /* S-Function Block: DG1 */
  {
    rtb_raptor_digital_in = (boolean_T) Digital_Input_Read_Chan(DG1_DG);
  }

  /* S-Function (raptor_sfun_digital_in): '<S38>/raptor_digital_in1' */
  /* S-Function Block: DG2 */
  {
    rtb_raptor_digital_in1 = (boolean_T) Digital_Input_Read_Chan(DG2_DG);
  }

  /* S-Function (raptor_sfun_can_txmsg): '<S38>/raptor_can_txmsg' */

  /* S-Function Block:<S38>/raptor_can_txmsg */
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
    can_set_period_612__0001(0U);
    can_send_612__0001(1306U & 0x7FF, 0, 8U, &data[0]);
  }
}

/* Model step function */
void Lightning_McSeas_VCU_Current_Mode_step(void)
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
void Lightning_McSeas_VCU_Current_Mode_initialize(void)
{
  /* Registration code */

  /* states (dwork) */
  (void) memset((void *)&Lightning_McSeas_VCU_Current_Mode_DWork, 0,
                sizeof(D_Work_Lightning_McSeas_VCU_Current_Mode));

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

  Lightning_McSeas_VCU_Current_Mode_PrevZCSigState.StoreEEPROM_Trig_ZCE =
    ZERO_ZCSIG;

  /* SystemInitialize for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' incorporates:
   *  SubSystem: '<Root>/Foreground'
   */
  Lightning_McSeas_VCU_Current_Mode_Foreground_Init();

  /* End of SystemInitialize for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' */

  /* SystemInitialize for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' incorporates:
   *  SubSystem: '<S2>/Background'
   */
  Lightning_McSeas_VCU_Current_Mode_Background_Init();

  /* End of SystemInitialize for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' */

  /* Enable for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' */

  /* Level2 S-Function Block: '<Root>/raptor_timed_trigger' (raptor_sfun_timed_trigger) */

  /* Enable Subsystem */
  Lightning_McSeas_VCU_Current_Mode_Foreground_Enable();

  /* End of Enable for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' */

  /* Enable for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' incorporates:
   *  SubSystem: '<Root>/Foreground'
   */
  Lightning_McSeas_VCU_Current_Mode_Foreground_Enable();

  /* End of Enable for S-Function (raptor_sfun_timed_trigger): '<Root>/raptor_timed_trigger' */

  /* Enable for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' */

  /* Level2 S-Function Block: '<S2>/raptor_timed_trigger' (raptor_sfun_timed_trigger) */

  /* Enable Subsystem */

  /* End of Enable for S-Function (raptor_sfun_timed_trigger): '<S2>/raptor_timed_trigger' */
}

/* Model terminate function */
void Lightning_McSeas_VCU_Current_Mode_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
