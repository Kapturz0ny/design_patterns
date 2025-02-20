#ifndef SPACESHIP_H
#define SPACESHIP_H

#include "GameObject.h"

class Spaceship : public GameObject {
public:
    void collideWith(GameObject& other) override {
        other.collideWithSpaceship(*this);  // Podwójna dyspozycja
    }

    void collideWithAsteroid(Asteroid& asteroid) override {
        std::cout << "Spaceship is destroyed by the Asteroid!\n";
    }

    void collideWithProjectile(Projectile& projectile) override {
        std::cout << "Spaceship dodges the Projectile!\n";
    }
};

#endif // SPACESHIP_H
