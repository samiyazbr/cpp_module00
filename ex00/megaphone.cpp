#include <iostream>
#include <ctype.h>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOICE" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
		{
			for (int j = 0; av[i][j]; j++)
				std::cout << (char)toupper(av[i][j]);
		}
	}
	std::cout << std::endl;
	return (0);
}