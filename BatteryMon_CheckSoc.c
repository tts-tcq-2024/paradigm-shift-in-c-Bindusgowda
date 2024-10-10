#include "Battery_Mon_Check_Soc.h"
#include "Parameter_Check.h"

void printMessage(const char *message)
{
    printf("%s\n", message);
}

void checkSoc(float soc, ParameterState *state) 
{
    setParameterState(state, "State of Charge out of range!", 
                     "Warning: Approaching discharge!", 
                     "Warning: Approaching charge-peak!");
    
    checkBounds(soc, SOC_MIN, SOC_MAX, state->errorMessage);
    
    if (WARN_FOR_SOC) 
    {
        checkWarnings(soc, SOC_MIN, SOC_MAX, state);
    }
}
