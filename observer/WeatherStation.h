// Konkretny Obserwowany
#ifndef WEATHERSTATION_H
#define WEATHERSTATION_H

#include "Subject.h"

class WeatherStation : public Subject {
public:
    void setWeatherData(float temperature, float humidity, float pressure) {
        this->temperature = temperature;
        this->humidity = humidity;
        this->pressure = pressure;
        notifyObservers(temperature, humidity, pressure);
    }

private:
    float temperature;
    float humidity;
    float pressure;
};

#endif // WEATHERSTATION_H
