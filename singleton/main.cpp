#include "Singleton.hpp"

int main() {
    // Uzyskanie dostępu do instancji Singletona
    Singleton& singletonInstance = Singleton::getInstance();
    singletonInstance.showMessage();

    // Próba ponownego uzyskania instancji (zwróci ten sam obiekt)
    Singleton& anotherInstance = Singleton::getInstance();
    anotherInstance.showMessage();

    return 0;
}
