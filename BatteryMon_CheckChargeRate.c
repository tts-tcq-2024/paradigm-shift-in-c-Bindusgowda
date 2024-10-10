#include "Battery_Mon_Check_ChargeRate.h"
#include "Parameter_Check.h"

void printMessage(const char *message)
{
    printf("%s\n", message);
}

void checkChargeRate(float chargeRate, ParameterState *state) 
{
    setParameterState(state, "Charge Rate out of range!", 
                     "", 
                     "Warning: Approaching charge rate peak!");
    
    checkBounds(chargeRate, 0, CHARGE_RATE_MAX, state->errorMessage);
    
    if (WARN_FOR_CHARGE_RATE) 
    {
        handleWarningHigh(chargeRate, CHARGE_RATE_MAX, state);
    }
}
