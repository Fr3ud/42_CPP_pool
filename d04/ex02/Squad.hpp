#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

class Squad : public ISquad
{
public:
	Squad( void );
	Squad( ISquad const & squad );
	virtual ~Squad( void );

	ISquad & operator=( ISquad const & squad );

	virtual ISpaceMarine* getUnit( int ) const;
	virtual int push( ISpaceMarine* );
	virtual int getCount( void ) const;
private:
	ISpaceMarine	*_pool[50];
	int				_unitCount;
};

#endif