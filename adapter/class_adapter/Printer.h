#ifndef PRINTER_H
#define PRINTER_H

#include <string>

// Interfejs nowoczesnego drukowania
class Printer {
public:
    virtual ~Printer() = default;

    virtual void print(const std::string& text) const = 0; // Wymagana metoda
};

#endif // PRINTER_H
