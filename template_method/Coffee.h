#ifndef COFFEE_H
#define COFFEE_H

#include "CaffeineBeverage.h"

// Implementacja klasy Coffee
class Coffee : public CaffeineBeverage {
protected:
    void brew() const override {
        std::cout << "Dripping coffee through filter" << std::endl;
    }

    void addCondiments() const override {
        std::cout << "Adding sugar and milk" << std::endl;
    }
};

#endif // COFFEE_H
