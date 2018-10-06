#include "AssaultTerminator.hpp"
#include <iostream>

AssaultTerminator::AssaultTerminator( void )
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator( void )
{
	std::cout << "I'll be back ..." << std::endl;
}

AssaultTerminator::AssaultTerminator( AssaultTerminator const & marine )
{
	*this = marine;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator & AssaultTerminator::operator=( AssaultTerminator const & marine )
{
	this->_hp = marine.getHP();
	return *this;
}

void	AssaultTerminator::battleCry( void ) const
{
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void	AssaultTerminator::meleeAttack( void ) const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

void	AssaultTerminator::rangedAttack( void ) const
{
	std::cout <<"* does nothing *" << std::endl;
}

int		AssaultTerminator::getHP( void ) const
{
	return this->_hp;
}

ISpaceMarine* AssaultTerminator::clone( void ) const
{
	return new AssaultTerminator(*this);
}
