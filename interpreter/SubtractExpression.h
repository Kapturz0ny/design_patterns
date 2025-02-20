#ifndef SUBTRACTEXPRESSION_H
#define SUBTRACTEXPRESSION_H

#include "Expression.h"
#include <memory>

class SubtractExpression : public Expression {
public:
    SubtractExpression(std::unique_ptr<Expression> left, std::unique_ptr<Expression> right)
        : left(std::move(left)), right(std::move(right)) {}

    int interpret(const Context& context) const override {
        return left->interpret(context) - right->interpret(context);
    }

private:
    std::unique_ptr<Expression> left;
    std::unique_ptr<Expression> right;
};

#endif // SUBTRACTEXPRESSION_H
