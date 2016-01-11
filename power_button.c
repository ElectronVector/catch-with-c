/*
    Implements the behavior of a PC power button.
*/

#include "power_button.h"

static PowerState state = POWER_OFF;

void power_button_initialize(PowerState initalState) {
    state = initalState;
}

PowerState power_button_getPowerState(void) {
    return state;
}

void power_button_pressMomentary(void) {
    state = POWER_ON;
}

void power_button_pressHold(void) {
    state = POWER_OFF;
}
