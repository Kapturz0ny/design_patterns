// MilkDecorator.h
#ifndef MILKDECORATOR_H
#define MILKDECORATOR_H

#include "BeverageDecorator.h"

class MilkDecorator : public BeverageDecorator {
public:
    explicit MilkDecorator(std::unique_ptr<Beverage> beverage)
        : BeverageDecorator(std::move(beverage)) {}

    double cost() const override {
        return beverage_->cost() + 1.5;  // Koszt mleka
    }

    std::string description() const override {
        return beverage_->description() + ", Milk";
    }
};

#endif // MILKDECORATOR_H
