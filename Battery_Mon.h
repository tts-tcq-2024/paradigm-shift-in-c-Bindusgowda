#ifndef BATTERY_MON_H
#define BATTERY_MON_H

#include <stdio.h>
#include "Parameter_Check.h"

#define CHARGE_RATE_MAX 0.8
#define TEMPERATURE_MIN 0.0
#define TEMPERATURE_MAX 45.0
#define SOC_MIN 20.0
#define SOC_MAX 80.0

#define TOLERANCE_PERCENTAGE 0.05
#define WARN_FOR_TEMPERATURE 1
#define WARN_FOR_SOC 1
#define WARN_FOR_CHARGE_RATE 1

void printMessage(const char *message);

void checkTemperature(float temperature, ParameterState *state);

void checkSoc(float soc, ParameterState *state);

void checkChargeRate(float chargeRate, ParameterState *state);

#endif 
