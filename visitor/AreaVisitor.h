#ifndef AREAVISITOR_H
#define AREAVISITOR_H

#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include <iostream>

// Wizytor do obliczania powierzchni kształtów
class AreaVisitor : public Visitor {
public:
    void visit(const Circle& circle) override {
        double area = 3.14159 * circle.getRadius() * circle.getRadius();
        std::cout << "Area of Circle: " << area << std::endl;
    }

    void visit(const Rectangle& rectangle) override {
        double area = rectangle.getWidth() * rectangle.getHeight();
        std::cout << "Area of Rectangle: " << area << std::endl;
    }
};

#endif // AREAVISITOR_H
