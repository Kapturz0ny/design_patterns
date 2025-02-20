#include "File.hpp"
#include "Directory.hpp"
#include <memory>
#include <iostream>

int main() {
    auto root = std::make_shared<Directory>("root");
    auto home = std::make_shared<Directory>("home");
    auto user = std::make_shared<Directory>("user");
    auto file1 = std::make_shared<File>("file1.txt");
    auto file2 = std::make_shared<File>("file2.txt");
    auto file3 = std::make_shared<File>("file3.txt");

    root->add(home);
    home->add(user);
    user->add(file1);
    user->add(file2);
    root->add(file3);

    std::cout << "File system structure:\n";
    root->showDetails();

    return 0;
}
