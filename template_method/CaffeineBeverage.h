#ifndef CAFFEINEBEVERAGE_H
#define CAFFEINEBEVERAGE_H

#include <iostream>

class CaffeineBeverage {
public:
    virtual ~CaffeineBeverage() = default;

    // Metoda szablonowa definiująca szkielet algorytmu
    void prepareRecipe() const {
        boilWater();
        brew();              // Wywołanie metody wirtualnej
        pourInCup();
        addCondiments();     // Wywołanie metody wirtualnej
    }

protected:
    void boilWater() const {
        std::cout << "Boiling water" << std::endl;
    }

    void pourInCup() const {
        std::cout << "Pouring into cup" << std::endl;
    }

    // Kroki, które muszą być zaimplementowane w klasach pochodnych
    virtual void brew() const = 0;
    virtual void addCondiments() const = 0;
};

#endif // CAFFEINEBEVERAGE_H
