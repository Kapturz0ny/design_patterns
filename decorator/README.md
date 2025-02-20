# Wzorzec Dekoratora (ang. Decorator)
jest strukturalnym wzorcem projektowym, który umożliwia dynamiczne dodawanie funkcjonalności do obiektów bez modyfikacji ich kodu. Zamiast rozszerzać klasę przez dziedziczenie, wzorzec Dekoratora pozwala "opakować" obiekt w inne obiekty (dekoratory), które dodają nowe zachowania lub zmieniają istniejące.

## Kluczowe elementy wzorca Dekoratora
- Komponent (Component) – to interfejs lub klasa abstrakcyjna, która definiuje podstawowe operacje, jakie mogą być wykonywane na obiekcie.
- Konkretne Komponenty (ConcreteComponent) – klasy implementujące podstawową funkcjonalność, które będą dekorowane.
- Dekorator (Decorator) – klasa abstrakcyjna lub interfejs, który implementuje interfejs komponentu i jednocześnie przechowuje referencję do komponentu, który dekoruje.
- Konkretne Dekoratory (ConcreteDecorator) – klasy, które rozszerzają funkcjonalność komponentu, implementując dodatkowe operacje.

## Przykład zastosowania
Załóżmy, że mamy system tworzenia napojów i chcemy dynamicznie dodawać różne dodatki do kawy, takie jak mleko, cukier, bita śmietana itd. Zamiast tworzyć osobne klasy dla każdej możliwej kombinacji dodatków, możemy użyć wzorca Dekoratora.

Wyjaśnienie działania
Mamy wirtualną klasę napój po której dziedziczą: nasz napój oraz virt klasa dekoratora do naszego napoju.
Tworzymy podstawowy napój Coffee.
Dodajemy mleko do kawy, tworząc nowy obiekt MilkDecorator, który owija kawę. (dziedziczy po virt klasie dekorator)
Dodajemy cukier do kawy z mlekiem, tworząc nowy obiekt SugarDecorator, który owija kawę z mlekiem.
W wyniku otrzymujemy opis i koszt napoju, które są dynamicznie rozbudowywane przez dekoratory.

## Zalety wzorca Dekoratora
- Dynamiczne dodawanie funkcjonalności: Dekorator pozwala na dodawanie funkcjonalności bez modyfikacji oryginalnych klas i bez tworzenia wielu klas pochodnych.
- Składanie dekoratorów: Możemy tworzyć łańcuchy dekoratorów, dzięki czemu mamy bardzo elastyczne i modularne podejście.
- Zasada otwarte/zamknięte: Możemy rozszerzać funkcjonalność obiektów bez ingerencji w ich kod.

## Wady wzorca Dekoratora
- Złożoność konstrukcji: Przy wielu dekoratorach kod może stać się trudny do śledzenia i zarządzania.
- Potencjalne trudności w debugowaniu: W przypadku długich łańcuchów dekoratorów może być trudno określić, gdzie występują problemy.

Wzorzec Dekoratora jest szczególnie przydatny w sytuacjach, gdy chcemy dynamicznie dodawać funkcjonalność do obiektów, zachowując ich oryginalną strukturę i zachowanie.