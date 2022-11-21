/// COMPANY: Continental Automotive
/// COMPONENT: LEDM
/// @file LEDM.h
/// @brief Contains configuration data used for manipulating with LED
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
void LEDM_v_Main();

#endif /* LEDM_H_ */
