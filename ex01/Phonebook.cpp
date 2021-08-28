#include "Phonebook.h"

Phonebook::Phonebook()
{
	this->contactsAmount = 0;
	this->eldestContact = 0;
}

Phonebook::~Phonebook()
{
	
}

void Phonebook::add_contact()
{
	if (contactsAmount < 8)
	{
		this->contacts[this->contactsAmount].add(contactsAmount);
		this->contactsAmount++;
	}
	else
	{
		this->contacts[this->eldestContact].add(eldestContact);
		this->eldestContact++;
		if (this->eldestContact > 7)
			this->eldestContact = 0;
	}
}

void Phonebook::show_all(){
	int	counter;
	
	std::cout << "_____________________________________________" << std::endl;
	std:: cout << "|Index     |First name|Last name |Nickname  |" << std::endl;
	std:: cout << "|----------|----------|----------|----------|" << std::endl;
	counter = -1;
	while (++counter < this->contactsAmount)
		this->contacts[counter].show_short();
	std:: cout << "_____________________________________________" << std::endl;
	std:: cout << "Enter index for full information: ";
	std::cin >> counter;
	if (std::cin.fail())
	{
		std::cout << "Wrong index!" << std::endl;
		std::cin.clear();
		std::cin.ignore(10000, '\n');
	}
	else if (counter < 0 || counter > (this->contactsAmount - 1))
		std:: cout << "Wrong index!" << std::endl;
	else
		this->contacts[counter].show_full();
}