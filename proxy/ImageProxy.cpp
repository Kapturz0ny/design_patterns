#include "ImageProxy.hpp"
#include "RealImage.hpp"
#include <iostream>

ImageProxy::ImageProxy(const std::string& filename) : filename(filename), realImage(nullptr) {}

void ImageProxy::display() const {
    if (!realImage) {  // Sprawdzamy, czy RealImage został już załadowany
        realImage = std::make_unique<RealImage>(filename);  // Opóźnione tworzenie obiektu
    }
    realImage->display();
}
