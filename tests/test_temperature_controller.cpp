#include <gtest/gtest.h>
#include "../src/temperature_controller.h"

TEST(TemperatureControllerTest, HeaterTurnsOnBelowTarget) {
    TemperatureController controller(25.0);
    controller.update(20.0);
    EXPECT_TRUE(controller.isHeaterOn());
}

TEST(TemperatureControllerTest, HeaterTurnsOffAboveTarget) {
    TemperatureController controller(25.0);
    controller.update(30.0);
    EXPECT_FALSE(controller.isHeaterOn());
}
