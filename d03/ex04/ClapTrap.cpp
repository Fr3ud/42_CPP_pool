#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):
	_hp(100),
	_maxHP(100),
	_lvl(1),
	_name("PLAYER1")
{
	std::cout << this->_name << " created! *clap clap*" << std::endl;
}

ClapTrap::ClapTrap(std::string name):
	_hp(100),
	_maxHP(100),
	_lvl(1),
	_name(name)
{
	std::cout << name << " created! *clap clap*" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	std::cout << this->_name << " cloned! *clap clap*" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "I'M DEAD *clap clap* I'M DEAD *clap clap* OHMYGOD I'M DEAD ! *clap clap*" << std::endl;
}

ClapTrap		& ClapTrap::operator=(ClapTrap const &rhs)
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

unsigned int		ClapTrap::getHP(void) const { return (this->_hp); }
unsigned int		ClapTrap::getMaxHP(void) const { return (this->_maxHP); }
unsigned int		ClapTrap::getEnergy(void) const { return (this->_energy); }
unsigned int		ClapTrap::getMaxEnergy(void) const { return (this->_maxEnergy); }
unsigned int		ClapTrap::getLvl(void) const { return (this->_lvl); }
std::string			ClapTrap::getName(void) const { return (this->_name); }
unsigned int		ClapTrap::getMeleeAtk(void) const { return (this->_meleeAtk); }
unsigned int		ClapTrap::getRangedAtk(void) const { return (this->_rangedAtk); }
unsigned int		ClapTrap::getSpecialAtk(void) const { return (this->_specialAtk); }
unsigned int		ClapTrap::getArmorReduction(void) const { return (this->_armorReduction); }

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp < amount - this->_armorReduction) 
	{
		std::cout << this->_name << " takes " << this->_hp << " points of damage !" << std::endl;
		this->_hp = 0;
	}
	else 
	{
		std::cout << this->_name << " takes " << amount - this->_armorReduction << " points of damage !" << std::endl;
		this->_hp -= amount - this->_armorReduction;
	}

	return;
}

void	ClapTrap::beRepaired(unsigned int amount) 
{
	if (this->_hp + amount > this->_maxHP)
	 {
		std::cout << this->_name << " takes " << this->_maxHP - this->_hp << " points of repairs !" << std::endl;
		std::cout << "Feeling lucky, punk ?" << std::endl;

		this->_hp = this->_maxHP;
	}
	else 
	{
		std::cout << this->_name << " takes " << amount << " points of repairs !" << std::endl;
		std::cout << "Gimme your best shot." << std::endl;
		this->_hp += amount;
	}

	return ;
}
