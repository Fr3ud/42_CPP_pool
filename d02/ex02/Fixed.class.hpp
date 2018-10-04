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
	bool	operator<( Fixed const &num ) const;
	bool	operator>( Fixed const &num ) const;
	bool	operator>=( Fixed const &num ) const;
	bool	operator<=( Fixed const &num ) const;
	bool	operator==( Fixed const &num ) const;
	bool	operator!=( Fixed const &num ) const;
	Fixed	operator+( Fixed const &num ) const;
	Fixed	operator-( Fixed const &num ) const;
	Fixed	operator*( Fixed const &num ) const;
	Fixed	operator/( Fixed const &num ) const;
	Fixed	&operator++( void );
	Fixed	operator++( int );
	Fixed	&operator--( void );
	Fixed	operator--( int );

	static Fixed &min(Fixed & a, Fixed & b);
	static Fixed const 	& min(Fixed const & a, Fixed const & b);
	static Fixed &max(Fixed & a, Fixed & b);
	static Fixed const 	& max(Fixed const & a, Fixed const & b);


	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
