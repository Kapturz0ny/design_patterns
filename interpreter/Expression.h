#ifndef EXPRESSION_H
#define EXPRESSION_H

class Context; // Forward declaration

class Expression {
public:
    virtual ~Expression() = default;
    virtual int interpret(const Context& context) const = 0;
};

#endif // EXPRESSION_H
