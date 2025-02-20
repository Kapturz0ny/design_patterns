// Beverage.h
#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>

class Beverage {
public:
    virtual ~Beverage() = default;
    virtual double cost() const = 0;
    virtual std::string description() const = 0;
};

#endif // BEVERAGE_H
