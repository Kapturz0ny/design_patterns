#ifndef PROJECTILE_H
#define PROJECTILE_H

#include "GameObject.h"

class Projectile : public GameObject {
public:
    void collideWith(GameObject& other) override {
        other.collideWithProjectile(*this);  // Podwójna dyspozycja
    }

    void collideWithAsteroid(Asteroid& asteroid) override {
        std::cout << "Projectile destroys the Asteroid!\n";
    }

    void collideWithSpaceship(Spaceship& spaceship) override {
        std::cout << "Projectile misses the Spaceship.\n";
    }
};

#endif // PROJECTILE_H
