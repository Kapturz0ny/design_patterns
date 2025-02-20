# Wzorzec Obserwatora (Observer Pattern)
Wzorzec obserwatora (ang. Observer) to wzorzec projektowy, w którym jeden obiekt (nazywany Obserwowanym, ang. Subject) informuje inne powiązane obiekty (zwane Obserwatorami, ang. Observers) o zmianach swojego stanu. Obserwatorzy automatycznie aktualizują swoje dane, gdy obserwowany obiekt zostaje zmodyfikowany.

## Zastosowanie
Kiedy zmiana w jednym obiekcie wymaga automatycznego powiadomienia i aktualizacji wielu innych obiektów.
Przykłady: systemy powiadomień, GUI (np. gdy zmiana w modelu aktualizuje widoki).

## Struktura
- Obserwowany (Subject):
  - Przechowuje listę obserwatorów.
  - Oferuje mechanizmy do:
    - Dodawania obserwatorów.
    - Usuwania obserwatorów.
    - Powiadamiania obserwatorów o zmianach.
- Obserwator (Observer):
  - Interfejs lub klasa, która definiuje metodę do aktualizacji, wywoływaną przez Obserwowanego.
- Konkretny Obserwator:
  - Implementuje metodę aktualizacji.

## Przykład w C++: System pogody
### Rejestracja obserwatorów:
Display obiekty są dodawane do listy obserwatorów w WeatherStation.

### Powiadamianie o zmianach:
Gdy metoda setWeatherData w WeatherStation zmienia stan (np. temperaturę), wywoływana jest metoda notifyObservers, która przekazuje nowe dane do zarejestrowanych obserwatorów.

### Aktualizacja obserwatorów:
Każdy zarejestrowany obserwator (np. Display) odbiera zmienione dane i je przetwarza.

## Zalety wzorca Obserwatora
- Luźne powiązanie - Obserwowany obiekt nie musi znać szczegółów implementacji obserwatorów.
- Skalowalność - Można łatwo dodawać nowe obserwatory bez modyfikowania kodu obserwowanego obiektu.

## Wady wzorca Obserwatora
- Złożoność - Może być trudny w utrzymaniu w systemach z wieloma obserwatorami i wieloma zależnościami.
- Kolejność aktualizacji - Gdy zależności między obserwatorami są złożone, może wystąpić problem z właściwą kolejnością aktualizacji.