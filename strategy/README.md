# Wzorzec Strategii (Strategy)
Wzorzec Strategii to wzorzec projektowy, który definiuje rodzinę algorytmów, kapsułkuje je w oddzielnych klasach i umożliwia ich wymianę w czasie działania programu. Dzięki temu możemy łatwo zmieniać sposób działania obiektu bez potrzeby zmieniania jego kodu.

## Kiedy stosować Strategię?
- Gdy masz wiele algorytmów, które rozwiązują podobny problem i chcesz umożliwić ich łatwą wymianę.
- Gdy nie chcesz używać złożonych konstrukcji if-else lub switch, aby wybrać odpowiedni algorytm.
- Gdy chcesz otworzyć klasę na rozbudowę (nowe algorytmy), ale zamknąć ją na modyfikacje (zgodnie z zasadą Open/Closed).

# Struktura wzorca
- Strategy (Strategia) - Interfejs lub klasa bazowa, która definiuje metodę używaną przez wszystkie algorytmy.
- Concrete Strategy (Konkretna Strategia) - Konkretne implementacje algorytmu, które dziedziczą po interfejsie Strategy.
- Context (Kontekst) - Klasa, która używa obiektu strategii i deleguje wywołanie algorytmu.

## Opis działania
- Strategie - AdditionStrategy, SubtractionStrategy i MultiplicationStrategy implementują różne algorytmy operacji matematycznych.
- Kontekst - Context używa obiektu strategii do wykonania algorytmu.
- Dynamiczna zmiana - W czasie działania programu można zmienić strategię za pomocą metody setStrategy.

## Zalety wzorca Strategii
- Zgodność z zasadą Open/Closed - Dodanie nowej strategii nie wymaga zmiany istniejącego kodu.
- Reużywalność - Strategie mogą być wielokrotnie używane w różnych kontekstach.
- Eliminacja rozgałęzień - Unikasz skomplikowanych struktur warunkowych (if-else lub switch).

## Wady wzorca Strategii
- Wzrost liczby klas - Każdy algorytm wymaga osobnej klasy.
- Kompleksowość - Może wprowadzać nadmiarową abstrakcję w prostych projektach.

## Zastosowanie w rzeczywistości
- Systemy sortowania (różne algorytmy sortowania w zależności od danych).
- Gry (np. różne strategie sztucznej inteligencji).
- Systemy płatności (różne metody płatności: karta, PayPal, Bitcoin itp.).