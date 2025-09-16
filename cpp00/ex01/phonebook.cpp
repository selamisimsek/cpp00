#include "phonebook.hpp"
#include <iostream>
#include <cstdlib>
PhoneBook::PhoneBook()
{
    contactCount = 0;
}
void PhoneBook::addContact()
{
	Contact member;
	std::string member_information;

	while(member_information.empty())
	{
		std::cout<< "First Name : ";
		if(std::getline(std::cin,member_information))
			member.set(member_information,FIRST_NAME);
		else
			exit(0);
		if(member_information.empty())
			std::cout<< "Input cannot be empty. Please try again.\n"; 
	}

	member_information.clear();

	while(member_information.empty())
	{
		std::cout<< "Last Name : ";
		if(std::getline(std::cin,member_information))
			member.set(member_information,LAST_NAME);
		else
			exit(0);
		if(member_information.empty())
			std::cout<< "Input cannot be empty. Please try again.\n"; 
	}
	member_information.clear();

	while(member_information.empty())
	{
		std::cout<< "Nick Name : ";
		if(std::getline(std::cin,member_information))
			member.set(member_information,NICKNAME);
		else
			exit(0);
		if(member_information.empty())
			std::cout<< "Input cannot be empty. Please try again.\n";
	}

	member_information.clear();

	while(member_information.empty())
	{
		std::cout<< "Phone Number : ";
		if(std::getline(std::cin,member_information))
			member.set(member_information,PHONE_NUMBER);
		else
			exit(0);
		if(member_information.empty())
			std::cout<< "Input cannot be empty. Please try again.\n"; 
	}
	
	member_information.clear();

	while(member_information.empty())
	{
		std::cout<< "Darkest Secret : ";
		if(std::getline(std::cin,member_information))
			member.set(member_information,DARKEST_SECRET);
		else
			exit(0);
		if(member_information.empty())
			std::cout<< "Input cannot be empty. Please try again.\n"; 
	}
	contactCount = contactCount % 8;
	contacts[contactCount] = member;
	contactCount++;
}
std::string formatField(const std::string& str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    else
        return std::string(10 - str.length(), ' ') + str;
}
void PhoneBook::searchContacts() const
{
	std::cout << "|     Index|First Name|Last  Name|  Nickname|\n";
	for(int i = 0; i < 8; i++)
	{	
		std::cout << "|         " << i;
		std::cout << "|" << formatField(contacts[i].get(FIRST_NAME));
		std::cout << "|" << formatField(contacts[i].get(LAST_NAME)); 
		std::cout << "|" << formatField(contacts[i].get(NICKNAME)) << "|\n";
	}

}

void check_choose(std::string choose, PhoneBook &phonebook)
{
	if(choose == "ADD")
		phonebook.addContact();
	else if (choose == "SEARCH")
		phonebook.searchContacts();
	else if (choose == "EXIT")
		exit(0);
	else
		std::cout << "INVALID CHOOSE" << "\n";
}
int main()
{
	PhoneBook phonebook;
	std::string choose;

	while(1)
	{
		std::cout << "Choose What Do You Do?" << "\n";
		if(std::getline(std::cin, choose))
			check_choose(choose, phonebook);
		else
			exit(0);
	}
}