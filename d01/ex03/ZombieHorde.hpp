#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
	static int	_rand;
	Zombie*		_horde;
	int			_count;
public:
	ZombieHorde( int N );
	~ZombieHorde( void );
	void		announce( void );
};

#endif
