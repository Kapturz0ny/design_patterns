#ifndef DRAWVISITOR_H
#define DRAWVISITOR_H

#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include <iostream>

// Wizytor do rysowania kształtów
class DrawVisitor : public Visitor {
public:
    void visit(const Circle& circle) override {
        std::cout << "Drawing a Circle with radius: " << circle.getRadius() << std::endl;
    }

    void visit(const Rectangle& rectangle) override {
        std::cout << "Drawing a Rectangle with width: " << rectangle.getWidth()
                  << " and height: " << rectangle.getHeight() << std::endl;
    }
};

#endif // DRAWVISITOR_H
