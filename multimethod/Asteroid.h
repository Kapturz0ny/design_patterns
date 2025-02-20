#ifndef ASTEROID_H
#define ASTEROID_H

#include "GameObject.h"

class Asteroid : public GameObject {
public:
    void collideWith(GameObject& other) override {
        other.collideWithAsteroid(*this);  // Podwójna dyspozycja
    }

    void collideWithSpaceship(Spaceship& spaceship) override {
        std::cout << "Asteroid destroys the Spaceship!\n";
    }

    void collideWithProjectile(Projectile& projectile) override {
        std::cout << "Asteroid is destroyed by the Projectile!\n";
    }
};

#endif // ASTEROID_H
