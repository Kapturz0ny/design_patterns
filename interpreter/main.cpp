#include "Context.h"
#include "TerminalExpression.h"
#include "AddExpression.h"
#include "SubtractExpression.h"
#include <iostream>
#include <memory>

int main() {
    // Tworzymy kontekst z wartościami zmiennych
    Context context;
    context.setVariable("x", 10);
    context.setVariable("y", 5);

    // Wyrażenie: x + y - y
    auto expression = std::make_unique<SubtractExpression>(
        std::make_unique<AddExpression>(
            std::make_unique<TerminalExpression>("x"),
            std::make_unique<TerminalExpression>("y")
        ),
        std::make_unique<TerminalExpression>("y")
    );

    // Interpretacja wyrażenia
    std::cout << "Result: " << expression->interpret(context) << std::endl;

    return 0;
}
