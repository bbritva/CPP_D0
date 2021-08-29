#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{
	
}

void Contact::add(int i)
{
	this->index = i;
	std::cout << "Enter first name: ";
	getline(std::cin, this->first_name);
	if (std::cin.fail())
		return;
	std::cout << "Enter last name: ";
	getline(std::cin, this->last_name);
	if (std::cin.fail())
		return;
	std::cout << "Enter nickname: ";
	getline(std::cin, this->nickname);
	if (std::cin.fail())
		return;
	std::cout << "Enter phone_number: ";
	getline(std::cin, this->phone_number);
	if (std::cin.fail())
		return;
	std::cout << "Enter darkest secret: ";
	getline(std::cin, this->darkest_secret);
	if (std::cin.fail())
		return;
}

void show_str(std::string str)
{
	if (str.length() > 9)
		str[9] = '.';
	std::cout << "|" << std::setw(10) << str.substr(0, 10);
}

void Contact::show_short() const
{
	std::cout << "|" << std::setw(10) << this->index;
	show_str(this->first_name);
	show_str(this->last_name);
	show_str(this->nickname);
	std::cout << "|" << std::endl;
	

}

void Contact::show_full() const
{
	std::cout << "First name:     " << this->first_name << std::endl;
	std::cout << "Last name:      " << this->last_name << std::endl;
	std::cout << "Nickname:       " << this->nickname << std::endl;
	std::cout << "Phone number:   " << this->phone_number << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}
