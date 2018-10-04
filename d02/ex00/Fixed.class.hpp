#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class Fixed
{
	int					_val;
	static const int	_bits;
public:
	Fixed( void );
	Fixed( Fixed const &num );
	~Fixed( void );
	Fixed	&operator=( Fixed const &num );
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif
