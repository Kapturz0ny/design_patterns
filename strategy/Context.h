#ifndef CONTEXT_H
#define CONTEXT_H

#include "Strategy.h"
#include <memory>

class Context {
public:
    explicit Context(std::unique_ptr<Strategy> strategy) : strategy(std::move(strategy)) {}

    void setStrategy(std::unique_ptr<Strategy> newStrategy) {
        strategy = std::move(newStrategy);
    }

    int executeStrategy(int a, int b) const {
        return strategy->execute(a, b);
    }

private:
    std::unique_ptr<Strategy> strategy; // Przechowuje aktualną strategię
};

#endif // CONTEXT_H
