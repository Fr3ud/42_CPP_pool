#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <sstream>
# include <iostream>

class Brain
{
public:
	std::stringstream	address;
	std::string			identify( void ) const;
	Brain( void );
	~Brain( void );
};

#endif
