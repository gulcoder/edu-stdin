#include <iostream>
#include "../lib/greetings.h" 

int main(){
	std::string name;
	std::cout << "What is your name? ";
	std::getline(std::cin, name);

	uppercase_greet_user(name);
	return 0;

}
