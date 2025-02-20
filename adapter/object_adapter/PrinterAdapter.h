#ifndef PRINTERADAPTER_H
#define PRINTERADAPTER_H

#include "Printer.h"
#include "OldPrinter.h"

// Adapter obiektowy łączący OldPrinter z interfejsem Printer
class PrinterAdapter : public Printer {
public:
    explicit PrinterAdapter(const OldPrinter& oldPrinter) : oldPrinter_(oldPrinter) {}

    void print(const std::string& text) const override {
        oldPrinter_.oldPrint(text); // Tłumaczenie wywołania na metodę OldPrinter
    }

private:
    const OldPrinter& oldPrinter_;
};

#endif // PRINTERADAPTER_H
