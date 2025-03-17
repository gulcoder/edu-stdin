#include <iostream>
#include <string>
#include "../lib/greetings.h"
#include "CLI/CLI.hpp"

int main(int argc, char* argv[]) {
    CLI::App app{"Greeter App"};

    bool uppercase = false;
    bool verbose = false;

    // Add short and long command-line options
    app.add_flag("-u,--uppercase", uppercase, "Print the greeting in uppercase");
    app.add_flag("-v,--verbose", verbose, "Print a verbose greeting");

    // Parse the command-line arguments
    CLI11_PARSE(app, argc, argv);

    std::string name;
    std::cout << "What is your name? ";
    std::getline(std::cin, name);

    // Handle the options
    if (uppercase) {
        uppercase_greet_user(name);
    } else if (verbose) {
        verbose_greet_user(name);
    } else {
        greet_user(name);
    }

    return 0;
}
