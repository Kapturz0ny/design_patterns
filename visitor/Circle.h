#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

// Klasa Circle
class Circle : public Shape {
public:
    explicit Circle(double radius) : radius_(radius) {}

    double getRadius() const { return radius_; }

    void accept(Visitor& visitor) const override {
        visitor.visit(*this); // Wywołanie metody Wizytora
    }

private:
    double radius_;
};

#endif // CIRCLE_H
