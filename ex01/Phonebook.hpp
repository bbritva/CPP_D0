#ifndef EX01_PHONEBOOK_HPP
# define EX01_PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>


class Phonebook
{
private:
	Contact contacts[8];
	int contactsAmount;
	int eldestContact;
public:
	Phonebook();
	~Phonebook();
	void add_contact();
	void show_all();
};


#endif //EX01_PHONEBOOK_HPP
