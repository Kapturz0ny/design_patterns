#ifndef SUBTRACTIONSTRATEGY_H
#define SUBTRACTIONSTRATEGY_H

#include "Strategy.h"

class SubtractionStrategy : public Strategy {
public:
    int execute(int a, int b) const override {
        return a - b;
    }
};

#endif // SUBTRACTIONSTRATEGY_H
