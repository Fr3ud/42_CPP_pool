#include "FragTrap.hpp"

FragTrap::FragTrap(void):
	_hp(100),
	_maxHP(100),
	_energy(100),
	_maxEnergy(100),
	_lvl(1),
	_name("PLAYER1"),
	_meleeAtk(30),
	_rangedAtk(20),
	_specialAtk(42),
	_armorReduction(5)
{
	std::cout << this->_name << " created! This time it'll be awesome, I promise !" << std::endl;
}

FragTrap::FragTrap(std::string name):
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
	std::cout << name << " created! I'm a sexy dinosaur ! Rawr." << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
	std::cout << this->_name << " cloned! ratattattattatta ! Powpowpowpow ! Powpowpowpow ! Pew-pew-pew !" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD !" << std::endl;
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

unsigned int		FragTrap::getHP(void) const { return (this->_hp); }
unsigned int		FragTrap::getMaxHP(void) const { return (this->_maxHP); }
unsigned int		FragTrap::getEnergy(void) const { return (this->_energy); }
unsigned int		FragTrap::getMaxEnergy(void) const { return (this->_maxEnergy); }
unsigned int		FragTrap::getLvl(void) const { return (this->_lvl); }
std::string			FragTrap::getName(void) const { return (this->_name); }
unsigned int		FragTrap::getMeleeAtk(void) const { return (this->_meleeAtk); }
unsigned int		FragTrap::getRangedAtk(void) const { return (this->_rangedAtk); }
unsigned int		FragTrap::getSpecialAtk(void) const { return (this->_specialAtk); }
unsigned int		FragTrap::getArmorReduction(void) const { return (this->_armorReduction); }

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

void	FragTrap::takeDamage(unsigned int amount)
{
	if (this->_hp < amount - this->_armorReduction) 
	{
		std::cout << "FR4G-TP " << this->_name << " takes " << amount - this->_armorReduction << " points of damage !" << std::endl;
		this->_hp = 0;
	}
	else 
	{
		std::cout << "FR4G-TP " << this->_name << " takes " << amount - this->_armorReduction << " points of damage !" << std::endl;
		this->_hp -= amount - this->_armorReduction;
	}

	return;
}

void	FragTrap::beRepaired(unsigned int amount) 
{
	if (this->_hp + amount > this->_maxHP)
	 {
		std::cout << "FR4G-TP " << this->_name << " takes " << this->_maxHP - this->_hp << " points of repairs !" << std::endl;
		std::cout << "Feeling lucky, punk ?" << std::endl;

		this->_hp = this->_maxHP;
	}
	else 
	{
		std::cout << "FR4G-TP " << this->_name << " takes " << amount << " points of repairs !" << std::endl;
		std::cout << "Gimme your best shot." << std::endl;
		this->_hp += amount;
	}

	return ;
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
