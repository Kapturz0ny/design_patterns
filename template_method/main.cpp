#include "Tea.h"
#include "Coffee.h"

int main() {
    Tea tea;
    Coffee coffee;

    std::cout << "Making tea:" << std::endl;
    tea.prepareRecipe();  // Wywołanie metody szablonowej dla herbaty

    std::cout << "\nMaking coffee:" << std::endl;
    coffee.prepareRecipe();  // Wywołanie metody szablonowej dla kawy

    return 0;
}
