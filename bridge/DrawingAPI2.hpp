#ifndef DRAWINGAPI2_HPP
#define DRAWINGAPI2_HPP

#include "DrawingAPI.hpp"
#include <iostream>

class DrawingAPI2 : public DrawingAPI {
public:
    void drawCircle(double x, double y, double radius) override {
        std::cout << "Drawing Circle with API2 at (" << x << ", " << y << ") with radius " << radius << "\n";
    }

    void drawSquare(double x, double y, double side) override {
        std::cout << "Drawing Square with API2 at (" << x << ", " << y << ") with side " << side << "\n";
    }
};

#endif // DRAWINGAPI2_HPP
