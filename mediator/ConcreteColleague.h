#ifndef CONCRETECOLLEAGUE_H
#define CONCRETECOLLEAGUE_H

#include "Colleague.h"
#include <iostream>

class ConcreteColleague : public Colleague {
public:
    explicit ConcreteColleague(Mediator* mediator, const std::string& name)
        : Colleague(mediator), name(name) {}

    void receive(const std::string& message) override {
        std::cout << name << " received: " << message << std::endl;
    }

private:
    std::string name;
};

#endif // CONCRETECOLLEAGUE_H
