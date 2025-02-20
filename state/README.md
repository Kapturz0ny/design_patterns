# Wzorzec State (Stan)
Wzorzec State (ang. State) to wzorzec projektowy, który umożliwia obiektowi zmianę swojego zachowania w zależności od jego stanu wewnętrznego. Wygląda to tak, jakby obiekt zmieniał swoją klasę w czasie działania programu.

## Zastosowanie
- Gdy obiekt ma wiele stanów i jego zachowanie różni się w zależności od aktualnego stanu.
- Gdy unikanie dużej liczby instrukcji warunkowych (if-else, switch-case) zwiększa czytelność kodu.

## Struktura
- Kontekst (Context):
  - Obiekt, który posiada zmieniający się stan.
  - Deleguje zachowania do obiektu stanu.
- Stan (State):
  - Interfejs bazowy definiujący zachowanie dla różnych stanów.
- Konkretny Stan (Concrete State):
  - Klasy implementujące specyficzne zachowania dla danego stanu.

## Przykład w C++: Automat do napojów
Opis działania
- Automat zaczyna w stanie WaitingForCoinState.
- Gdy użytkownik wrzuci monetę (insertCoin):
  - Stan zmienia się na ProductSelectedState.
- Gdy użytkownik wybierze produkt (selectProduct):
  - Produkt zostaje wydany.
  - Automat wraca do stanu WaitingForCoinState.

## Zalety wzorca State
- Rozdzielenie kodu dla różnych stanów - Logika każdego stanu jest zawarta w oddzielnej klasie.
- Łatwe dodawanie nowych stanów - Dodanie nowego stanu wymaga stworzenia nowej klasy i jej integracji z istniejącymi mechanizmami.
- Przejrzysty kod - Zamiast dużej liczby instrukcji warunkowych (if-else lub switch), mamy zorganizowane klasy.

## Wady wzorca State
- Większa liczba klas - Każdy stan wymaga oddzielnej klasy, co może prowadzić do rozbudowy projektu.
- Złożoność - Przy dużej liczbie stanów zarządzanie przejściami może być skomplikowane.

## Zastosowanie w rzeczywistości
- Automatyczne drzwi przesuwne (stany: otwarte, zamknięte, otwieranie, zamykanie).
- Maszyny stanowe w grach (np. różne tryby postaci w grze RPG).
- Procesy biznesowe z wieloma krokami, gdzie każdy krok jest odrębnym stanem.

