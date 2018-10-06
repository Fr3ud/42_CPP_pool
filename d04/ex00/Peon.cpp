#include "Peon.hpp"
#include <iostream>

Peon::Peon( void ): Victim()
{
	return;
}

Peon::Peon( std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon( void )
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon( Peon const &copy)
{
	(*this) = copy;
	std::cout << "Zog zog." << std::endl;
}

Peon		& Peon::operator=(Peon const & right)
{
	this->_name = right.getName();
	return *this;
}

void		Peon::getPolymorphed( void ) const
{
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Peon const & rhs)
{
	o << "I'm " << rhs.getName() << " and I like otters !" << std::endl;
	return o;
}