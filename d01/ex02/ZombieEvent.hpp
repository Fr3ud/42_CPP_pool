#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{
	std::string	_type;
	static int	_rand;
public:
	void	setZombieType(std::string type);
	Zombie*	newZombie(std::string name);
	void	randomChump( void );
};

#endif
