#include "temperature_controller.h"

TemperatureController::TemperatureController(double target)
    : targetTemp(target), heaterOn(false) {}

void TemperatureController::update(double currentTemp) {
    if (currentTemp < targetTemp) {
        heaterOn = true;
    } else {
        heaterOn = false;
    }
}

bool TemperatureController::isHeaterOn() const {
    return heaterOn;
}
