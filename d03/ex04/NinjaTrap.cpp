#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void): ClapTrap()
{
	this->_hp = 60;
	this->_maxHP = 60;
	this->_energy = 120;
	this->_maxEnergy = 120;
	this->_meleeAtk = 60;
	this->_rangedAtk = 5;
	this->_armorReduction = 0;
	this->_specialAtk = 42;

	std::cout << "Ninja " << this->_name << " created!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name)
{
	this->_hp = 60;
	this->_maxHP = 60;
	this->_energy = 120;
	this->_maxEnergy = 120;
	this->_meleeAtk = 60;
	this->_rangedAtk = 5;
	this->_armorReduction = 0;
	this->_specialAtk = 42;

	std::cout << "Ninja " << this->_name << " created!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src)
{
	*this = src;
	std::cout << "Ninja " << this->_name << " cloned!" << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "Ninja " << this->_name << " R.I.P." << std::endl;
}

NinjaTrap		& NinjaTrap::operator=(NinjaTrap const &rhs)
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

void	NinjaTrap::meleeAttack(std::string const & target) const
{
	std::cout << "Ninja " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAtk << " points of damage !" << std::endl;
	std::cout << "Hee Yah !" << std::endl;

	return;
}

void	NinjaTrap::rangedAttack(std::string const & target) const
{
	std::cout << "Ninja " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAtk << " points of damage !" << std::endl;
	std::cout << "In yo' FACE !" << std::endl;
	return;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const &target) const
{
	std::cout << "Ninja " << this->_name << " attacks " << target.getName() << " with love!" << std::endl;
    std::cout << "Feeling lucky, " << target.getName() << "?" << std::endl;
	return;
}

void	NinjaTrap::ninjaShoebox(ClapTrap const &target) const
{
	std::cout << "Ninja " << this->_name << " attacks " << target.getName() << " with love!" << std::endl;
    std::cout << "Feeling lucky, " << target.getName() << "?" << std::endl;
	return;
}

void	NinjaTrap::ninjaShoebox(FragTrap const &target) const
{
	std::cout << "Ninja " << this->_name << " attacks " << target.getName() << " with love!" << std::endl;
    std::cout << "Feeling lucky, " << target.getName() << "?" << std::endl;
	return;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const &target) const
{
	std::cout << "Ninja " << this->_name << " attacks " << target.getName() << " with love!" << std::endl;
    std::cout << "Feeling lucky, " << target.getName() << "?" << std::endl;
	return;
}