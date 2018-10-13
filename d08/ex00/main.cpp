#include "easyfind.hpp"

int				main( void )
{
	std::list<int> list;

	list.push_back(4);
	list.push_back(2);
	list.push_back(3);
	list.push_back(5);
	list.push_back(7);

    try
	{
		easyfind(list, 3);
	}
	catch (std::exception& e)
	{
		std::cout << "Value not found" << std::endl;
	}

    try
	{
		easyfind(list, 42);
	}
	catch (std::exception& e)
	{
		std::cout << "Value not found" << std::endl;
	}

    try
	{
		easyfind(list, 4);
	}
	catch (std::exception& e)
	{
		std::cout << "Value not found" << std::endl;
	}

    return 0;
}