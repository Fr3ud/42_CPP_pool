#include <iostream>
#include <sstream>
#include <fstream>
#include <sys/stat.h>

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::string line;
		while (std::getline(std::cin, line))
		    std::cout << line << std::endl;
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::string name(argv[i]);
			std::ifstream ifs(name);
			std::stringstream buffer;

			struct stat s;
			if (stat(argv[i],&s) != 0)
			{
				std::cout << argv[0] << ": " << name << ": No such file or directory"<< std::endl;
				continue;
			}
			else if (!ifs)
			{
				std::cout << argv[0] << ": " << name << ": Permissions denied"<< std::endl;
				continue;
			}
			else if (s.st_mode & S_IFDIR)
			{
				std::cout << argv[0] << ": " << name << ": Is a directory"<< std::endl;
				continue;
			}
			buffer << ifs.rdbuf();
			std::cout <<  buffer.str();
			ifs.close();
		}
	}
}
