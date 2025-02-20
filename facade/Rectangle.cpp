#include "Rectangle.hpp"
#include "Circle.hpp"
#include <iostream>

void Rectangle::collideWith(Shape& other) {
    other.collide(*this);  // Pierwszy poziom dispatchu
}

void Rectangle::collide(Circle& other) {
    std::cout << "Rectangle collides with Circle\n";
}

void Rectangle::collide(Rectangle& other) {
    std::cout << "Rectangle collides with Rectangle\n";
}
