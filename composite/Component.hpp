#ifndef COMPONENT_HPP
#define COMPONENT_HPP

#include <string>

class Component {
public:
    virtual ~Component() = default;
    virtual void showDetails(int depth = 0) const = 0;  // Wyświetla szczegóły elementu
};

#endif // COMPONENT_HPP
