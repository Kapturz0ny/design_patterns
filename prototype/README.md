# Wzorzec Prototypu (Prototype)
to wzorzec kreacyjny, który pozwala tworzyć nowe obiekty poprzez kopiowanie istniejących instancji, zamiast tworzyć je od zera. Wzorzec ten jest szczególnie przydatny, gdy tworzenie obiektów od podstaw jest kosztowne lub złożone. Dzięki wzorcowi Prototypu możemy stworzyć kopię obiektu bez konieczności znajomości jego konkretnej klasy.

## Kiedy używać wzorca Prototypu?
- Kiedy tworzenie obiektów jest kosztowne (np. wymaga dużo pamięci lub czasu).
- Kiedy system wymaga tworzenia dużej liczby podobnych obiektów.
- Kiedy chcemy unikać operacji tworzenia instancji klasy przy użyciu słowa kluczowego new i zamiast tego chcemy kopiować istniejące obiekty.
- Gdy potrzebujesz dynamicznie dodawać lub modyfikować klasy, co może być trudne do zarządzania przy użyciu klasycznych konstruktorów.

## Kluczowe elementy wzorca Prototypu
- Prototyp (Prototype): Interfejs lub klasa bazowa deklarująca metodę clone(), która pozwala na klonowanie obiektu.
- Konkretny Prototyp (Concrete Prototype): Konkretna implementacja, która dostarcza metodę clone() umożliwiającą skopiowanie obiektu.
- Klient (Client): Obiekt, który zleca kopiowanie obiektu przy użyciu metody clone().

## Przykład implementacji wzorca Prototypu w C++
- Oryginalne obiekty: Tworzymy obiekty Circle i Square o różnych wymiarach.
- Klonowanie: Dzięki wzorcowi Prototypu możemy stworzyć kopie tych obiektów bez konieczności tworzenia ich od podstaw. Metoda clone() wywoływana na każdym z obiektów zwraca nową instancję tego samego typu obiektu.
- Rysowanie obiektów: Po sklonowaniu obu obiektów wywołujemy metodę draw() na kopiach, aby upewnić się, że sklonowane obiekty działają tak samo jak oryginały.

