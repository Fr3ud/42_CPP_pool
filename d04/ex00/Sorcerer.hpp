#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <string>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string _name;
	std::string _title;
	Sorcerer( void );

public:
	Sorcerer( std::string name, std::string title );
	Sorcerer( Sorcerer const &copy);
	~Sorcerer( void );

	std::string	getName( void ) const;
	std::string	getTitle( void ) const;

	void		introduce( void );
	void		polymorph(Victim const &) const;

	Sorcerer		& operator=(Sorcerer const & right);
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs);

#endif