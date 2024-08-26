#include <stdio.h>
#include <assert.h>
 
int check_temperature(float temperature)
{
  if(temperature < 0 || temperature > 45)
    {
      printf("Battery Temperature is out of range\n");
      return 0;
    }
  return 1;
}
 
int check_soc(float soc)
{
  if(soc < 20 || soc > 80)
    {
      printf("Battery State Of Charge is out of range\n");
      return 0;
    }
  return 1;
}
 
int check_ChargeRate(float CR)
{
  if(CR > 0.8)
    {
      printf("Battery Charge Rate is out of range\n");
      return 0;
    }
  return 1;
}
 
bool check_Battery(float temperature, float soc, float CR)
{
  return check_temperature(temperature) && check_soc(soc) && check_ChargeRate(CR);
}
 
int main() {
  assert(batteryIsOk(25, 70, 0.7) == true);
  assert(batteryIsOk(50, 85, 0) == false);
}
