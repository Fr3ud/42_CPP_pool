#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <exception>
#include <list>

template < typename T >
int		easyfind( T & t, int n)
{
    std::list<int>::const_iterator			it = t.begin(); 
	std::list<int>::const_iterator			ite = t.end();
    while (it != ite)
    {
	    if (*it == n)
        {
            std::cout << "Value was found." << std::endl;
			return 0;
        }
        it++;
    }
	throw std::exception();
}

#endif