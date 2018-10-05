#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>

class ScavTrap
{
private:
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
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap(void);

	ScavTrap		& operator=(ScavTrap const & right);

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

	void			meleeAttack(std::string const & target) const;
	void			rangedAttack(std::string const & target) const;
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	void			challengeNewcomer(std::string const & target);
	void			challenge1(std::string const & target);
	void			challenge2(std::string const & target);
	void			challenge3(std::string const & target);
	void			challenge4(std::string const & target);
	void			challenge5(std::string const & target);
};

#endif