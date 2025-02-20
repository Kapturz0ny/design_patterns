#ifndef SINGLETON_HPP
#define SINGLETON_HPP

#include <iostream>
#include <memory>
#include <mutex>

class Singleton {
public:
    // Statyczna metoda dostępu do instancji Singletona
    static Singleton& getInstance() {
        // Zabezpieczenie przed równoczesnym tworzeniem instancji w środowisku wielowątkowym
        std::call_once(initInstanceFlag, &Singleton::initSingleton);
        return *instance;
    }

    // Przykładowa metoda członkowska
    void showMessage() const {
        std::cout << "This is a Singleton instance!" << std::endl;
    }

    // Usuwamy możliwość kopiowania i przypisywania instancji
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

private:
    Singleton() = default;  // Prywatny konstruktor
    ~Singleton() = default;

    static void initSingleton() {
        instance.reset(new Singleton);
    }

    static std::unique_ptr<Singleton> instance;
    static std::once_flag initInstanceFlag;  // Flaga do zarządzania tworzeniem instancji w trybie wielowątkowym
};

#endif // SINGLETON_HPP
