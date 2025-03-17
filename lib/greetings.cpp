#include <iostream>
#include "../lib/greetings.h"

void greet_user(const std::string& name){
std::cout << "Hello, " << name << "! \n";
}
void verbose_greet_user(const std::string& name){
std::cout << "Greetings, esteemed " << name << "! Its a pleasure to present you with this message: Hello! \n";
}
void uppercase_greet_user(const std::string& name){
std::cout << "HELLO, " << name << "! \n";
}
