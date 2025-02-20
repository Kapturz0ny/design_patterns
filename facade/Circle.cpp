#include "Circle.hpp"
#include "Rectangle.hpp"
#include <iostream>

void Circle::collideWith(Shape& other) {
    other.collide(*this);  // Pierwszy poziom dispatchu
}

void Circle::collide(Circle& other) {
    std::cout << "Circle collides with Circle\n";
}

void Circle::collide(Rectangle& other) {
    std::cout << "Circle collides with Rectangle\n";
}
