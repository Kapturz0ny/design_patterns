// Klasa kontekstu
#ifndef VENDINGMACHINE_H
#define VENDINGMACHINE_H

#include "State.h"
#include <memory>

class VendingMachine {
public:
    VendingMachine(std::unique_ptr<State> initialState)
        : currentState(std::move(initialState)) {}

    void setState(std::unique_ptr<State> newState) {
        currentState = std::move(newState);
    }

    void insertCoin() {
        currentState->insertCoin(*this);
    }

    void selectProduct() {
        currentState->selectProduct(*this);
    }

    void dispenseProduct() {
        currentState->dispenseProduct(*this);
    }

private:
    std::unique_ptr<State> currentState; // Obecny stan automatu
};

#endif // VENDINGMACHINE_H
