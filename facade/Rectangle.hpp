#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Shape.hpp"

class Rectangle : public Shape {
public:
    void collideWith(Shape& other) override;
    void collide(Circle& other) override;
    void collide(Rectangle& other) override;
};

#endif // RECTANGLE_HPP
