#ifndef SHAPE_HPP
#define SHAPE_HPP

#include "DrawingAPI.hpp"
#include <memory>

class Shape {
public:
    virtual ~Shape() = default;
    virtual void draw() = 0;
    virtual void resize(double factor) = 0;

protected:
    std::shared_ptr<DrawingAPI> drawingAPI_;
    Shape(std::shared_ptr<DrawingAPI> drawingAPI) : drawingAPI_(drawingAPI) {}
};

#endif // SHAPE_HPP
