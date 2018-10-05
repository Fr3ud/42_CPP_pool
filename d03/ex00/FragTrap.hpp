#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>

class FragTrap
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
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap(void);

	FragTrap		& operator=(FragTrap const & right);

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

	void			vaulthunter_dot_exe(std::string const & target);
	void			laserGuidedPolarBear(std::string const & target);
	void			squirrelGrenade(std::string const & target);
	void			sharksWithFrikinLAZERZAttachedToTheirFrikinHeads(std::string const & target);
	void			BFG9000(std::string const & target);
	void			poisonedTits(std::string const & target);
};

#endif
