#include <iostream>
#include "Coffee.h"
#include "MilkDecorator.h"
#include "SugarDecorator.h"

int main() {
    // Tworzymy podstawową kawę
    std::unique_ptr<Beverage> coffee = std::make_unique<Coffee>();

    // Dodajemy mleko do kawy
    coffee = std::make_unique<MilkDecorator>(std::move(coffee));

    // Dodajemy cukier do kawy z mlekiem
    coffee = std::make_unique<SugarDecorator>(std::move(coffee));

    // Wyświetlamy końcowy opis i koszt
    std::cout << "Description: " << coffee->description() << std::endl;
    std::cout << "Cost: " << coffee->cost() << std::endl;

    return 0;
}
