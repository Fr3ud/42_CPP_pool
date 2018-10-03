#include "ZombieHorde.hpp"
#include <iostream>

void	test( void )
{
	std::cout << "-- TEST --" << std::endl;
	ZombieHorde horde = ZombieHorde(4);
	std::cout << "-- announce() --" << std::endl;
	horde.announce();
}

int main( void )
{
	test();
	std::cout << "-- THE END --" << std::endl;
}
