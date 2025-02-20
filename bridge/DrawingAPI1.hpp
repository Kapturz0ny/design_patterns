#ifndef DRAWINGAPI1_HPP
#define DRAWINGAPI1_HPP

#include "DrawingAPI.hpp"
#include <iostream>

class DrawingAPI1 : public DrawingAPI {
public:
    void drawCircle(double x, double y, double radius) override {
        std::cout << "Drawing Circle with API1 at (" << x << ", " << y << ") with radius " << radius << "\n";
    }

    void drawSquare(double x, double y, double side) override {
        std::cout << "Drawing Square with API1 at (" << x << ", " << y << ") with side " << side << "\n";
    }
};

#endif // DRAWINGAPI1_HPP
