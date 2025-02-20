# Wzorzec Interpreter (Interpreter)
Wzorzec Interpreter to wzorzec projektowy, który definiuje reprezentację gramatyki i interpretuje zdania zgodnie z nią. Jest przydatny do przetwarzania prostych języków, takich jak wyrażenia matematyczne, logika formalna czy zapytania wyszukiwania.

## Kiedy stosować Interpreter?
- Gdy masz dobrze zdefiniowaną gramatykę dla swojego problemu i musisz ją zaimplementować.
- Gdy przetwarzasz powtarzające się wyrażenia w sposób programowalny.
- Gdy tworzysz własny język specyficzny dla dziedziny (DSL, Domain-Specific Language).

## Struktura wzorca
- Abstract Expression (Abstrakcyjne Wyrażenie):
  - Interfejs bazowy dla wszystkich wyrażeń w języku.
  - Zawiera metodę interpret.
- Terminal Expression (Wyrażenie Terminalne):
  - Klasa reprezentująca symboly końcowe w gramatyce.
  - Implementuje metodę interpret.
- Non-terminal Expression (Wyrażenie Nieterminalne):
  - Klasa reprezentująca reguły gramatyczne.
  - Może mieć odniesienia do innych wyrażeń (rekursja).
- Context (Kontekst):
  - Zawiera informacje, które są używane podczas interpretacji.

## Opis działania
Tworzenie wyrażeń:
- TerminalExpression reprezentuje zmienne (x, y).
- AddExpression i SubtractExpression reprezentują operacje matematyczne.
Interpretacja:
- Wyrażenie x + y - y jest interpretowane, pobierając wartości zmiennych z kontekstu.

## Zalety wzorca Interpreter
- Łatwa rozbudowa - Dodanie nowych reguł gramatycznych wymaga utworzenia nowych klas.
- Zgodność z zasadą SRP - Każda klasa odpowiada za konkretny element języka.

## Wady wzorca Interpreter
- Złożoność - Duża liczba reguł prowadzi do wielu klas.
- Niska wydajność - Interpretacja w czasie rzeczywistym może być wolna.

## Zastosowanie w rzeczywistości
- Kompilatory i interpretery języków programowania.
- Parsowanie i przetwarzanie zapytań (np. SQL, XML, JSON).
- Silniki reguł w systemach ekspertowych.