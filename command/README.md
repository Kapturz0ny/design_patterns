# Wzorzec projektowy Command (polecenie)
jest jednym z tzw. wzorców czynnościowych. Jego głównym celem jest zdekapsulowanie żądania (polecenia) jako obiektu, dzięki czemu możemy manipulować poleceniami podobnie jak danymi. Pozwala to na łatwe dodawanie nowych poleceń, ich kolejkowanie, rejestrowanie, czy późniejsze wywołanie.

## Założenia wzorca Command
- Encapsulacja polecenia jako obiektu: Każde polecenie staje się klasą z metodą wykonującą określoną akcję.
- Oddzielenie nadawcy od odbiorcy polecenia: Dzięki temu możemy np. wywołać to samo polecenie dla różnych odbiorców.
- Zachowanie luźnej zależności między wywołującym polecenie a jego wykonawcą.
- Umożliwienie operacji wycofania (undo): Przechowywanie poleceń umożliwia cofnięcie ostatniego wykonania.

## Kluczowe elementy wzorca Command
- Klasa Command – Interfejs lub klasa abstrakcyjna z metodą execute().
- ConcreteCommand – Konkretne polecenia, które implementują metodę execute().
- Invoker – Klasa, która przechowuje obiekty poleceń i wywołuje ich execute().
- Receiver – Klasa, która faktycznie wykonuje akcje.

