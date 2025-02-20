# Kompozyt (Composite)
jest wzorcem strukturalnym, który pozwala na tworzenie hierarchii obiektów w postaci struktury drzewiastej. Dzięki temu możemy traktować zarówno pojedyncze obiekty, jak i ich grupy w jednolity sposób. Kompozyt umożliwia reprezentowanie złożonych struktur jako zagnieżdżonych "kompozycji" obiektów, które są hierarchicznie uporządkowane.

## Kiedy stosować wzorzec Kompozytu?
- Potrzebujesz hierarchii obiektów – np. struktura katalogów w systemie plików lub struktura części maszyny.
- Chcesz traktować obiekty i ich grupy jednolicie – umożliwia to pisanie kodu, który może pracować na pojedynczym obiekcie lub na złożonej strukturze w ten sam sposób.
- Struktura jest rekurencyjna – każda część może zawierać podczęści, co tworzy strukturę drzewiastą.

## Struktura wzorca Kompozyt
- Komponent (Component) – abstrakcyjna klasa bazowa, która definiuje interfejs dla wszystkich obiektów w hierarchii.
- Liść (Leaf) – klasa reprezentująca obiekty, które nie mają pod-obiektów (np. pojedynczy plik).
- Kompozyt (Composite) – klasa, która może zawierać inne obiekty, zarówno Leaf, jak i inne Composite (np. katalog zawierający pliki i inne katalogi).

