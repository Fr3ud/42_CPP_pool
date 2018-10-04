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

bool	Fixed::operator<( Fixed const &num ) const
{
	return (this->_val < num.getRawBits());
}

bool	Fixed::operator>( Fixed const &num ) const
{
	return (this->_val > num.getRawBits());
}

bool	Fixed::operator>=( Fixed const &num ) const
{
	return (this->_val >= num.getRawBits());
}

bool	Fixed::operator<=( Fixed const &num ) const
{
	return (this->_val <= num.getRawBits());
}

bool	Fixed::operator==( Fixed const &num ) const
{
	return (this->_val == num.getRawBits());
}

bool	Fixed::operator!=( Fixed const &num ) const
{
	return (this->_val != num.getRawBits());
}

Fixed	Fixed::operator+( Fixed const &num ) const
{
	return (Fixed(this->toFloat() + num.toFloat()));
}

Fixed	Fixed::operator-( Fixed const &num ) const
{
	return (Fixed(this->toFloat() - num.toFloat()));
}

Fixed	Fixed::operator*( Fixed const &num ) const
{
	return (Fixed(this->toFloat() * num.toFloat()));
}

Fixed	Fixed::operator/( Fixed const &num ) const
{
	return (Fixed(this->toFloat() / num.toFloat()));
}

Fixed	&Fixed::operator++( void )
{
	this->_val++;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed tmp(*this);
	++(*this);
	return tmp;
}

Fixed	&Fixed::operator--( void )
{
	this->_val--;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed tmp(*this);
	--(*this);
	return tmp;
}

Fixed &Fixed::min(Fixed & a, Fixed & b)
{
	return (a < b) ? a : b;
}

Fixed const 	&Fixed::min(Fixed const & a, Fixed const & b)
{
	return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed & a, Fixed & b)
{
	return (a > b) ? a : b;
}

Fixed const 	&Fixed::max(Fixed const & a, Fixed const & b)
{
	return (a > b) ? a : b;
}
