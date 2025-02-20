# Wzorzec Singleton
zapewnia, że dana klasa ma tylko jedną instancję oraz dostarcza globalny punkt dostępu do tej instancji. Jest to przydatne w sytuacjach, gdy musimy zagwarantować, że istnieje tylko jeden obiekt danej klasy – na przykład dla zarządzania połączeniami do bazy danych, logowaniem, zarządzaniem zasobami lub konfiguracją aplikacji.

## Kluczowe cechy Singletona:
- Prywatny konstruktor – zapobiega tworzeniu instancji klasy spoza niej.
- Statyczna metoda dostępu do instancji klasy.
- Statyczne pole przechowujące instancję klasy.

## Wyjaśnienie kodu:
- Statyczne pole instance – jest wskaźnikiem na jedyną instancję klasy Singleton. Jest ono inicjalizowane tylko raz za pomocą std::call_once.
- Flaga std::once_flag – initInstanceFlag jest używana razem z std::call_once, co zapewnia, że instancja Singleton zostanie utworzona tylko raz, nawet jeśli wiele wątków spróbuje uzyskać dostęp do getInstance() w tym samym czasie.
- Metoda getInstance() – statyczna metoda, która zwraca referencję do jedynej instancji klasy Singleton. Dzięki std::call_once mamy pewność, że instancja zostanie utworzona tylko raz.


## Ważne uwagi dotyczące wzorca Singleton:
- Bezpieczeństwo wielowątkowe – Użycie std::call_once oraz std::once_flag zapewnia, że instancja zostanie utworzona tylko raz, nawet w środowisku wielowątkowym.
- Usuwanie kopiowania i przypisywania – Konstruktor kopiujący i operator przypisania są usunięte, aby uniemożliwić tworzenie kopii instancji Singletona.
- Późna inicjalizacja – Instancja jest tworzona tylko wtedy, gdy pierwszy raz jest potrzebna, co jest bardziej efektywne i pozwala uniknąć inicjalizacji, jeśli instancja nie jest używana.