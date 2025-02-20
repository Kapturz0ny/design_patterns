#ifndef CONTEXT_H
#define CONTEXT_H

#include <unordered_map>
#include <string>

class Context {
public:
    void setVariable(const std::string& name, int value) {
        variables[name] = value;
    }

    int getVariable(const std::string& name) const {
        auto it = variables.find(name);
        if (it != variables.end()) {
            return it->second;
        }
        throw std::runtime_error("Variable not found: " + name);
    }

private:
    std::unordered_map<std::string, int> variables; // Przechowuje zmienne
};

#endif // CONTEXT_H
