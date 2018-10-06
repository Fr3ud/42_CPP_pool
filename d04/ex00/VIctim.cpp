#include "Victim.hpp"
#include <iostream>

Victim::Victim( void )
{
	this->_name = "Unknown";
}

Victim::Victim( std::string name ): _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}

Victim::~Victim( void )
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
}

Victim::Victim( Victim const &copy)
{
	(*this) = copy;
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}

std::string	Victim::getName( void ) const { return this->_name; }

Victim			& Victim::operator=(Victim const & right)
{
	this->_name = right.getName();
	return *this;
}

void		Victim::introduce( void )
{
	std::cout << *this;
}

void		Victim::getPolymorphed( void ) const
{
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Victim const & rhs)
{
	o << "I'm " << rhs.getName() << " and I like otters !" << std::endl;
	return o;
}
