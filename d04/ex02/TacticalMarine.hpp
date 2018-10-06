#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"

class TacticalMarine  : public ISpaceMarine
{
public:
	TacticalMarine( void );
	TacticalMarine( TacticalMarine const & marine );
	virtual ~TacticalMarine( void );

	TacticalMarine & operator=( TacticalMarine const & marine );

	virtual ISpaceMarine* clone( void ) const;
    
	virtual void battleCry( void ) const;
	virtual void meleeAttack( void ) const;
	virtual void rangedAttack( void ) const;
	int			getHP( void ) const;
private:
	int			_hp;
};

#endif
