// Konkretny stan "Oczekiwanie na monetę"
#ifndef WAITINGFORCOINSTATE_H
#define WAITINGFORCOINSTATE_H

#include "State.h"
#include "VendingMachine.h"
#include "ProductSelectedState.h"
#include <iostream>

class WaitingForCoinState : public State {
public:
    void insertCoin(VendingMachine& machine) override {
        std::cout << "Moneta przyjęta.\n";
        machine.setState(std::make_unique<ProductSelectedState>());
    }

    void selectProduct(VendingMachine& machine) override {
        std::cout << "Najpierw wrzuć monetę!\n";
    }

    void dispenseProduct(VendingMachine& machine) override {
        std::cout << "Najpierw wrzuć monetę!\n";
    }
};

#endif // WAITINGFORCOINSTATE_H
