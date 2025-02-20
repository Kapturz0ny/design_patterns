#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "Shape.hpp"

class Square : public Shape {
public:
    Square(double side) : side_(side) {}

    void draw() const override {
        std::cout << "Drawing Square with side: " << side_ << std::endl;
    }

    std::unique_ptr<Shape> clone() const override {
        return std::make_unique<Square>(*this);  // Tworzymy kopię obiektu Square
    }

private:
    double side_;
};

#endif // SQUARE_HPP
