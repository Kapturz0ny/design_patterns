// Interfejs Obserwatora
#ifndef OBSERVER_H
#define OBSERVER_H

class Observer {
public:
    virtual ~Observer() = default;
    virtual void update(float temperature, float humidity, float pressure) = 0; // Metoda aktualizacji
};

#endif // OBSERVER_H
