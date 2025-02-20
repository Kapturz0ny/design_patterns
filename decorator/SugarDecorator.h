// SugarDecorator.h
#ifndef SUGARDECORATOR_H
#define SUGARDECORATOR_H

#include "BeverageDecorator.h"

class SugarDecorator : public BeverageDecorator {
public:
    explicit SugarDecorator(std::unique_ptr<Beverage> beverage)
        : BeverageDecorator(std::move(beverage)) {}

    double cost() const override {
        return beverage_->cost() + 0.5;  // Koszt cukru
    }

    std::string description() const override {
        return beverage_->description() + ", Sugar";
    }
};

#endif // SUGARDECORATOR_H
