#include "Circle.hpp"
#include "Square.hpp"
#include "DrawingAPI1.hpp"
#include "DrawingAPI2.hpp"
#include <memory>

int main() {
    // Używanie API1
    std::shared_ptr<DrawingAPI> api1 = std::make_shared<DrawingAPI1>();
    Shape* circle1 = new Circle(5, 5, 10, api1);
    Shape* square1 = new Square(2, 2, 4, api1);

    circle1->draw();
    square1->draw();

    // Zmiana API na API2
    std::shared_ptr<DrawingAPI> api2 = std::make_shared<DrawingAPI2>();
    Shape* circle2 = new Circle(10, 10, 20, api2);
    Shape* square2 = new Square(8, 8, 6, api2);

    circle2->draw();
    square2->draw();

    delete circle1;
    delete square1;
    delete circle2;
    delete square2;

    return 0;
}
