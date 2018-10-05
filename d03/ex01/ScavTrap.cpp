#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void):
	_hp(100),
	_maxHP(100),
	_energy(50),
	_maxEnergy(50),
	_lvl(1),
	_name("PLAYER1"),
	_meleeAtk(20),
	_rangedAtk(15),
	_specialAtk(42),
	_armorReduction(3)
{
	std::cout << this->_name << " created! Let's get this party started!" << std::endl;
}

ScavTrap::ScavTrap(std::string name):
	_hp(100),
	_maxHP(100),
	_energy(100),
	_maxEnergy(100),
	_lvl(1),
	_name(name),
	_meleeAtk(30),
	_rangedAtk(20),
	_specialAtk(42),
	_armorReduction(5)
{
	std::cout << name << " created! Let's get this party started!" << std::endl;
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

unsigned int		ScavTrap::getHP(void) const { return (this->_hp); }
unsigned int		ScavTrap::getMaxHP(void) const { return (this->_maxHP); }
unsigned int		ScavTrap::getEnergy(void) const { return (this->_energy); }
unsigned int		ScavTrap::getMaxEnergy(void) const { return (this->_maxEnergy); }
unsigned int		ScavTrap::getLvl(void) const { return (this->_lvl); }
std::string			ScavTrap::getName(void) const { return (this->_name); }
unsigned int		ScavTrap::getMeleeAtk(void) const { return (this->_meleeAtk); }
unsigned int		ScavTrap::getRangedAtk(void) const { return (this->_rangedAtk); }
unsigned int		ScavTrap::getSpecialAtk(void) const { return (this->_specialAtk); }
unsigned int		ScavTrap::getArmorReduction(void) const { return (this->_armorReduction); }

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

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_hp < amount - this->_armorReduction) 
	{
		std::cout << this->_name << " takes " << this->_hp << " points of damage !!" << std::endl;
		this->_hp = 0;
	}
	else 
	{
		std::cout << this->_name << " takes " << amount - this->_armorReduction << " points of damage !!" << std::endl;
		this->_hp -= amount - this->_armorReduction;
	}

	return;
}

void	ScavTrap::beRepaired(unsigned int amount) 
{
	if (this->_hp + amount > this->_maxHP)
	 {
		std::cout <<  this->_name << " takes " << this->_maxHP - this->_hp << " points of repairs !!" << std::endl;

		this->_hp = this->_maxHP;
	}
	else 
	{
		std::cout << this->_name << " takes " << amount << " points of repairs !!" << std::endl;
		this->_hp += amount;
	}

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
