#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer( void )
{
	this->_name = "Unknown";
	this->_title = "Unknown";
}

Sorcerer::Sorcerer( std::string name, std::string title ): _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
	return;
}

Sorcerer::~Sorcerer( void )
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer::Sorcerer( Sorcerer const &copy)
{
	(*this) = copy;
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

std::string	Sorcerer::getName( void ) const { return this->_name; }
std::string	Sorcerer::getTitle( void ) const { return this->_title; }

Sorcerer		& Sorcerer::operator=(Sorcerer const & right)
{
	this->_name = right.getName();
	this->_title = right.getTitle();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs)
{
	o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;
	return o;
}

void		Sorcerer::introduce( void )
{
	std::cout << *this;
}

void		Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}
