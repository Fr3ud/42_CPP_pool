#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "ClapTrap.hpp"
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>
# include <string>

class SuperTrap: public FragTrap, public NinjaTrap
{
public:
	SuperTrap(void);
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const & src);
	~SuperTrap(void);

	SuperTrap		& operator=(SuperTrap const & right);

	void			rangedAttack(std::string const & target) const;
	void			meleeAttack(std::string const & target) const;
};

#endif