#include "Contact.h"

Contact::Contact()
{

}

Contact::~Contact()
{
	return;
}

void Contact::add(int index)
{
	this->index = index;
	std::cout << "Enter first name: ";
	std::cin >> this->first_name;
	std::cout << "Enter last name: ";
	std::cin >> this->last_name;
	std::cout << "Enter nickname: ";
	std::cin >> this->nickname;
	std::cout << "Enter phone_number: ";
	std::cin >> this->phone_number;
	std::cout << "Enter darkest secret: ";
	std::cin >> this->darkest_secret;	
}


