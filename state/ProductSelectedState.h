// Konkretny stan "Produkt został wybrany"
#ifndef PRODUCTSELECTEDSTATE_H
#define PRODUCTSELECTEDSTATE_H

#include "State.h"
#include "VendingMachine.h"
#include "WaitingForCoinState.h"
#include <iostream>

class ProductSelectedState : public State {
public:
    void insertCoin(VendingMachine& machine) override {
        std::cout << "Moneta już została wrzucona.\n";
    }

    void selectProduct(VendingMachine& machine) override {
        std::cout << "Produkt wybrany. Proszę czekać na wydanie produktu.\n";
        machine.setState(std::make_unique<WaitingForCoinState>());
    }

    void dispenseProduct(VendingMachine& machine) override {
        std::cout << "Najpierw wybierz produkt.\n";
    }
};

#endif // PRODUCTSELECTEDSTATE_H
