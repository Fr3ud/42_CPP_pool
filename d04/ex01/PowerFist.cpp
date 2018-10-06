#include "PowerFist.hpp"
#include <iostream>

PowerFist::PowerFist( void )
{
	this->_name = "Power Fist";
	this->_damage = 50;
	this->_apcost = 8;
}

PowerFist::~PowerFist( void ) {}

PowerFist::PowerFist( PowerFist const & weapon )
{
	*this = weapon;
}

PowerFist&	PowerFist::operator=( PowerFist const & weapon )
{
	this->_name = weapon.getName();
	this->_apcost = weapon.getAPCost();
	this->_damage = weapon.getDamage();

	return *this;
}

void		PowerFist::attack( void ) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}