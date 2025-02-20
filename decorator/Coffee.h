// Coffee.h
#ifndef COFFEE_H
#define COFFEE_H

#include "Beverage.h"

class Coffee : public Beverage {
public:
    double cost() const override {
        return 5.0;  // Koszt podstawowej kawy
    }

    std::string description() const override {
        return "Basic Coffee";
    }
};

#endif // COFFEE_H
