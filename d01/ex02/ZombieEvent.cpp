#include "ZombieEvent.hpp"
#include <cstdlib>
#include <ctime>

int		ZombieEvent::_rand = std::time(NULL) * 1232121;

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie*	zombie = new Zombie(name, this->_type);
	return zombie;
}

void	ZombieEvent::randomChump( void )
{
	std::string names[] = {"Zombie1", "Zombie2", "Zombie3", 
			"Zombie4", "Zombie5", "Zombie6", "Zombie7", "Zombie8", 
			"Zombie9", "Zombie10", "Zombie11", "Zombie12", "Zombie13", 
			"Zombie14", "Zombie15", "Zombie16", "Zombie17", "Zombie18", 
			"Zombie19", "Zombie20", "Zombie21", "Zombie22", "Zombie23", 
			"Zombie24", "Zombie25", "Zombie26", "Zombie27", "Zombie28", 
			"Zombie29", "Zombie30"};
	std::srand(_rand);
	ZombieEvent::_rand = ZombieEvent::_rand * 42 % 123321;
	std::string name = names[std::rand() % 30];
	Zombie zombie(name, this->_type);
	zombie.announce();
}
