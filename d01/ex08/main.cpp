#include "Human.hpp"

int		main( void )
{
	Human	bob;

	bob.action("meleeAttack", "Zombie1");
	bob.action("rangedAttack", "Zombie2");
	bob.action("intimidatingShout", "Zombie3");

	return (0);
}
