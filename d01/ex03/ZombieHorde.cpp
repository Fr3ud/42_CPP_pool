#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde( int N )
{
	this->_horde = new Zombie[N];
	this->_count = N;
}

void	ZombieHorde::announce( void )
{
	for (int i = 0; i < this->_count; i++)
		this->_horde[i].announce();
}

ZombieHorde::~ZombieHorde( void )
{
	delete [] this->_horde;
}
