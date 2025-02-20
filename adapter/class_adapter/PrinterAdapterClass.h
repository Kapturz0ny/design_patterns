#ifndef PRINTERADAPTERCLASS_H
#define PRINTERADAPTERCLASS_H

#include "Printer.h"
#include "OldPrinter.h"

// Adapter klasowy łączący OldPrinter z interfejsem Printer
class PrinterAdapterClass : public Printer, private OldPrinter {
public:
    void print(const std::string& text) const override {
        oldPrint(text); // Tłumaczenie wywołania na metodę OldPrinter
    }
};

#endif // PRINTERADAPTERCLASS_H
