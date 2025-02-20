#include "Circle.hpp"
#include "Square.hpp"
#include <memory>

int main() {
    // Tworzymy oryginalne obiekty
    std::unique_ptr<Shape> originalCircle = std::make_unique<Circle>(5.0);
    std::unique_ptr<Shape> originalSquare = std::make_unique<Square>(10.0);

    // Wyświetlamy oryginalne kształty
    std::cout << "Original shapes:" << std::endl;
    originalCircle->draw();
    originalSquare->draw();

    // Tworzymy kopie przez klonowanie
    std::unique_ptr<Shape> clonedCircle = originalCircle->clone();
    std::unique_ptr<Shape> clonedSquare = originalSquare->clone();

    // Wyświetlamy sklonowane kształty
    std::cout << "\nCloned shapes:" << std::endl;
    clonedCircle->draw();
    clonedSquare->draw();

    return 0;
}
