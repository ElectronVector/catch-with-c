#include "catch.hpp"
#include "power_button.h"
#include <string.h>

SCENARIO("Power off tests", "[power_button]") {
    GIVEN("the power is off") {
        power_button_initialize(POWER_OFF);

        WHEN("nothing happens") {

            THEN("the power is still off") {
                REQUIRE(power_button_getPowerState() == POWER_OFF);
            }
        }

        WHEN("the power button is momentarily pressed") {
            power_button_pressMomentary();

            THEN("the power turns on") {
                REQUIRE(power_button_getPowerState() == POWER_ON);
            }
        }
    }
}

SCENARIO("Power on tests", "[power_button]") {
    GIVEN("the power is on") {
        power_button_initialize(POWER_OFF);
        power_button_pressMomentary();      // Turn the power on.

        WHEN("the power button is momentarily pressed") {
            power_button_pressMomentary();

            THEN("the power remains on") {
                REQUIRE(power_button_getPowerState() == POWER_ON);
            }
        }

        WHEN("the power button is held down") {
            power_button_pressHold();

            THEN("the power turns off") {
                REQUIRE(power_button_getPowerState() == POWER_OFF);
            }
        }
    }
}
