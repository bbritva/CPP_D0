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

/**Else if the command is SEARCH:
 * The program will display a list of the available non-empty contacts in 4
columns: index, first name, last name and nickname.
 * Each column must be 10 chars wide, right aligned and separated by a ’|’ 
character. Any output longer than the columns’ width is truncated and the last
 displayable character is replaced by a dot (’.’).
 * Then the program will prompt again for the index of the desired entry and 
displays the contact’s information, one field per line. If the input makes no
sense, define a relevant behavior.
 */

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
	if (counter < 0 || counter > (this->contactsAmount - 1))
		std:: cout << "Wrong index!" << std::endl;
	else
		this->contacts[counter].show_full();
	
}