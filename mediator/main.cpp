#include "ConcreteMediator.h"
#include "ConcreteColleague.h"
#include <memory>

int main() {
    ConcreteMediator mediator;

    // Tworzymy kolegów (uczestników)
    ConcreteColleague colleague1(&mediator, "Alice");
    ConcreteColleague colleague2(&mediator, "Bob");
    ConcreteColleague colleague3(&mediator, "Charlie");

    // Dodajemy ich do mediatora
    mediator.addColleague(&colleague1);
    mediator.addColleague(&colleague2);
    mediator.addColleague(&colleague3);

    // Komunikacja
    colleague1.send("Hi everyone!");
    colleague2.send("Hello Alice!");
    colleague3.send("Hey there!");

    return 0;
}
