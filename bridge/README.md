# Most
Oto pełny przykład implementacji wzorca **Most** w C++. Przykład ilustruje, jak wzorzec Most oddziela abstrakcję (kształt) od implementacji (API rysowania), dzięki czemu można rozszerzać obie części niezależnie.
Struktura plików

Przyjmiemy, że struktura kodu wygląda następująco:

	|-- Shape.hpp          (Abstrakcja: klasa bazowa dla kształtów)
	|-- Circle.hpp         (Konkretny kształt: okrąg)
	|-- Square.hpp         (Konkretny kształt: kwadrat)
	|-- DrawingAPI.hpp     (Interfejs implementacji rysowania)
	|-- DrawingAPI1.hpp    (Pierwsza implementacja API rysowania)
	|-- DrawingAPI2.hpp    (Druga implementacja API rysowania)
	|-- main.cpp           (Kod testowy)

Wzorzec Most pozwala na niezależne rozwijanie abstrakcji (kształtów) i implementacji (API rysowania). Dzięki temu w razie potrzeby można łatwo dodać nowe kształty lub sposoby rysowania, bez wpływu na istniejący kod.