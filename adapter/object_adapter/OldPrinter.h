#ifndef OLDPRINTER_H
#define OLDPRINTER_H

#include <string>
#include <iostream>

// Stara klasa drukarki z niezgodnym interfejsem
class OldPrinter {
public:
    void oldPrint(const std::string& text) const {
        std::cout << "OldPrinter: Printing -> " << text << std::endl;
    }
};

#endif // OLDPRINTER_H
