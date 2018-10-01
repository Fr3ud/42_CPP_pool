#include <iostream>

void	print(char *str)
{
	int i = -1;
	char c;

	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			c = str[i] - 32;
		else
			c = str[i];
		std::cout << c;
	}
}

int		main(int argc, char **argv)
{
	int i = 0;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (argv[++i])
		print(argv[i]);
	std::cout << std::endl;

	return (0);	
}
