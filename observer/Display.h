// Konkretny Obserwator
#ifndef DISPLAY_H
#define DISPLAY_H

#include "Observer.h"
#include <iostream>

class Display : public Observer {
public:
    explicit Display(const std::string& name) : displayName(name) {}

    void update(float temperature, float humidity, float pressure) override {
        std::cout << "Display [" << displayName << "] updated:\n"
                  << " - Temperature: " << temperature << "\n"
                  << " - Humidity: " << humidity << "\n"
                  << " - Pressure: " << pressure << "\n";
    }

private:
    std::string displayName;
};

#endif // DISPLAY_H
