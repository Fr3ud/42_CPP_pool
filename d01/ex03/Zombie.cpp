#include "Zombie.hpp"

int		Zombie::_rand = std::time(NULL) * 1232121;
std::string Zombie::_names[] = {"Zombie1", "Zombie2", "Zombie3",
			"Zombie4", "Zombie5", "Zombie6", "Zombie7", "Zombie8",
			"Zombie9", "Zombie10", "Zombie11", "Zombie12", "Zombie13",
			"Zombie14", "Zombie15", "Zombie16", "Zombie17", "Zombie18",
			"Zombie19", "Zombie20", "Zombie21", "Zombie22", "Zombie23",
			"Zombie24", "Zombie25", "Zombie26", "Zombie27", "Zombie28",
			"Zombie29", "Zombie30"};
Zombie::Zombie( std::string name, std::string type ): name(name), type(type)
{
	std::cout << "Zombie " << name << " <" << type << "> rises from the dead!" << std::endl;
}

Zombie::Zombie( void ): type("Default")
{
	std::srand(_rand);
	Zombie::_rand = Zombie::_rand * 42 % 123321;
	this->name = Zombie::_names[std::rand() % 30];
	std::cout << "Zombie " << this->name << " <" << type << "> rises from the dead!" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << "Zombie " << name << " <" << type << "> finally R.I.P.!" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << "Zombie " << name << " <" << type << "> says: Braiiiiiiinnnssss..." << std::endl;
}
