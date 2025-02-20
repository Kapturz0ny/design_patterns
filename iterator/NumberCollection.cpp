#include "NumberCollection.h"

void NumberCollection::add(int number) {
    numbers_.push_back(number);
}

NumberCollection::NumberIterator NumberCollection::createIterator() const {
    return NumberIterator(*this);  // Tworzy instancję iteratora
}

NumberCollection::NumberIterator::NumberIterator(const NumberCollection& collection)
    : collection_(collection), currentIndex_(0) {}

bool NumberCollection::NumberIterator::hasNext() const {
    return currentIndex_ < collection_.numbers_.size();
}

int NumberCollection::NumberIterator::next() {
    if (!hasNext()) {
        throw std::out_of_range("No more elements");
    }
    return collection_.numbers_[currentIndex_++];
}
