#include "Directory.hpp"
#include <iostream>

void Directory::add(std::shared_ptr<Component> component) {
    children.push_back(component);
}

void Directory::showDetails(int depth) const {
    std::cout << std::string(depth, '-') << " Directory: " << name << std::endl;
    for (const auto& child : children) {
        child->showDetails(depth + 2);  // Wywołujemy rekurencyjnie na każdym pod-komponencie
    }
}
