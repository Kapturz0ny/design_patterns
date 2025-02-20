#include "Context.h"
#include "AdditionStrategy.h"
#include "SubtractionStrategy.h"
#include "MultiplicationStrategy.h"
#include <iostream>
#include <memory>

int main() {
    // Tworzymy kontekst z domyślną strategią (dodawanie)
    Context context(std::make_unique<AdditionStrategy>());
    
    int a = 10, b = 5;

    std::cout << "Addition: " << context.executeStrategy(a, b) << std::endl;

    // Zmieniamy strategię na odejmowanie
    context.setStrategy(std::make_unique<SubtractionStrategy>());
    std::cout << "Subtraction: " << context.executeStrategy(a, b) << std::endl;

    // Zmieniamy strategię na mnożenie
    context.setStrategy(std::make_unique<MultiplicationStrategy>());
    std::cout << "Multiplication: " << context.executeStrategy(a, b) << std::endl;

    return 0;
}
