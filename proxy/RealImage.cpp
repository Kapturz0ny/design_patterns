#include "RealImage.hpp"
#include <iostream>

RealImage::RealImage(const std::string& filename) : filename(filename) {
    loadFromDisk();  // Wczytanie obrazu z dysku
}

void RealImage::loadFromDisk() const {
    std::cout << "Loading image from disk: " << filename << std::endl;
}

void RealImage::display() const {
    std::cout << "Displaying image: " << filename << std::endl;
}
