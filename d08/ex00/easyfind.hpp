#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <stdexcept>
#include <algorithm>
#include <iostream>

template < typename T >
int		easyfind( T & t, int n)
{
	typename T::iterator	it = std::find(t.begin(), t.end(), n);
	if (it != t.end())
			return *it;
	throw std::exception();
}

#endif