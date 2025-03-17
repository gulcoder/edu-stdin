#include <iostream>
#include <string>

int main() {
    std::string name;
    while (true) {
        std::cout << "What is your name? ";
        std::getline(std::cin, name);
        if (name == "quit") {
            break;
        }
        std::cout << "Hello, " << name << "!" << std::endl;
    }
    return 0;
}
