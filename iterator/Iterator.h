#ifndef ITERATOR_H
#define ITERATOR_H

template <typename T>
class Iterator {
public:
    virtual ~Iterator() = default;

    virtual bool hasNext() const = 0;    // Sprawdza, czy są kolejne elementy
    virtual T next() = 0;                // Pobiera następny element
};

#endif // ITERATOR_H
