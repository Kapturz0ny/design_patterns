#include "PrinterAdapterClass.h"

int main() {
    PrinterAdapterClass adapter;  // Adapter dziedziczący po OldPrinter
    adapter.print("Hello, World!");  // Wywołanie nowoczesnego interfejsu
    return 0;
}
