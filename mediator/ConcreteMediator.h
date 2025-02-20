#ifndef CONCRETEMEDIATOR_H
#define CONCRETEMEDIATOR_H

#include "Mediator.h"
#include "Colleague.h"
#include <vector>
#include <algorithm>

class ConcreteMediator : public Mediator {
public:
    void addColleague(Colleague* colleague) {
        colleagues.push_back(colleague);
    }

    void sendMessage(const std::string& message, Colleague* sender) override {
        for (Colleague* colleague : colleagues) {
            if (colleague != sender) {
                colleague->receive(message);
            }
        }
    }

private:
    std::vector<Colleague*> colleagues;
};

#endif // CONCRETEMEDIATOR_H
