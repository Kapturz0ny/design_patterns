#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Shape.hpp"

class Circle : public Shape {
public:
    Circle(double radius) : radius_(radius) {}

    void draw() const override {
        std::cout << "Drawing Circle with radius: " << radius_ << std::endl;
    }

    std::unique_ptr<Shape> clone() const override {
        return std::make_unique<Circle>(*this);  // Tworzymy kopię obiektu Circle
    }

private:
    double radius_;
};

#endif // CIRCLE_HPP
