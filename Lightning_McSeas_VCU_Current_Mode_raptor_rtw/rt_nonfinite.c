/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: rt_nonfinite.c
 *
 * Code generated for Simulink model 'Lightning_McSeas_VCU_Current_Mode'.
 *
 * Model version                  : 6.265
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Tue May 30 12:24:31 2023
 *
 * Target selection: raptor.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

/*
 * Abstract:
 *      Real-Time Workshop function to intialize non-finites,
 *      (Inf, NaN and -Inf).
 *
 * Description: This file generates custom content that replaces the default rtnonfinite.c
 * content.  The content of the rtnonfinite.c file varies quite a bit from version
 * to version, so this is a way to make the results more consistent.
 */
#include "rt_nonfinite.h"

real_T rtInf;
real_T rtMinusInf;
real_T rtNaN;
real32_T rtInfF;
real32_T rtMinusInfF;
real32_T rtNaNF;

/* Function: rt_InitInfAndNaN ==================================================
 * Abstract:
 *	Initialize the rtInf, rtMinusInf, and rtNaN needed by the
 *	generated code. NaN is initialized as non-signaling. Assumes IEEE.
 */
void rt_InitInfAndNaN(size_t realSize)
{
  size_t bitsPerReal = realSize * (8U);
  IEEESingle real32;
  real32.wordL.wordLuint = 0x7F800000;
  rtInfF = real32.wordL.wordLreal;
  real32.wordL.wordLuint = 0x7FFFFFFF;
  rtNaNF = real32.wordL.wordLreal;
  real32.wordL.wordLuint = 0xFF800000;
  rtMinusInfF = real32.wordL.wordLreal;
  if (bitsPerReal == 32) {
    rtInf = rtInfF;
    rtNaN = rtNaNF;
    rtMinusInf = rtMinusInfF;
  } else {
    union {
      BigEndianIEEEDouble bitVal;
      real_T fltVal;
    } tmpVal;

    tmpVal.bitVal.words.wordH = 0xFFF00000U;
    tmpVal.bitVal.words.wordL = 0x00000000U;
    rtMinusInf = tmpVal.fltVal;
    tmpVal.bitVal.words.wordH = 0x7FF00000U;
    tmpVal.bitVal.words.wordL = 0x00000000U;
    rtInf = tmpVal.fltVal;
    tmpVal.bitVal.words.wordH = 0xFFF80000U;
    tmpVal.bitVal.words.wordL = 0x00000000U;
    rtNaN = tmpVal.fltVal;
  }
}

/* Function: rtIsInf ==================================================
 * Abstract:
 *	Test if value is infinite
 */
boolean_T rtIsInf(real_T value)
{
  return ((value==rtInf || value==rtMinusInf) ? 1U : 0U);
}

/* Function: rtIsInfF =================================================
 * Abstract:
 *	Test if single-precision value is infinite
 */
boolean_T rtIsInfF(real32_T value)
{
  return(((value)==rtInfF || (value)==rtMinusInfF) ? 1U : 0U);
}

/* Function: rtIsNaN ==================================================
 * Abstract:
 *	Test if value is not a number
 */
boolean_T rtIsNaN(real_T value)
{
  return((value!=value) ? 1U : 0U);
}

/* Function: rtIsNaNF =================================================
 * Abstract:
 *	Test if single-precision value is not a number
 */
boolean_T rtIsNaNF(real32_T value)
{
  return((value!=value) ? 1U : 0U);
}

/* end rt_nonfinite.c */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
