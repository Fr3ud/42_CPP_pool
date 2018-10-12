#include <vector>
#include <map>
#include <list>
#include <algorithm>
#include "easyfind.hpp"

int				main( void )
{
	srand(time(0));

	std::list<int> list;

	list.push_back(4);
	list.push_back(2);
	list.push_back(3);
	list.push_back(5);
	list.push_back(rand() % 10);

    try
	{
		int result = easyfind(list, 4);
		std::cout << "Found value [4] at index [" << result << "]" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Value not found" << std::endl;
	}

    try
	{
		int result = easyfind(list, 2);
		std::cout << "Found value [2] at index [" << result << "]" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Value not found" << std::endl;
	}

    return 0;
}