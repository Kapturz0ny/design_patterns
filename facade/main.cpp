#include <memory>
#include "Circle.hpp"
#include "Rectangle.hpp"

int main() {
    std::unique_ptr<Shape> shape1 = std::make_unique<Circle>();
    std::unique_ptr<Shape> shape2 = std::make_unique<Rectangle>();

    shape1->collideWith(*shape2);  // Wywoła: "Circle collides with Rectangle"
    shape2->collideWith(*shape1);  // Wywoła: "Rectangle collides with Circle"

    return 0;
}
