#ifndef FILE_HPP
#define FILE_HPP

#include "Component.hpp"
#include <string>
#include <iostream>

class File : public Component {
public:
    explicit File(const std::string& name) : name(name) {}
    void showDetails(int depth = 0) const override;

private:
    std::string name;
};

#endif // FILE_HPP
