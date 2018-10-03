#include "Zombie.hpp"

Zombie::Zombie( std::string name, std::string type ): name(name), type(type)
{
	std::cout << "Zombie " << name << " <" << type << "> rises from the dead!" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << "Zombie " << name << " <" << type << "> finally R.I.P.!" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << "Zombie " << name << " <" << type << "> says: Braiiiiiiinnnssss..." << std::endl;
}
