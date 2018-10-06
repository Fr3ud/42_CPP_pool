#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <string>

class Victim
{
protected:
	std::string _name;
	Victim( void );

public:
	Victim( std::string name );
	Victim( Victim const &copy);
	virtual ~Victim( void );

	std::string	getName( void ) const;

	void			introduce( void );
	virtual void	getPolymorphed( void ) const;

	Victim			& operator=(Victim const & right);
};

std::ostream & operator<<(std::ostream & o, Victim const & rhs);

#endif
