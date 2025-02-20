# Wzorzec Mediatora (Mediator)
Wzorzec Mediatora to wzorzec projektowy, który definiuje obiekt pośredniczący w komunikacji pomiędzy innymi obiektami. Dzięki niemu obiekty nie muszą znać swojej wzajemnej struktury, co prowadzi do mniejszego stopnia sprzężenia między nimi.

## Kiedy stosować Mediatora?
- Gdy wiele obiektów komunikuje się ze sobą w skomplikowany sposób, tworząc trudne do zarządzania zależności.
- Gdy chcesz centralizować logikę interakcji między obiektami w jednym miejscu.
- Gdy chcesz poprawić czytelność i elastyczność kodu przez redukcję zależności.

## Struktura wzorca
- Mediator (Mediator) - Interfejs definiujący sposób komunikacji między komponentami.
- Concrete Mediator (Konkretny Mediator) - Implementacja mediatora, która zarządza współpracą pomiędzy komponentami.
- Colleague (Kolegium) - Interfejs lub klasa bazowa dla obiektów komunikujących się za pośrednictwem mediatora.
- Concrete Colleague (Konkretny Kolegium) - Konkretny obiekt, który komunikuje się z innymi poprzez mediatora.

## Przykład w C++: Czaty z Mediatora
Opis działania
- Mediator - ConcreteMediator zarządza wymianą wiadomości między uczestnikami.
- Kolegium - ConcreteColleague reprezentuje uczestników czatu, którzy wysyłają i odbierają wiadomości za pośrednictwem mediatora.

## Zalety wzorca Mediator
- Centralizacja logiki - Mediator centralizuje logikę komunikacji, co ułatwia zarządzanie kodem.
- Redukcja zależności - Obiekty komunikują się tylko przez mediatora, nie muszą znać swojej struktury.
- Łatwa rozbudowa - Dodanie nowego obiektu nie wymaga modyfikacji istniejących obiektów.

## Wady wzorca Mediator
- Możliwe przeciążenie Mediatora - Mediator może stać się zbyt skomplikowany, jeśli zarządza zbyt wieloma obiektami.
- Centralizacja odpowiedzialności - Zbyt duża zależność od jednego punktu.

## Zastosowanie w rzeczywistości
- Systemy komunikacji (np. czaty, systemy powiadomień).
- Zarządzanie zdarzeniami w interfejsach użytkownika.
- Systemy zarządzania ruchem (np. wieża kontrolna na lotnisku).