#include <iostream> 
#include "../lib/greetings.h"
int main(){
std::string name;
std::cout << "Whats your name? ";
std::getline(std::cin, name);
greet_user(name);
return 0;
}
