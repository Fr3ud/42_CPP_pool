#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap: public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap(void);

	ScavTrap		& operator=(ScavTrap const & right);

	void			meleeAttack(std::string const & target) const;
	void			rangedAttack(std::string const & target) const;

	void			challengeNewcomer(std::string const & target);
	void			challenge1(std::string const & target);
	void			challenge2(std::string const & target);
	void			challenge3(std::string const & target);
	void			challenge4(std::string const & target);
	void			challenge5(std::string const & target);
};

#endif