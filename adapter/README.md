# Wzorzec projektowy Adapter (Adapter Pattern)
Wzorzec Adapter umożliwia współpracę między klasami o niezgodnych interfejsach. Działa jako "most", który tłumaczy jeden interfejs na inny, pozwalając na ponowne wykorzystanie istniejących klas bez konieczności ich modyfikacji.

## Kiedy stosować wzorzec Adapter?
- Gdy chcesz użyć istniejącej klasy, ale jej interfejs nie pasuje do wymagań.
- Gdy chcesz połączyć nowy system z istniejącym, który używa innego interfejsu.

## Rodzaje Adapterów
### Adapter obiektowy:
Używa kompozycji (obiekt Adaptera posiada instancję dostosowywanej klasy).

Załóżmy, że mamy klasę OldPrinter, która drukuje dokumenty w starym formacie, ale nowa aplikacja wymaga klasy obsługującej interfejs Printer. Adapter pomoże połączyć te dwa komponenty.
- Klasa OldPrinter: Ma metodę oldPrint, której sygnatura nie pasuje do interfejsu Printer.
- Klasa PrinterAdapter: Implementuje interfejs Printer, a jej metoda print tłumaczy wywołanie na metodę oldPrint.
- W main: Używasz PrinterAdapter, aby pracować z OldPrinter przez nowoczesny interfejs.

### Adapter klasowy:
Używa dziedziczenia (Adapter dziedziczy zarówno po wymaganym interfejsie, jak i po dostosowywanej klasie). W C++ wymaga to obsługi dziedziczenia wielokrotnego.

## Zalety wzorca Adapter:
- Ponowne wykorzystanie kodu: Pozwala używać istniejących klas w nowym kontekście bez modyfikacji.
- Elastyczność: Adapter może tłumaczyć różne interfejsy na wymagany.

## Wady wzorca Adapter:
- Złożoność: Wprowadza dodatkową warstwę abstrakcji.
- Zależność od implementacji: Adapter obiektowy wymaga referencji do dostosowywanej klasy, a Adapter klasowy wymaga dziedziczenia, co może być ograniczeniem.

## Który Adapter wybrać?
- Obiektowy: Lepszy, gdy nie chcesz modyfikować istniejącej hierarchii klas.
- Klasowy: Stosuj, gdy możesz bezpiecznie korzystać z dziedziczenia i nie masz ograniczeń w użyciu wielokrotnego dziedziczenia.