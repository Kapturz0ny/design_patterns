// Interfejs Obserwowanego
#ifndef SUBJECT_H
#define SUBJECT_H

#include "Observer.h"
#include <vector>
#include <algorithm>

class Subject {
public:
    virtual ~Subject() = default;

    void addObserver(Observer* observer) {
        observers.push_back(observer);
    }

    void removeObserver(Observer* observer) {
        observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
    }

protected:
    void notifyObservers(float temperature, float humidity, float pressure) {
        for (auto observer : observers) {
            observer->update(temperature, humidity, pressure);
        }
    }

private:
    std::vector<Observer*> observers; // Lista obserwatorów
};

#endif // SUBJECT_H
