// Interfejs stanu
#ifndef STATE_H
#define STATE_H

class VendingMachine;

class State {
public:
    virtual ~State() = default;
    virtual void insertCoin(VendingMachine& machine) = 0;
    virtual void selectProduct(VendingMachine& machine) = 0;
    virtual void dispenseProduct(VendingMachine& machine) = 0;
};

#endif // STATE_H
