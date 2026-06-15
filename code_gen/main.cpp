#include <iostream>

#include "TTemperatureAction.h"
#include "TThermometer.h"

int main() {
    TThermometer* roomThermometer = new TThermometer();
    TTemperatureAction* acController = new TTemperatureAction();

    roomThermometer->attach(acController);

    std::cout << "Symulacja temperatury odpowiedniej\n";
    roomThermometer->setMeasurement(22.0f);

    std::cout << "\nSymulacja temperatury upalnej\n";
    roomThermometer->setMeasurement(28.5f);

    std::cout << "\nSymulacja temperatury mroznej\n";
    roomThermometer->setMeasurement(15.0f);

    std::cout << "\nSymulacja pozaru\n";
    roomThermometer->setMeasurement(85.0f);

    roomThermometer->detach(acController);
    delete acController;
    delete roomThermometer;

    return 0;
}
