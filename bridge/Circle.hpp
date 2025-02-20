#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Shape.hpp"

class Circle : public Shape {
public:
    Circle(double x, double y, double radius, std::shared_ptr<DrawingAPI> drawingAPI)
        : Shape(drawingAPI), x_(x), y_(y), radius_(radius) {}

    void draw() override {
        drawingAPI_->drawCircle(x_, y_, radius_);
    }

    void resize(double factor) override {
        radius_ *= factor;
    }

private:
    double x_, y_, radius_;
};

#endif // CIRCLE_HPP
