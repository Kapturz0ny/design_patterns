# Wzorzec projektowy Metoda wirtualna (Template Method)
Wzorzec Metoda wirtualna (lub Template Method) definiuje szkielet algorytmu w metodzie bazowej, pozostawiając niektóre kroki do implementacji w klasach pochodnych. Umożliwia to ponowne wykorzystanie wspólnej logiki w klasie bazowej, jednocześnie pozwalając klasom pochodnym na dostosowanie szczegółów.

## Struktura wzorca:
- Klasa bazowa:
  - Zawiera metodę szablonową (template method), która definiuje szkielet algorytmu.
  - Wywołuje metody, które mogą być (lub muszą być) zdefiniowane w klasach pochodnych.
- Klasy pochodne:
  - Implementują szczegółowe kroki algorytmu.

## Przykład w C++: Proces parzenia napoju
Wyobraźmy sobie aplikację, która obsługuje proces parzenia napojów, takich jak herbata i kawa. W obu przypadkach proces składa się z podobnych kroków:
- Gotowanie wody.
- Dodawanie składników (np. herbaty lub kawy).
- Dodawanie dodatków (np. cukru, mleka).
- Nalewanie do filiżanki.

Różnice polegają na szczegółach, jakie składniki i dodatki są używane.

### Jak działa wzorzec Metoda szablonowa w tym przykładzie?
- Klasa bazowa CaffeineBeverage definiuje szkielet algorytmu w metodzie prepareRecipe, który jest wspólny dla wszystkich napojów.
- Konkretne kroki (brew i addCondiments) są deklarowane jako metody czysto wirtualne (= 0), co wymusza ich implementację w klasach pochodnych (Tea i Coffee).
- Klasy pochodne dostarczają własne szczegóły dla tych kroków.

## Zalety wzorca:
- Reużywalność kodu: Wspólna logika jest zaimplementowana w klasie bazowej.
- Elastyczność: Klasy pochodne mogą definiować własne szczegóły dla kroków algorytmu.
- Przestrzeganie zasady otwarte/zamknięte: Można rozszerzać algorytm (dodawać nowe klasy pochodne) bez modyfikacji kodu w klasie bazowej.

## Wady wzorca:
- Złożoność w hierarchii klas: Wymaga odpowiedniej struktury dziedziczenia.
- Ścisłe powiązanie: Klasy pochodne są związane z klasą bazową, co może utrudniać refaktoryzację.

Wzorzec ten jest bardzo popularny, gdy struktura algorytmu jest znana, ale konkretne kroki zależą od specyficznych wymagań, jak w powyższym przykładzie z napojami.	