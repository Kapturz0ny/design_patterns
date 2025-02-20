#include "PrinterAdapter.h"

int main() {
    OldPrinter oldPrinter;                 // Stara drukarka
    PrinterAdapter adapter(oldPrinter);   // Adapter łączący starą drukarkę z nowym interfejsem

    adapter.print("Hello, World!");       // Wywołanie nowoczesnego interfejsu
    return 0;
}
