#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	static std::string	_names[];
	static int			_rand;
public:
	Zombie( std::string name, std::string type );
	Zombie( void );
	~Zombie( void );
	std::string	name;
	std::string	type;
	void		announce( void );
};

#endif
