#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <iostream>
#include <memory>

// Klasa bazowa dla wszystkich obiektów
class GameObject {
public:
    virtual ~GameObject() = default;

    // Metoda interakcji, którą musimy zrealizować
    virtual void collideWith(GameObject& other) = 0;

    // Mechanizm do multimetody
    virtual void collideWithAsteroid(class Asteroid& asteroid) {
        std::cout << "Default collision with Asteroid.\n";
    }

    virtual void collideWithSpaceship(class Spaceship& spaceship) {
        std::cout << "Default collision with Spaceship.\n";
    }

    virtual void collideWithProjectile(class Projectile& projectile) {
        std::cout << "Default collision with Projectile.\n";
    }
};

#endif // GAMEOBJECT_H
