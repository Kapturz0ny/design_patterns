# Wzorzec Multimetody (ang. Multimethods)
Technika programistyczna, która umożliwia wybór metody do wywołania na podstawie dynamicznego typu więcej niż jednego argumentu. W C++ takie rozwiązanie nie jest wspierane natywnie, ponieważ C++ obsługuje polimorfizm jednokrotnej dyspozycji (dynamiczny typ tylko jednego obiektu, tj. this).
Aby zaimplementować multimetody w C++, często stosuje się kombinację mechanizmów takich jak:
- Dynamiczne rzutowanie typu (dynamic_cast).
- Podwójna dyspozycja w połączeniu z hierarchią dziedziczenia.
- Tabele odwiedzin (visitor tables) lub inne techniki manualnej tablicy dyskryminacji typów.

## Przykład koncepcyjny: Zderzenia obiektów w grze
W grze mamy różne typy obiektów, np. Asteroid, Spaceship, i Projectile, które mogą wchodzić w interakcje (np. zderzać się). Reakcja na zderzenie zależy od dwóch typów dynamicznych - co z czym się zderzyło.
**Przykładowo**: Asteroid z Spaceship powoduje zniszczenie statku, ale Projectile z Asteroid niszczy asteroidę.

### Wyjaśnienie działania
- Pierwsze wywołanie metody collideWith:
  - Dynamicznie wywołuje metodę collideWith konkretnego obiektu (np. Asteroid lub Spaceship).
  - Przekazuje drugi obiekt jako argument.
- Podwójna dyspozycja:
  - Wywoływana metoda (np. collideWithAsteroid) zależy od dynamicznego typu obu obiektów.
  - Dzięki temu możliwe jest określenie konkretnej logiki w zależności od typu obiektów uczestniczących w interakcji.

## Zalety wzorca Multimetody
- Elastyczność: Możesz definiować różne zachowania dla różnych kombinacji typów obiektów.
- Rozszerzalność: Łatwo dodawać nowe typy obiektów (np. nowe klasy w hierarchii), bez zmiany istniejącego kodu.

## Wady wzorca Multimetody
- Złożoność: Mechanizm wymaga starannego zarządzania dynamicznymi wywołaniami, co może być skomplikowane.
- Wydajność: W niektórych przypadkach mechanizm dynamicznego rzutowania (dynamic_cast) może wprowadzać narzut wydajnościowy.

## Alternatywa w nowoczesnym C++
W nowoczesnym C++ można zastosować std::variant i wzorzec Visitor, co pozwala na bardziej idiomatyczne podejście do multimetod.