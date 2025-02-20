#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "Shape.hpp"

class Square : public Shape {
public:
    Square(double x, double y, double side, std::shared_ptr<DrawingAPI> drawingAPI)
        : Shape(drawingAPI), x_(x), y_(y), side_(side) {}

    void draw() override {
        drawingAPI_->drawSquare(x_, y_, side_);
    }

    void resize(double factor) override {
        side_ *= factor;
    }

private:
    double x_, y_, side_;
};

#endif // SQUARE_HPP
