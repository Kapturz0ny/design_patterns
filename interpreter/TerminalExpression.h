#ifndef TERMINALEXPRESSION_H
#define TERMINALEXPRESSION_H

#include "Expression.h"
#include "Context.h"
#include <string>

class TerminalExpression : public Expression {
public:
    explicit TerminalExpression(const std::string& variableName)
        : variableName(variableName) {}

    int interpret(const Context& context) const override {
        return context.getVariable(variableName);
    }

private:
    std::string variableName;
};

#endif // TERMINALEXPRESSION_H
