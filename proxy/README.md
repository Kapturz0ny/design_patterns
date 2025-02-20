# Wzorzec Proxy (pełnomocnik)
jest wzorcem strukturalnym, który dostarcza obiekt zastępczy lub "pełnomocnika" dla innego obiektu. Proxy kontroluje dostęp do obiektu docelowego, a także umożliwia dodatkowe operacje (jak kontrola dostępu, opóźnione tworzenie obiektu czy cachowanie) bez zmiany kodu klienta, który korzysta z tego obiektu.

## Zastosowania wzorca Proxy
- Kontrola dostępu – umożliwienie lub blokowanie dostępu do obiektu w zależności od uprawnień.
- Opóźniona inicjalizacja (lazy initialization) – tworzenie obiektu dopiero wtedy, gdy jest on potrzebny, aby oszczędzać zasoby.
- Cachowanie – przechowywanie wyników kosztownych operacji, aby uniknąć ich powtarzania.
- Zdalny dostęp – działanie jako lokalny reprezentant dla obiektu, który znajduje się zdalnie (np. na serwerze).


## Przykład implementacji Proxy w C++
W naszym przykładzie załóżmy, że mamy obiekt Image, który reprezentuje duży plik graficzny. Załadunek takiego pliku może być kosztowny pod względem wydajności, więc chcemy opóźnić jego wczytanie do momentu, aż naprawdę będzie potrzebny.
Struktura klas
- Interfejs IImage – definiuje wspólne metody dla klas rzeczywistego obrazu i proxy.
Interfejs IImage definiuje metodę display(), którą musi zaimplementować każda klasa obrazu.
- Klasa RealImage – reprezentuje rzeczywisty obraz, który zajmuje dużo zasobów.
RealImage reprezentuje duży obraz, który wymaga kosztownego wczytania z dysku. Metoda loadFromDisk() jest wywoływana w konstruktorze, symulując czasochłonne wczytywanie.
- Klasa ImageProxy – jest "pełnomocnikiem" dla RealImage. Inicjalizuje RealImage dopiero, gdy jest to konieczne.
ImageProxy przechowuje wskaźnik realImage na RealImage. Zamiast ładować obraz od razu, proxy opóźnia inicjalizację RealImage do momentu, gdy display() jest faktycznie wywoływane.

## Podsumowanie
Wzorzec Proxy daje nam kontrolę nad tworzeniem i dostępem do obiektu docelowego:
ImageProxy tworzy obiekt RealImage dopiero wtedy, gdy jest to konieczne.
Przy drugim wywołaniu display() obraz jest już załadowany, więc RealImage tylko wykonuje display(), bez ponownego ładowania.

**Proxy** jest skutecznym wzorcem, który może zoptymalizować zarządzanie zasobami w aplikacji i zabezpieczyć dostęp do obiektów.