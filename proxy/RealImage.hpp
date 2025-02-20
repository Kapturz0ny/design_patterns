#ifndef REALIMAGE_HPP
#define REALIMAGE_HPP

#include "IImage.hpp"
#include <string>

class RealImage : public IImage {
public:
    RealImage(const std::string& filename);
    void display() const override;

private:
    void loadFromDisk() const;  // Kosztowne wczytywanie z dysku
    std::string filename;
};

#endif // REALIMAGE_HPP
