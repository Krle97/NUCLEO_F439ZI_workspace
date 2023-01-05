/// @file LEDM.h
/// @brief Header file used for LED manipulation
/// @author Igor Krstic

#ifndef LEDM_H_
#define LEDM_H_

/// @brief Main function used for LED manipulation
///
/// @pre None
/// @post LED is toggled after delay
/// @param None
///
/// @return None
///
/// @globals None
///
/// @InOutCorelation Function toggles output pin which is attached to the LED.
///                  There is a time delay between each toggle.
/// @callsequence
///   @startuml "LEDM_v_Main.png"
///     title "Sequence diagram for function LEDM_v_Main"
///     -> LEDM: LEDM_v_Main()
///     LEDM++
///     LEDM -> HAL: HAL_GPIO_TogglePin(...)
///     LEDM--
///     HAL++
///     rnote over HAL: Toggle LED pin.
///     HAL -> LEDM
///     HAL--
///     LEDM++
///     LEDM -> HAL: HAL_Delay(LEDM_FIRST_TIME_DELAY_MS)
///     LEDM--
///     HAL++
///     rnote over HAL: Device stays in delay.
///     HAL -> LEDM
///     HAL--
///     LEDM++
///     LEDM -> HAL: HAL_GPIO_TogglePin(...)
///     LEDM--
///     HAL++
///     rnote over HAL: Toggle LED pin.
///     HAL -> LEDM
///     HAL--
///     LEDM++
///     LEDM -> HAL: HAL_Delay(LEDM_SECOND_TIME_DELAY_MS)
///     LEDM--
///     HAL++
///     rnote over HAL: Device stays in delay.
///     HAL -> LEDM
///     HAL--
///     LEDM++
///     <- LEDM
///     LEDM--
///   @enduml
void LEDM_v_Main();

#endif /* LEDM_H_ */
