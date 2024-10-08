#ifndef BATTERY_MONITOR_H
#define BATTERY_MONITOR_H

#include <stdio.h>
#include "config_parameters.h"
#include "parameter_state.h"

void printMessage(const char *message);

void checkTemperature(float temperature, ParameterState *state);

void checkSoc(float soc, ParameterState *state);

void checkChargeRate(float chargeRate, ParameterState *state);

#endif 
