#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>
# include <string>

class NinjaTrap: public ClapTrap
{
public:
	NinjaTrap(void);
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const & src);
	~NinjaTrap(void);

	void			rangedAttack(std::string const & target) const;
	void			meleeAttack(std::string const & target) const;

	NinjaTrap		& operator=(NinjaTrap const &rhs);

	void	ninjaShoebox(NinjaTrap const &target) const;
	void	ninjaShoebox(ClapTrap const &target) const;
	void	ninjaShoebox(FragTrap const &target) const;
	void	ninjaShoebox(ScavTrap const &target) const;
};

#endif