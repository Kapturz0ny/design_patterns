#ifndef TEA_H
#define TEA_H

#include "CaffeineBeverage.h"

// Implementacja klasy Tea
class Tea : public CaffeineBeverage {
protected:
    void brew() const override {
        std::cout << "Steeping the tea" << std::endl;
    }

    void addCondiments() const override {
        std::cout << "Adding lemon" << std::endl;
    }
};

#endif // TEA_H
