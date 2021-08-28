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

void show_str(std::string str)
{
	if (str.length() > 9)
		str[9] = '.';
	std:: cout << "|" << std::setw(10) << str.substr(0, 10);
}

void Contact::show_short() const
{
	std:: cout << "|" << std::setw(10) << this->index;
	show_str(this->first_name);
	show_str(this->last_name);
	show_str(this->nickname);
	std:: cout << "|" << std::endl;
	

}



