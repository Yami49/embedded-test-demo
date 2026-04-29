#ifndef TEMPERATURE_CONTROLLER_H
#define TEMPERATURE_CONTROLLER_H

class TemperatureController {
public:
    TemperatureController(double target);

    void update(double currentTemp);

    bool isHeaterOn() const;

private:
    double targetTemp;
    bool heaterOn;
};

#endif
