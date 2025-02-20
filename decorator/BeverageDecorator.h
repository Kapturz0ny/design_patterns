// BeverageDecorator.h
#ifndef BEVERAGEDECORATOR_H
#define BEVERAGEDECORATOR_H

#include "Beverage.h"
#include <memory>

class BeverageDecorator : public Beverage {
protected:
    std::unique_ptr<Beverage> beverage_;  // Dekorowany napój
public:
    explicit BeverageDecorator(std::unique_ptr<Beverage> beverage)
        : beverage_(std::move(beverage)) {}
};

#endif // BEVERAGEDECORATOR_H
