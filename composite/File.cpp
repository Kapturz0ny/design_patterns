#include "File.hpp"

void File::showDetails(int depth) const {
    std::cout << std::string(depth, '-') << " File: " << name << std::endl;
}
