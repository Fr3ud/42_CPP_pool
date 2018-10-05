#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	this->_energy = 50;
	this->_maxEnergy = 50;
	this->_meleeAtk = 20;
	this->_rangedAtk = 15;
	this->_armorReduction = 3;
	this->_specialAtk = 42;

	std::cout << this->_name << " created! This time it'll be awesome, I promise !" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_energy = 50;
	this->_maxEnergy = 50;
	this->_meleeAtk = 20;
	this->_rangedAtk = 15;
	this->_armorReduction = 3;
	this->_specialAtk = 42;

	std::cout << name << " created! This time it'll be awesome, I promise !" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;
	std::cout << this->_name << " cloned! Recompiling my combat code!" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "bb" << std::endl;
}

ScavTrap		& ScavTrap::operator=(ScavTrap const &rhs)
{
	this->_hp = rhs.getHP();
	this->_maxHP = rhs.getMaxHP();
	this->_energy = rhs.getEnergy();
	this->_maxEnergy = rhs.getMaxEnergy();
	this->_lvl = rhs.getLvl();
	this->_name = rhs.getName();
	this->_meleeAtk = rhs.getMeleeAtk();
	this->_rangedAtk = rhs.getRangedAtk();
	this->_armorReduction = rhs.getArmorReduction();
	this->_specialAtk = rhs.getSpecialAtk();

	return (*this);
}

void	ScavTrap::meleeAttack(std::string const & target) const
{
	std::cout << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAtk << " points of damage !!" << std::endl;

	return;
}

void	ScavTrap::rangedAttack(std::string const & target) const
{
	std::cout << this->_name << " attacks " << target << " at range, causing " << this->_rangedAtk << " points of damage !!" << std::endl;

	return;
}

void	ScavTrap::challenge1(std::string const &target)
{
	std::cout << this->_name << " challenges " << target << " to ... !" << std::endl;
	std::cout << "Let's get this party started!" << std::endl;

	this->_energy -= 25;
}

void	ScavTrap::challenge2(std::string const &target)
{
	std::cout << this->_name << " challenges " << target << " to ... !" << std::endl;
	std::cout << "burn them, my mini-phoenix !" << std::endl;

	this->_energy -= 25;
}

void	ScavTrap::challenge3(std::string const &target)
{
	std::cout << this->_name << " challenges " << target << " to ... !" << std::endl;
	std::cout << "kill ! Reload ! Kill ! Reload ! KILL ! RELOAD !" << std::endl;

	this->_energy -= 25;
}

void	ScavTrap::challenge4(std::string const &target)
{
	std::cout << this->_name << " challenges " << target << " to ... !" << std::endl;
	std::cout << "Chk-chk, BOOM !" << std::endl;

	this->_energy -= 25;
}

void	ScavTrap::challenge5(std::string const &target)
{
	std::cout << this->_name << " challenges " << target << " to ... !" << std::endl;
	std::cout << "aww, I shoulda drawn tattoos on it !" << std::endl;

	this->_energy -= 25;
}

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	int		i;
	void	(ScavTrap::*challenges[5])(std::string const &target);

	challenges[0] = &ScavTrap::challenge1;
	challenges[1] = &ScavTrap::challenge2;
	challenges[2] = &ScavTrap::challenge3;
	challenges[3] = &ScavTrap::challenge4;
	challenges[4] = &ScavTrap::challenge5;

	i = rand() % 5;
	if (25 < this->_energy)
		(this->*challenges[i])(target);
	else
		std::cout << this->_name << " doesn't have enough energy !" << std::endl;

	return;
}
