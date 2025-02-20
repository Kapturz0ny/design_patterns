#ifndef ADDITIONSTRATEGY_H
#define ADDITIONSTRATEGY_H

#include "Strategy.h"

class AdditionStrategy : public Strategy {
public:
    int execute(int a, int b) const override {
        return a + b;
    }
};

#endif // ADDITIONSTRATEGY_H
