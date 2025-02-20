# Wzorzec projektowy Iterator (Iterator)
Wzorzec Iterator pozwala na sekwencyjny dostęp do elementów kolekcji bez ujawniania szczegółów jej implementacji. Dzięki niemu możemy przetwarzać elementy kolekcji w sposób ujednolicony, niezależnie od jej struktury.

## Kiedy stosować wzorzec Iterator?
- Gdy chcesz oddzielić logikę iterowania od struktury danych.
- Gdy chcesz mieć jednolity sposób iteracji dla różnych typów kolekcji.
- Gdy chcesz umożliwić iterację po kolekcji w więcej niż jeden sposób (np. od przodu, od tyłu).

## Kluczowe elementy wzorca:
- Iterator – Klasa definiująca interfejs do iterowania po kolekcji (np. next(), hasNext()).
- ConcreteIterator – Implementacja interfejsu Iteratora dla konkretnej kolekcji.
- Aggregate (Kolekcja) – Interfejs kolekcji, który udostępnia metodę tworzenia iteratora (createIterator()).
- ConcreteAggregate – Konkretna implementacja kolekcji, która tworzy instancję odpowiedniego iteratora.

## Przykład w C++
Załóżmy, że mamy klasę NumberCollection, która przechowuje liczby. Użyjemy wzorca Iterator, aby iterować po tych liczbach.
- NumberCollection: Przechowuje liczby w wektorze.
- NumberIterator: Implementuje logikę iteracji po elementach kolekcji.
- createIterator: Udostępnia iterator w celu iteracji po kolekcji.
- W pętli while w main(): Używamy iteratora do przetwarzania kolejnych elementów.

## Zalety wzorca Iterator:
- Rozdzielenie logiki iteracji: Klasy kolekcji nie muszą implementować logiki iterowania.
- Jednolity interfejs: Można iterować po różnych typach kolekcji w ten sam sposób.
- Wsparcie dla różnych algorytmów iteracji: Możesz łatwo dodać np. iterację od tyłu.

## Wady wzorca Iterator:
- Dodatkowe klasy: Każda kolekcja wymaga dedykowanego iteratora.
- Mniej wydajny niż indeksowanie: Dla prostych struktur, jak tablice, iterator może być nieco wolniejszy.

## Rozszerzenia:
- Odwrócony Iterator: Umożliwia iterację od końca kolekcji do początku.
- C++ Standard Library: Nowoczesne iteratory w C++ są integralną częścią STL (np. std::vector::iterator, std::map::iterator) i wspierają dodatkowe operacje (np. ++, --).
