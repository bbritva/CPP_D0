#include <iostream>

int scream(char *str)
{
	int			i;

	i = -1;
	while(str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			std::cout << static_cast<char>(str[i] - ('a' - 'A'));
		else
			std::cout << str[i];
	}
	std::cout << " ";
	return (0);
}

int main(int argc, char *argv[])
{
	int i;
	
	i = 0;
	while (++i < argc)
		scream(argv[i]);
	std::cout << std::endl;
	return 0;
}
