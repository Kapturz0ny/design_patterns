#include "Singleton.hpp"

// Inicjalizacja statycznych pól klasy Singleton
std::unique_ptr<Singleton> Singleton::instance;
std::once_flag Singleton::initInstanceFlag;
