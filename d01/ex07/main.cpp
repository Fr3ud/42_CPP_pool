#include <iostream>
#include <string.h>
#include <sstream>
#include <fstream>

int main( int argc, char **argv )
{
	if (argc != 4 || !argv[1][0] || !argv[2][0] || !argv[3][0] )
		std::cout << "usage: " << argv[0] << " <filename> <string1> <string2>" << std::endl;
	else
	{
		std::string text;
		std::string file(argv[1]);
		std::ifstream ifs(file);
		if (!ifs.is_open())
		{
			std::cout << "Couldn't read the file." << std::endl;
			exit(1);
		}

		std::stringstream buffer;
		buffer << ifs.rdbuf();
		text = buffer.str();

		std::string from(argv[2]);
		std::string to(argv[3]);
		size_t start = 0;
		while ((start = text.find(from, start)) != std::string::npos)
		{
			text.replace(start, from.length(), to);
			start += to.length();
		}
		std::ofstream ofs;
		ofs.open(file + ".replace");
		if (!ofs.is_open())
		{
			std::cout << "Couldn't write to the file." << std::endl;
			exit(1);
		}
		ofs << text;
		ofs.close();
	}
}
