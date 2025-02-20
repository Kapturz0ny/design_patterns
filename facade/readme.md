# Wzorzec Fasady
(Facade Pattern) jest wzorcem strukturalnym, którego celem jest uproszczenie interfejsu do złożonego systemu klas lub obiektów. Fasada zapewnia uproszczony, wyższy poziom interfejsu, który ułatwia korzystanie z bardziej skomplikowanego subsystemu, bez potrzeby znajomości jego szczegółów.

## Kiedy warto stosować wzorzec fasady?

Wzorzec fasady jest szczególnie przydatny, gdy:

Mamy złożony system składający się z wielu klas, które muszą ze sobą współpracować, i chcemy ograniczyć bezpośrednią interakcję między użytkownikami systemu a jego wewnętrznymi komponentami.
Chcemy uczynić kod bardziej czytelnym i łatwym w utrzymaniu, ukrywając złożoność implementacji za prostym interfejsem.
Potrzebujemy uproszczonego interfejsu dla systemu, by zredukować liczbę zależności między komponentami.

## Przykład wzorca fasady w C++

Wyobraźmy sobie system, który zajmuje się odtwarzaniem multimediów, ale składa się z kilku skomplikowanych modułów: dekoderów audio, dekoderów wideo, modułu synchronizacji dźwięku z obrazem, modułu renderującego obraz, itp. Zamiast tworzyć instancję każdej klasy i zarządzać ich wzajemnymi zależnościami, możemy stworzyć klasę Fasady o nazwie MediaFacade, która udostępnia prosty interfejs do odtwarzania mediów.

```C++
#include <iostream>

// Złożone klasy subsystemu
class AudioDecoder {
public:
    void decodeAudio() { std::cout << "Decoding audio...\n"; }
};

class VideoDecoder {
public:
    void decodeVideo() { std::cout << "Decoding video...\n"; }
};

class AudioVideoSynchronizer {
public:
    void synchronize() { std::cout << "Synchronizing audio and video...\n"; }
};

class Renderer {
public:
    void render() { std::cout << "Rendering content to screen...\n"; }
};

// Klasa fasady
class MediaFacade {
private:
    AudioDecoder audioDecoder;
    VideoDecoder videoDecoder;
    AudioVideoSynchronizer synchronizer;
    Renderer renderer;

public:
    void playMedia() {
        audioDecoder.decodeAudio();
        videoDecoder.decodeVideo();
        synchronizer.synchronize();
        renderer.render();
    }
};

// Użycie fasady
int main() {
    MediaFacade mediaPlayer;
    mediaPlayer.playMedia();  // Użytkownik nie musi znać złożoności subsystemów
    return 0;
}

```

### Jak działa ten przykład?
MediaFacade dostarcza prosty interfejs do obsługi skomplikowanego procesu odtwarzania mediów.
Zamiast korzystać z poszczególnych klas, użytkownik wywołuje jedną metodę playMedia() klasy fasady, która zarządza wszystkimi potrzebnymi krokami w odpowiedniej kolejności.
Fasada ukrywa szczegóły implementacji, przez co użytkownik nie musi wiedzieć, jak dokładnie działają dekodery i synchronizatory.

## Zalety stosowania wzorca fasady
- Uproszczenie interfejsu: Klient korzysta z jednego, prostego punktu dostępowego, zamiast zarządzać wieloma klasami.
- Ułatwienie zarządzania złożonym systemem: Fasada pozwala na izolację zależności między klientem a komponentami wewnętrznymi.
- Większa czytelność i organizacja kodu: Złożone procesy mogą być opakowane w prosty interfejs, dzięki czemu kod jest bardziej przejrzysty i łatwiejszy do utrzymania.

Wzorzec fasady jest użyteczny wszędzie tam, gdzie złożoność systemu może przeszkadzać użytkownikowi w jego efektywnym użyciu.