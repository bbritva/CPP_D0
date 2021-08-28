#include "Phonebook.h"

Phonebook::Phonebook()
{
	this->contactsAmount = 0;
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