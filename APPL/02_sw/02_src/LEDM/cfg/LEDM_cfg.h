/// @file LEDM_cfg.h
/// @brief Contains configuration data used for manipulating with LED
/// @author Igor Krstic

#ifndef LEDM_CFG_H_
#define LEDM_CFG_H_

#include "stm32f439xx.h"
#include "stm32f4xx_hal.h"

/// Time delay after toggling pin output in milliseconds
#define LEDM_FIRST_TIME_DELAY_MS 500
/// Time delay after toggling pin output in milliseconds
#define LEDM_SECOND_TIME_DELAY_MS 500
/// Register address used for toggling pin output
#define LEDM_REGISTER_GROUP GPIOB
/// Pin position in register
#define LEDM_REGISTER_PIN GPIO_PIN_0

#endif /* LEDM_CFG_H_ */
