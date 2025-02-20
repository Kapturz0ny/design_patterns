#include "Asteroid.h"
#include "Spaceship.h"
#include "Projectile.h"
#include <vector>
#include <memory>

int main() {
    // Tworzenie obiektów gry
    Asteroid asteroid;
    Spaceship spaceship;
    Projectile projectile;

    // Dynamiczna lista obiektów
    std::vector<std::unique_ptr<GameObject>> objects;
    objects.push_back(std::make_unique<Asteroid>(asteroid));
    objects.push_back(std::make_unique<Spaceship>(spaceship));
    objects.push_back(std::make_unique<Projectile>(projectile));

    // Testowanie zderzeń
    for (auto& obj1 : objects) {
        for (auto& obj2 : objects) {
            std::cout << "Collision:\n";
            obj1->collideWith(*obj2);
        }
    }

    return 0;
}
