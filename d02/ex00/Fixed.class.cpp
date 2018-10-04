#include "Fixed.class.hpp"
#include <iostream>
#include <string>

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

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=( Fixed const &num )
{
	this->_val = num.getRawBits();
	return *this;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_val;
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_val = raw;
}
