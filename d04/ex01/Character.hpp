#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"
# include <string>

class Character
{
public:
	Character( void );
	Character( Character const & character );
	Character( std::string const & name );
	~Character( void );

	Character&operator=( Character const & character );

	void			equip( AWeapon* weapon );
	void			attack( Enemy* enemy );
	void			recoverAP( void );
	int				getAP( void ) const;
	std::string		getName( void ) const;
	AWeapon*		getWeapon( void ) const;

private:
	std::string		_name;
	int				_ap;
	AWeapon			*_weapon;
};

std::ostream &	operator<<( std::ostream&o, Character const & character );

#endif
