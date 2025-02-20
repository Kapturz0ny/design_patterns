#ifndef MULTIPLICATIONSTRATEGY_H
#define MULTIPLICATIONSTRATEGY_H

#include "Strategy.h"

class MultiplicationStrategy : public Strategy {
public:
    int execute(int a, int b) const override {
        return a * b;
    }
};

#endif // MULTIPLICATIONSTRATEGY_H
