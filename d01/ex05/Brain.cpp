#include "Brain.hpp"

Brain::Brain( void )
{
	this->address << this;
}

Brain::~Brain( void )
{
}

std::string	Brain::identify( void ) const
{
	return (this->address.str());
}
