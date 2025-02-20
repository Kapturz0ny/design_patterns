#ifndef DIRECTORY_HPP
#define DIRECTORY_HPP

#include "Component.hpp"
#include <vector>
#include <memory>
#include <string>

class Directory : public Component {
public:
    explicit Directory(const std::string& name) : name(name) {}
    void add(std::shared_ptr<Component> component);
    void showDetails(int depth = 0) const override;

private:
    std::string name;
    std::vector<std::shared_ptr<Component>> children;  // Zawiera pod-komponenty
};

#endif // DIRECTORY_HPP
