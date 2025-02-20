#include "VendingMachine.h"
#include "WaitingForCoinState.h"
#include <iostream>

int main() {
    auto initialState = std::make_unique<WaitingForCoinState>();
    VendingMachine machine(std::move(initialState));

    std::cout << "Automat do napojów:\n";
    machine.selectProduct();  // Brak monety
    machine.insertCoin();     // Wrzucono monetę
    machine.selectProduct();  // Wybrano produkt
    machine.dispenseProduct(); // Próbujemy wydać produkt

    return 0;
}
