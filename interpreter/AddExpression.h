#ifndef ADDEXPRESSION_H
#define ADDEXPRESSION_H

#include "Expression.h"
#include <memory>

class AddExpression : public Expression {
public:
    AddExpression(std::unique_ptr<Expression> left, std::unique_ptr<Expression> right)
        : left(std::move(left)), right(std::move(right)) {}

    int interpret(const Context& context) const override {
        return left->interpret(context) + right->interpret(context);
    }

private:
    std::unique_ptr<Expression> left;
    std::unique_ptr<Expression> right;
};

#endif // ADDEXPRESSION_H
