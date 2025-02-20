#ifndef NUMBERCOLLECTION_H
#define NUMBERCOLLECTION_H

#include "Iterator.h"
#include <vector>
#include <memory>

class NumberCollection {
public:
    void add(int number);                       // Dodaje liczbę do kolekcji
    class NumberIterator;                       // Deklaracja iteratora

    NumberIterator createIterator() const;      // Tworzy iterator

private:
    std::vector<int> numbers_;                  // Wewnętrzna struktura danych
};

// Konkretna implementacja iteratora dla NumberCollection
class NumberCollection::NumberIterator : public Iterator<int> {
public:
    NumberIterator(const NumberCollection& collection);

    bool hasNext() const override;
    int next() override;

private:
    const NumberCollection& collection_;        // Referencja do kolekcji
    size_t currentIndex_;                       // Aktualny indeks w iteracji
};

#endif // NUMBERCOLLECTION_H
