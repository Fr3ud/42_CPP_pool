#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>
#include <time.h>

int main( void )
{
	srand(time(0));

	FragTrap ft1("PLAYER2");
	FragTrap ft2("PLAYER3");
	FragTrap human;

	ft1.meleeAttack(ft2.getName());
	ft2.takeDamage(ft1.getMeleeAtk());

	ft2.rangedAttack(human.getName());
	human.takeDamage(ft2.getRangedAtk());

	ft2.vaulthunter_dot_exe(ft1.getName());
	ft1.takeDamage(ft2.getSpecialAtk());

	human.vaulthunter_dot_exe(ft2.getName());
	ft2.takeDamage(human.getSpecialAtk());

	ft2.vaulthunter_dot_exe(human.getName());
	human.takeDamage(ft2.getSpecialAtk());

	ft1.vaulthunter_dot_exe(ft2.getName());
	ft2.takeDamage(ft1.getSpecialAtk());

	ft1.beRepaired(12);

	std::cout << ft1.getName() << " has " << ft1.getHP() << " health left." << std::endl;
	std::cout << ft2.getName() << " has " << ft2.getHP() << " health left." << std::endl;
	std::cout << human.getName() << " has " << human.getHP() << " health left." << std::endl;



	ScavTrap st1("ScavTrap1");
	ScavTrap st2("ScavTrap2");

	st1.challengeNewcomer(ft2.getName());
	st2.challengeNewcomer(human.getName());
	st1.challengeNewcomer(ft1.getName());
	st2.challengeNewcomer(st1.getName());

	st1.rangedAttack(ft1.getName());
	ft1.takeDamage(st1.getRangedAtk());

	human.vaulthunter_dot_exe(st2.getName());
	st2.takeDamage(human.getSpecialAtk());

	st2.meleeAttack(st1.getName());
	st1.takeDamage(st2.getMeleeAtk());

	std::cout << ft1.getName() << " has " << ft1.getHP() << " health left." << std::endl;
	std::cout << ft2.getName() << " has " << ft2.getHP() << " health left." << std::endl;
	std::cout << human.getName() << " has " << human.getHP() << " health left." << std::endl;
	std::cout << st1.getName() << " has " << st1.getHP() << " health left." << std::endl;
	std::cout << st2.getName() << " has " << st2.getHP() << " health left." << std::endl;

	NinjaTrap leo("Leonardo");
	ClapTrap mike("Mikelangelo");


	leo.ninjaShoebox(ft2);
	leo.ninjaShoebox(st1);
	leo.ninjaShoebox(leo);
	leo.ninjaShoebox(mike);

	leo.meleeAttack(ft1.getName());
	ft1.takeDamage(leo.getMeleeAtk());

	ft2.rangedAttack(leo.getName());
	leo.takeDamage(ft2.getRangedAtk());

	leo.rangedAttack(human.getName());
	human.takeDamage(leo.getRangedAtk());

	std::cout << ft1.getName() << " has " << ft1.getHP() << " health left." << std::endl;
	std::cout << ft2.getName() << " has " << ft2.getHP() << " health left." << std::endl;
	std::cout << human.getName() << " has " << human.getHP() << " health left." << std::endl;
	std::cout << st1.getName() << " has " << st1.getHP() << " health left." << std::endl;
	std::cout << st2.getName() << " has " << st2.getHP() << " health left." << std::endl;
	std::cout << leo.getName() << " has " << leo.getHP() << " health left." << std::endl;
	std::cout << mike.getName() << " has " << mike.getHP() << " health left." << std::endl;
}
