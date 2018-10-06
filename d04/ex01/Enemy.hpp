#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>

class Enemy
{
public:
	Enemy( int hp, std::string const & type );
	Enemy( Enemy const & enemy );
	Enemy( void );
	virtual ~Enemy( void );

	Enemy	& operator=( Enemy const & enemy );

	int				getHP( void ) const;
	std::string		getType( void ) const;
	virtual void	takeDamage( int damage );

protected:
	int				_hp;
	std::string		_type;
};


#endif
