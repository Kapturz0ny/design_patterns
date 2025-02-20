#include "NumberCollection.h"
#include <iostream>

int main() {
    NumberCollection collection;

    // Dodajemy liczby do kolekcji
    collection.add(10);
    collection.add(20);
    collection.add(30);

    // Tworzymy iterator
    auto iterator = collection.createIterator();

    // Iterujemy po elementach kolekcji
    while (iterator.hasNext()) {
        std::cout << "Number: " << iterator.next() << std::endl;
    }

    return 0;
}
