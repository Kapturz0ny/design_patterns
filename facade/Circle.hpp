#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Shape.hpp"

class Circle : public Shape {
public:
    void collideWith(Shape& other) override;
    void collide(Circle& other) override;
    void collide(Rectangle& other) override;
};

#endif // CIRCLE_HPP
