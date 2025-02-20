#include "ImageProxy.hpp"
#include <iostream>

int main() {
    IImage* image = new ImageProxy("large_photo.jpg");

    std::cout << "Image will be displayed only when needed.\n";
    image->display();  // Wczytuje i wyświetla obraz przy pierwszym wywołaniu

    std::cout << "Displaying image again.\n";
    image->display();  // Tym razem obraz jest już załadowany i tylko go wyświetla

    delete image;
    return 0;
}
