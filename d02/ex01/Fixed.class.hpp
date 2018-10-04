#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed
{
	int					_val;
	static const int	_bits;
public:
	Fixed( void );
	Fixed( Fixed const &num );
	Fixed( int const num );
	Fixed( float const num );
	float	toFloat( void ) const;
	int		toInt( void ) const;
	~Fixed( void );
	Fixed	&operator=( Fixed const &num );
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
