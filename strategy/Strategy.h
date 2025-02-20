#ifndef STRATEGY_H
#define STRATEGY_H

class Strategy {
public:
    virtual ~Strategy() = default;
    virtual int execute(int a, int b) const = 0; // Metoda algorytmu
};

#endif // STRATEGY_H
