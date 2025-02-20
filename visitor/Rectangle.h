#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

// Klasa Rectangle
class Rectangle : public Shape {
public:
    explicit Rectangle(double width, double height) : width_(width), height_(height) {}

    double getWidth() const { return width_; }
    double getHeight() const { return height_; }

    void accept(Visitor& visitor) const override {
        visitor.visit(*this); // Wywołanie metody Wizytora
    }

private:
    double width_;
    double height_;
};

#endif // RECTANGLE_H
