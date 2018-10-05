#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void): ClapTrap()
{
	this->_energy = 120;
	this->_maxEnergy = 120;
	this->_meleeAtk = 60;
	this->_rangedAtk = 20;
	this->_armorReduction = 5;
	this->_specialAtk = 42;

	std::cout << this->_name << " created!" << std::endl;
}

SuperTrap::SuperTrap(std::string name): ClapTrap(name)
{
	this->_energy = 120;
	this->_maxEnergy = 120;
	this->_meleeAtk = 60;
	this->_rangedAtk = 20;
	this->_armorReduction = 5;
	this->_specialAtk = 42;

	std::cout << name << " created!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &src)
{
	*this = src;
	std::cout << this->_name << " cloned!" << std::endl;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << this->_name << " R.I.P." << std::endl;
}

SuperTrap		& SuperTrap::operator=(SuperTrap const & rhs)
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

void	SuperTrap::rangedAttack(std::string const & target) const
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target) const
{
	NinjaTrap::meleeAttack(target);
}