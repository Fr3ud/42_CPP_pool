#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

const int	Fixed::_bits = 8;

Fixed::Fixed( void ): _val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const &num )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = num;
}

Fixed::Fixed( int const num ): _val(num << Fixed::_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const num ): _val(roundf(num * (1 << Fixed::_bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=( Fixed const &num )
{
	std::cout << "Assignation operator called" << std::endl;
	this->_val = num.getRawBits();
	return *this;
}

int		Fixed::getRawBits( void ) const
{
	return this->_val;
}

void	Fixed::setRawBits( int const raw )
{
	this->_val = raw;
}

float	Fixed::toFloat( void ) const
{
	return this->_val / (float)(1 << Fixed::_bits);
}

int		Fixed::toInt( void ) const
{
	return this->_val / (1 << Fixed::_bits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
