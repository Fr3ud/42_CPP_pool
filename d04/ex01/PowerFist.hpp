#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist( void );
	PowerFist( PowerFist const & weapon );
	virtual ~PowerFist( void );

	PowerFist&operator=( PowerFist const & weapon );
	virtual void	attack( void ) const;
};


#endif
