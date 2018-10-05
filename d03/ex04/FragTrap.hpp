#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class FragTrap: public virtual ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap(void);

	FragTrap		& operator=(FragTrap const & right);

	void			meleeAttack(std::string const & target) const;
	void			rangedAttack(std::string const & target) const;

	void			vaulthunter_dot_exe(std::string const & target);
	void			laserGuidedPolarBear(std::string const & target);
	void			squirrelGrenade(std::string const & target);
	void			sharksWithFrikinLAZERZAttachedToTheirFrikinHeads(std::string const & target);
	void			BFG9000(std::string const & target);
	void			poisonedTits(std::string const & target);
};

#endif
