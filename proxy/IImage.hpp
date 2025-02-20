#ifndef IIMAGE_HPP
#define IIMAGE_HPP

#include <string>

class IImage {
public:
    virtual ~IImage() = default;
    virtual void display() const = 0;  // Metoda do wyświetlenia obrazu
};

#endif // IIMAGE_HPP
