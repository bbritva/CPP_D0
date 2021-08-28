#include <iostream>
#include "Phonebook.h"

int main()
{
	std::string command;
	Phonebook phonebook;

	std::cout << "Phonebook started. Now it is empty." << std::endl;
	std::cout << "You may use it with following commands:" << std::endl;
	std::cout << "ADD - To add contact in your phonebook" << std::endl;
	std::cout << "SEARCH - To search contact in your phonebook" << std::endl;
	std::cout << "EXIT - To exit from your phonebook" << std::endl;
	while (true)
	{
		std::cout << ">>";
		std::cin >> command;
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			std::cout << "ADD command" << std::endl;
		else if (command == "SEARCH")
			std::cout << "SEARCH command" << std::endl;
		else 
			std::cout << "Wrong command" << std::endl;

	}
	std::cout << "Phonebook stopped. All data cleared." << std::endl;

	return 0;
}
