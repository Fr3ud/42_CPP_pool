#ifndef PEON_HPP
# define PEON_HPP

#include <string>
#include "Victim.hpp"

class Peon : public Victim
{
private:
	Peon( void );
public:
	Peon( std::string name );
	Peon( Peon const &copy);
	virtual ~Peon( void );

	Peon		& operator=(Peon const & right);

	void		getPolymorphed( void ) const;

};

std::ostream & operator<<(std::ostream & o, Peon const & rhs);

#endif
