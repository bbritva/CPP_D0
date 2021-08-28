#include <iostream>

void scream(char *str)
{
	int	i;

	i = -1;
	while(str[++i])
		(str[i] >= 'a' && str[i] <= 'z') ?
			std::cout << static_cast<char>(std::toupper(str[i])) :
			std::cout << str[i];
}

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (++i < argc)
			scream(argv[i]);
	std::cout << std::endl;
	return 0;
}
