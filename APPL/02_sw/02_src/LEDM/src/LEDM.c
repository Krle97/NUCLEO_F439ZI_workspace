/// @file LEDM.c
/// @brief Main file used for LED manipulation
/// @author Igor Krstic

#include "LEDM_cfg.h"
#include "LEDM.h"


void LEDM_v_Main()
{
  // Toggle pin value
  HAL_GPIO_TogglePin(LEDM_REGISTER_GROUP, LEDM_REGISTER_PIN);
  // Trigger delay for 1st time period
  HAL_Delay(LEDM_FIRST_TIME_DELAY_MS);
  // Toggle pin value
  HAL_GPIO_TogglePin(LEDM_REGISTER_GROUP, LEDM_REGISTER_PIN);
  // Trigger delay for 2nd time period
  HAL_Delay(LEDM_SECOND_TIME_DELAY_MS);
}
