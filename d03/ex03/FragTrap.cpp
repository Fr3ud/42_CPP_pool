#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	this->_energy = 100;
	this->_maxEnergy = 100;
	this->_meleeAtk = 30;
	this->_rangedAtk = 20;
	this->_armorReduction = 5;
	this->_specialAtk = 42;

	std::cout << this->_name << " created! This time it'll be awesome, I promise !" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_energy = 100;
	this->_maxEnergy = 100;
	this->_meleeAtk = 30;
	this->_rangedAtk = 20;
	this->_armorReduction = 5;
	this->_specialAtk = 42;

	std::cout << this->_name << " created! This time it'll be awesome, I promise !" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
	std::cout << this->_name << " cloned! ratattattattatta ! Powpowpowpow ! Powpowpowpow ! Pew-pew-pew !" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << this->_name << " I'M DEAD I'M DEAD OHMYGOD I'M DEAD !" << std::endl;
}

FragTrap		& FragTrap::operator=(FragTrap const &rhs)
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

void	FragTrap::meleeAttack(std::string const & target) const
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAtk << " points of damage !" << std::endl;
	std::cout << "Hee Yah !" << std::endl;

	return;
}

void	FragTrap::rangedAttack(std::string const & target) const
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAtk << " points of damage !" << std::endl;
	std::cout << "In yo' FACE !" << std::endl;

	return;
}

void	FragTrap::laserGuidedPolarBear(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with a Laser Guided Polar Bear, causing over 42 points of damage !" << std::endl;
	std::cout << "Let's get this party started!" << std::endl;

	this->_energy -= 25;
}

void	FragTrap::squirrelGrenade(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with a Squirrel Grenade, causing over 42 points of damage !" << std::endl;
	std::cout << "burn them, my mini-phoenix !" << std::endl;

	this->_energy -= 25;
}

void	FragTrap::sharksWithFrikinLAZERZAttachedToTheirFrikinHeads(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with a Sharks-With-Frikin'-LAZERZ-Attached-To-Their-Frikin'-Heads, causing 42 points of damage !" << std::endl;
	std::cout << "kill ! Reload ! Kill ! Reload ! KILL ! RELOAD !" << std::endl;

	this->_energy -= 25;
}

void	FragTrap::BFG9000(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with a BFG9000, causing 42 points of damage !" << std::endl;
	std::cout << "Chk-chk, BOOM !" << std::endl;

	this->_energy -= 25;
}

void	FragTrap::poisonedTits(std::string const &target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with a Poisoned tits, causing over 42 points of damage !" << std::endl;
	std::cout << "aww, I shoulda drawn tattoos on it !" << std::endl;

	this->_energy -= 25;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int		i;
	void	(FragTrap::*attacks[5])(std::string const &target);

	attacks[0] = &FragTrap::laserGuidedPolarBear;
	attacks[1] = &FragTrap::squirrelGrenade;
	attacks[2] = &FragTrap::sharksWithFrikinLAZERZAttachedToTheirFrikinHeads;
	attacks[3] = &FragTrap::BFG9000;
	attacks[4] = &FragTrap::poisonedTits;

	i = rand() % 5;
	if (25 < this->_energy)
		(this->*attacks[i])(target);
	else
		std::cout << "FR4G-TP " << this->_name << " doesn't have enough energy !" << std::endl;

	return;
}
