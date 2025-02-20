#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <iostream>
#include <memory>

class Shape {
public:
    virtual ~Shape() = default;
    virtual void draw() const = 0;
    virtual std::unique_ptr<Shape> clone() const = 0;
};

#endif // SHAPE_HPP
