#include "Battery_Mon_Check_ChargeRate.h"
#include "Battery_Mon_Check_Soc.h"
#include "Battery_Mon_Chech_Temperature.h"

#ifndef PARAMETER_CHECK_H
#define PARAMETER_CHECK_H
#define TOLERANCE_PERCENTAGE 0.05
typedef struct {
    const char *errorMessage;
    const char *warningLow;
    const char *warningHigh;
} ParameterState;

void printMessage(const char *message);
void setParameterState(ParameterState *state, const char *errorMessage, const char *warningLow, const char *warningHigh);
void printMessage(const char *message);
void checkBounds(float value, float min, float max, const char *errorMessage);
void checkWarnings(float value, float min, float max, const ParameterState *state);

#endif
