#ifndef COLLEAGUE_H
#define COLLEAGUE_H

#include <string>
#include "Mediator.h"

class Colleague {
public:
    explicit Colleague(Mediator* mediator) : mediator(mediator) {}
    virtual ~Colleague() = default;

    void send(const std::string& message) {
        mediator->sendMessage(message, this);
    }

    virtual void receive(const std::string& message) = 0;

protected:
    Mediator* mediator;
};

#endif // COLLEAGUE_H
