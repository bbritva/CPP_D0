#ifndef EX01_PHONEBOOK_H
# define EX01_PHONEBOOK_H

# include "Contact.h"

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
};


#endif //EX01_PHONEBOOK_H
