# Nazwa pliku wykonywalnego
TARGET = composite_example

# Katalog build
BUILD_DIR = build

# Kompilator i flagi kompilacji
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

# Pliki źródłowe i obiektowe
SOURCES = main.cpp File.cpp Directory.cpp
OBJECTS = $(patsubst %.cpp,$(BUILD_DIR)/%.o,$(SOURCES))

# Reguła domyślna - buduje projekt w katalogu build
all: $(BUILD_DIR) $(BUILD_DIR)/$(TARGET)

# Tworzenie katalogu build, jeśli nie istnieje
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Tworzenie pliku wykonywalnego w katalogu build
$(BUILD_DIR)/$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJECTS)

# Kompilacja każdego pliku źródłowego na obiektowy w katalogu build
$(BUILD_DIR)/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Usuwanie plików obiektowych i pliku wykonywalnego
clean:
	rm -rf $(BUILD_DIR)

# Phony target - aby `make clean` zawsze działał
.PHONY: all clean
