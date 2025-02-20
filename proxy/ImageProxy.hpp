#ifndef IMAGEPROXY_HPP
#define IMAGEPROXY_HPP

#include "IImage.hpp"
#include "RealImage.hpp"
#include <string>
#include <memory>

class ImageProxy : public IImage {
public:
    ImageProxy(const std::string& filename);
    void display() const override;

private:
    mutable std::unique_ptr<RealImage> realImage;  // Przechowywanie RealImage
    std::string filename;
};

#endif // IMAGEPROXY_HPP
