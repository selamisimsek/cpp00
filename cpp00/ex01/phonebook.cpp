#include "phonebook.hpp"
#include <iostream>
int main()
{
	std::string choose;

	std::cout << "Choose What Do You Do!!!" << "\n";
	std::getline(std::cin, choose);
	if(choose == "SA")
		std::cout << "sa";
}