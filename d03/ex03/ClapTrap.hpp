#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
protected:
	unsigned int	_hp;
	unsigned int	_maxHP;
	unsigned int	_energy;
	unsigned int	_maxEnergy;
	unsigned int	_lvl;
	std::string		_name;
	unsigned int	_meleeAtk;
	unsigned int	_rangedAtk;
	unsigned int	_specialAtk;
	unsigned int	_armorReduction;

public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	~ClapTrap(void);

	ClapTrap		& operator=(ClapTrap const & right);

	unsigned int	getHP(void) const;
	unsigned int	getMaxHP(void) const;
	unsigned int	getEnergy(void) const;
	unsigned int	getMaxEnergy(void) const;
	unsigned int	getLvl(void) const;
	std::string		getName(void) const;
	unsigned int	getMeleeAtk(void) const;
	unsigned int	getRangedAtk(void) const;
	unsigned int	getSpecialAtk(void) const;
	unsigned int	getArmorReduction(void) const;

	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
};

#endif
