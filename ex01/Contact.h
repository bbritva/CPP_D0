#ifndef CPP_D0_CONTACT_H
# define CPP_D0_CONTACT_H

# include <string>
# include <iostream>
# include <iomanip>


class Contact
{
private:
	int			index;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
public:
	Contact();	
	~Contact();
	void add(int index = 0);
	void show_short() const;
	void show_full() const;
};



#endif //CPP_D0_CONTACT_H
