# Wzorzec projektowy Wizytor (Visitor)
Wzorzec Wizytor pozwala na dodanie nowych operacji do hierarchii klas bez modyfikowania istniejących klas. Działa poprzez oddzielenie operacji od struktury danych, w której ta operacja jest wykonywana.
## Kluczowe elementy wzorca:
- Elementy (Element) – Hierarchia klas, na których wykonywane są operacje.
- Wizytor (Visitor) – Interfejs definiujący operacje dla każdego typu elementu.
- Akceptacja (accept) – Każdy element implementuje metodę accept, która przyjmuje obiekt Wizytora i pozwala mu odwiedzić dany element.

## Kiedy używać wzorca Wizytor?
- Gdy masz hierarchię klas i chcesz dodawać nowe operacje bez modyfikowania tych klas.
- Gdy operacje mają różną logikę w zależności od typu elementu.
- Gdy chcesz oddzielić operacje od struktury danych.

## Jak działa wzorzec Wizytor w tym przykładzie?
- Każdy kształt (Circle, Rectangle) implementuje metodę accept, która przyjmuje obiekt Wizytora.
- Obiekt Wizytora (DrawVisitor, AreaVisitor) implementuje różne operacje dla każdego kształtu.
- Gdy wywołujesz accept, przekazujesz odpowiedni obiekt Wizytora, który wykonuje operację specyficzną dla typu kształtu.

## Zalety wzorca Wizytor:
- Rozszerzalność operacji: Możesz dodawać nowe operacje bez modyfikowania klas elementów.
- Separacja logiki: Operacje są oddzielone od struktury danych.

## Wady wzorca Wizytor:
- Skomplikowany kod: Wymaga wielu klas (zwłaszcza przy dużej liczbie elementów).
- Zależność od hierarchii: Jeśli często zmieniasz strukturę elementów, wzorzec Wizytor może być mniej efektywny.