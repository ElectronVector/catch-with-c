/*
    Implements the behavior of a PC power button.
*/

typedef enum {
    POWER_OFF,
    POWER_ON,
} PowerState;

void power_button_initialize(PowerState initalState);
PowerState power_button_getPowerState(void);
void power_button_pressMomentary(void);
void power_button_pressHold(void);
