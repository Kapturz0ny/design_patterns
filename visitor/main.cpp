#include "Circle.h"
#include "Rectangle.h"
#include "DrawVisitor.h"
#include "AreaVisitor.h"
#include <vector>
#include <memory>

int main() {
    // Tworzymy kształty
    std::vector<std::unique_ptr<Shape>> shapes;
    shapes.push_back(std::make_unique<Circle>(5.0));
    shapes.push_back(std::make_unique<Rectangle>(4.0, 6.0));

    // Tworzymy Wizytorów
    DrawVisitor drawVisitor;
    AreaVisitor areaVisitor;

    // Iterujemy po kształtach i stosujemy Wizytorów
    for (const auto& shape : shapes) {
        shape->accept(drawVisitor);
        shape->accept(areaVisitor);
    }

    return 0;
}
