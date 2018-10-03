#include "Human.hpp"

void Human::meleeAttack(std::string const & target)
{
	std::cout << "Use melee attack on " << target << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
	std::cout << "Use ranged attack on " << target << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
	std::cout << "FFFFFUUUUUUUUUUUUUUUU!!!!!!!! " << target << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
	void (Human::*attacks[3])(std::string const & t) = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	std::string attackNames[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

	for (int i = 0; i < 3; i++)
	{
		if (attackNames[i] == action_name)
			(this->*attacks[i])(target);
	}
}
